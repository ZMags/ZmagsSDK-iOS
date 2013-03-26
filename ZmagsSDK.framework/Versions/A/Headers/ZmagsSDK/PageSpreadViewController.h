//
//  PageSpreadViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/23/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Publication.h"
#import "PageSpreadView.h"
#import "PageView.h"
//#import "WidgetFactory.h"

@class PageScrollViewController;
@class ViewerViewController;

@interface PageSpreadViewController : UIViewController <UIScrollViewDelegate, PageSpreadViewDataSource>

@property(nonatomic) NSInteger spreadIndex;

- (id)initWithSpreadNumber:(NSInteger)spreadIndex forPublication:(Publication *)publication;

@end
