// PHYTableViewHeaderFooterView.m
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

#import "PHYTableViewHeaderFooterView.h"

@implementation PHYTableViewHeaderFooterView

#pragma mark - Initialization

+ (instancetype)headerFooterView
{
	if ([self supportsLoadingFromNib]) {
		return [[[NSBundle mainBundle] loadNibNamed:[self nibName] owner:nil options:nil] firstObject];
	} else {
		return [self headerFooterViewWithReuseIdentifier:nil];
	}
}

+ (instancetype)headerFooterViewWithReuseIdentifier:(NSString *)reuseIdentifier
{
	return [[self alloc] initWithReuseIdentifier:reuseIdentifier];
}


#pragma mark - View Characteristics

+ (NSString *)defaultReuseIdentifier
{
	return NSStringFromClass(self);
}

+ (NSString *)nibName
{
	return [self defaultReuseIdentifier];
}


#pragma mark - View Registration

+ (BOOL)supportsLoadingFromNib
{
	return ([[NSBundle mainBundle] pathForResource:[self nibName] ofType:@"nib"] != nil);
}

+ (void)registerWithTableView:(UITableView *)tableView
{
	[self registerWithTableView:tableView reuseIdentifier:[self defaultReuseIdentifier]];
}

+ (void)registerWithTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier
{
	if ([self supportsLoadingFromNib]) {
		[tableView registerNib:[UINib nibWithNibName:[self nibName] bundle:nil] forCellReuseIdentifier:reuseIdentifier];
	} else {
		[tableView registerClass:self forHeaderFooterViewReuseIdentifier:reuseIdentifier];
	}
}

@end
