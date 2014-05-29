// PHYTableViewCell.h
//
// Copyright (c) 2014 Phyre Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

/**
 `PHYTableViewCell` is a `UITableViewCell` subclass for conveniently loading and registering cells.
 
 To use `PHYTableViewCell`, create a custom subclass and optionally a corresponding nib file.
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
 
 @discussion
 By default, this method returns a string corresponding to the name of the class.
 
 @return The default reuse identifier to use when registering and dequeuing cells.
 */
+ (NSString *)defaultReuseIdentifier;

/**
 The name of the nib file to search for when registering a nib-based table view cell.
 
 @discussion
 By default, this method returns a file name corresponding to the name of the class. Override this method to specify a custom nib file to use. The nib file must contain only one top-level object, which must be of type `PHYTableViewCell`.
 
 @return The name of a nib file containing a single top-level object of type `PHYTableViewCell`.
 
 @see +supportsLoadingFromNib:
 */
+ (NSString *)nibName;


///------------------------
/// @name Cell Registration
///------------------------

/**
 Determines whether or not the receiver can be loaded from a corresponding nib file when instantiating or regsitering.
 
 @discussion
 This method checks to see if a .xib file indicated by `+nibName` exists.
 
 @return YES if a nib file exists and is valid. NO, if otherwise.
 
 @see +nibName
 */
+ (BOOL)supportsLoadingFromNib;

/**
 Registers the receiving class for reuse within the table view.
 
 @discussion
 If the cell has a corresponding nib file, then it is registered as a nib-based cell. The registered reuse identifier is the value returned from +defaultReuseIdentifier.
 
 @param tableView the table view to register with.
 
 @see +registerWithTableView:reuseIdentifer:
 @see +defaultReuseIdentifier
 */
+ (void)registerWithTableView:(UITableView *)tableView;

/**
 Registers the receiving class for reuse within the table view.
 
 @discussion
 If the cell has a corresponding nib file, then it is registered as a nib-based cell.
 
 @param tableView The table view to register with.
 @param reuseIdentifier A custom reuse identifier to register with the cell class.
 
 @see +registerWithTableView:
 @see +defaultReuseIdentifier
 */
+ (void)registerWithTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier;

@end
