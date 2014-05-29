// PHYTableViewHeaderFooterView.h
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
 `PHYTableViewHeaderFooterView` is a `UITableViewHeaderFooterView` subclass for conveniently loading and registering table view header/footer views.
 
 To use `PHYTableViewHeaderFooterView`, create a custom subclass and optionally a corresponding nib file.
 */
@interface PHYTableViewHeaderFooterView : UITableViewHeaderFooterView

///---------------------
/// @name Initialization
///---------------------

/**
 Allocates and initializes a new header/footer view instance.
 
 @discussion
 If the view has a corresponding nib file, then it is loaded from the nib.
 
 @return An new header/footer view instance.
 */
+ (instancetype)headerFooterView;

/**
 Allocates and initializes a new header/footer view instance with the corresponding style and reuse identifier.
 
 @discussion
 If the view has a corresponding nib file, then it is loaded from the nib.
 
 @param reuseIdentifier The reuse identifier to initialize the header/footer view with.
 
 @return An new header/footer view instance.
 */
+ (instancetype)headerFooterViewWithReuseIdentifier:(NSString *)reuseIdentifier;


///---------------------------
/// @name View Characteristics
///---------------------------

/**
 The default reuse identifier to use when registering and dequeuing header/footer views.
 
 @discussion
 By default, this method returns a string corresponding to the name of the class.
 
 @return The default reuse identifier to use when registering and dequeuing header/footer views.
 */
+ (NSString *)defaultReuseIdentifier;

/**
 The name of the nib file to search for when registering a nib-based table view header/footer view.
 
 @discussion
 By default, this method returns a file name corresponding to the name of the class. Override this method to specify a custom nib file to use. The nib file must contain only one top-level object, which must be of type `PHYTableViewHeaderFooterView`.
 
 @return The name of a nib file containing a single top-level object of type `PHYTableViewHeaderFooterView`.
 
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
 If the cell has a corresponding nib file, then it is registered as a nib-based header/footer view. The registered reuse identifier is the value returned from +defaultReuseIdentifier.
 
 @param tableView the table view to register with.
 
 @see +registerWithTableView:reuseIdentifer:
 @see +defaultReuseIdentifier
 */
+ (void)registerWithTableView:(UITableView *)tableView;

/**
 Registers the receiving class for reuse within the table view.
 
 @discussion
 If the cell has a corresponding nib file, then it is registered as a nib-based header/footer view.
 
 @param tableView The table view to register with.
 @param reuseIdentifier A custom reuse identifier to register with the cell class.
 
 @see +registerWithTableView:
 @see +defaultReuseIdentifier
 */
+ (void)registerWithTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier;

@end
