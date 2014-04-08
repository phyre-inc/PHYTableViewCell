//
//  PHTableViewHeaderFooterView.h
//  Rally
//
//  Created by Matt Ricketson on 2/1/14.
//  Copyright (c) 2014 Phyre. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PHYTableViewHeaderFooterView : UITableViewHeaderFooterView

#pragma mark - View Characteristics
+ (NSString *)viewIdentifier;
+ (NSString *)nibName;

#pragma mark - View Registration
+ (void)registerWithTableView:(UITableView *)tableView;
+ (void)registerWithTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier;

@end
