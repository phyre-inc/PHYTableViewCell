//
//  PHTableViewHeaderFooterView.m
//  Rally
//
//  Created by Matt Ricketson on 2/1/14.
//  Copyright (c) 2014 Phyre. All rights reserved.
//

#import "PHYTableViewHeaderFooterView.h"

@implementation PHYTableViewHeaderFooterView

#pragma mark - View Characteristics

+ (NSString *)viewIdentifier
{
	return NSStringFromClass(self);
}

+ (NSString *)nibName
{
	return [self viewIdentifier];
}


#pragma mark - View Registration

+ (void)registerWithTableView:(UITableView *)tableView
{
	[self registerWithTableView:tableView reuseIdentifier:[self viewIdentifier]];
}

+ (void)registerWithTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier
{
	if([[NSBundle mainBundle] pathForResource:[self nibName] ofType:@"nib"] != nil) {
		[tableView registerNib:[UINib nibWithNibName:[self nibName] bundle:nil] forHeaderFooterViewReuseIdentifier:reuseIdentifier];
	} else {
		[tableView registerClass:self forHeaderFooterViewReuseIdentifier:reuseIdentifier];
	}
}

@end
