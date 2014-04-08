//
//  PHTableViewCell.m
//  Rally
//
//  Created by Matt Ricketson on 10/31/13.
//  Copyright (c) 2013 Phyre. All rights reserved.
//

#import "PHYTableViewCell.h"


#pragma mark - PHTableViewCell

@implementation PHYTableViewCell

#pragma mark - Initialization

+ (instancetype)cell
{
	if ([self instantiateFromNib]) {
		return [[[NSBundle mainBundle] loadNibNamed:[self nibName] owner:nil options:nil] firstObject];
	} else {
		return [self cellWithStyle:UITableViewCellStyleDefault reuseIdentifier:nil];
	}
}

+ (instancetype)cellWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
	return [[self alloc] initWithStyle:style reuseIdentifier:reuseIdentifier];
}


#pragma mark - Cell Characteristics

+ (NSString *)cellIdentifier
{
	return NSStringFromClass(self);
}

+ (NSString *)nibName
{
	return [self cellIdentifier];
}


#pragma mark - Cell Registration

+ (BOOL)instantiateFromNib
{
	return ([[NSBundle mainBundle] pathForResource:[self nibName] ofType:@"nib"] != nil);
}

+ (void)registerWithTableView:(UITableView *)tableView
{
	[self registerWithTableView:tableView reuseIdentifier:[self cellIdentifier]];
}

+ (void)registerWithTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier
{
	if ([self instantiateFromNib]) {
		[tableView registerNib:[UINib nibWithNibName:[self nibName] bundle:nil] forCellReuseIdentifier:reuseIdentifier];
	} else {
		[tableView registerClass:self forCellReuseIdentifier:reuseIdentifier];
	}
}


#pragma mark - Layout

+ (BOOL)prefersConstraintsBasedSize
{
	return [self requiresConstraintBasedLayout];
}

- (CGSize)constraintsBasedSizeInTableView:(UITableView *)tableView
{
	CGRect bounds = CGRectMake(0.0f, 0.0f, CGRectGetWidth(tableView.bounds), CGRectGetHeight(self.bounds));
	self.bounds = bounds;
	[self layoutIfNeeded];
	
	CGSize size = [self.contentView systemLayoutSizeFittingSize:UILayoutFittingCompressedSize];
	return size;
}

@end
