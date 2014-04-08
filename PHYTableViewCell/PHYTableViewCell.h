//
//  PHTableViewCell.h
//  Rally
//
//  Created by Matt Ricketson on 10/31/13.
//  Copyright (c) 2013 Phyre. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 `PHTableViewCell` is a `UITableViewCell` subclass with convenience methods for simple registration and usage of custom cells. `PHTableViewCell` decouples the work of managing `UITableViewCell` subclasses from the view controller.
 
 To use `PHTableViewCell`, create a custom subclass defined programmatically or with a corresponding nib file.
 */
@interface PHYTableViewCell : UITableViewCell

///---------------------
/// @name Initialization
///---------------------

/**
 Allocates and initializes a new cell instance.
 
 @discussion
 If the cell has a corresponding nib file, then it is loaded from the nib.
 
 @return An new cell instance.
 */
+ (instancetype)cell;

/**
 Allocates and initializes a new cell instance with the corresponding style and reuse identifier.
 
 @discussion
 If the cell has a corresponding nib file, then it is loaded from the nib.
 
 @param style The table view cell style to initialize the cell with.
 @param reuseIdentifier The reuse identifier to initialize the cell with.
 
 @return An new cell instance.
 */
+ (instancetype)cellWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;


///----------------------------
/// @name Class Characteristics
///----------------------------

/**
 The default reuse identifier to use when registering and dequeuing cells.
 
 @discussion By default, this method returns a string corresponding to the name of the class.
 
 @return The default reuse identifier to use when registering and dequeuing cells.
 */
+ (NSString *)cellIdentifier;

/**
 The name of the nib file to search for when registering a nib-based table view cell.
 
 @discussion By default, this method returns a filename corresponding to the name of the class. Override this method to specify a custom nib file to use. The nib file must contain only one top-level object, which must be of type `PHTableViewCell`.
 
 @return The name of a nib file containing a single top-level object of type `PHTableViewCell`.
 
 @see +registerWithTableView:
 */
+ (NSString *)nibName;


///------------------------
/// @name Cell Registration
///------------------------

/**
 Determines whether or not to load the receiver from a corresponding nib file during instantiation or registration.
 
 @return YES if a nib file should be used, or no to instantiate the cell programmatically.
 */
+ (BOOL)instantiateFromNib;

/**
 Registers the receiving class for reuse within the table view.
 
 @discussion
 If the cell has a corresponding nib file, then it is registered as a nib-based cell. The registered reuse identifier is the value returned from +cellIdentifier.
 
 @param tableView the table view to register with.
 
 @see +registerWithTableView:reuseIdentifer:
 */
+ (void)registerWithTableView:(UITableView *)tableView;

/**
 Registers the receiving class for reuse within the table view.
 
 @discussion
 If the cell has a corresponding nib file, then it is registered as a nib-based cell.
 
 @param tableView The table view to register with.
 @param reuseIdentifier A custom reuse identifier to register with the cell class.
 
 @see +registerWithTableView:
 */
+ (void)registerWithTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier;


///-------------
/// @name Layout
///-------------

/**
 Asks the receiving class whether it prefers a size based dynamically on its layout. Useful for calculating dynamic row heights.
 
 @return YES if receiver prefers constraints-based layout,
 */
+ (BOOL)prefersConstraintsBasedSize;

/**
 Calculates the compressed size of the cell based on its internal layout.
 
 @return The size of the cell based on its internal layout.
 */
- (CGSize)constraintsBasedSizeInTableView:(UITableView *)tableView;

@end
