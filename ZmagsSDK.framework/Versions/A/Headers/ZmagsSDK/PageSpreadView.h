//
//  PageSpreadView.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 5/10/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageView.h"
#import "WidgetView.h"
//#import "AnimationManager.h"

@class PageSpreadView;

@protocol PageSpreadViewDataSource <NSObject>

- (PageView*)firstPageViewForPageSpreadView:(PageSpreadView*)pageSpreadView;
- (PageView*)secondPageViewForPageSpreadView:(PageSpreadView*)pageSpreadView;

@end

@interface PageSpreadView : UIScrollView <UIScrollViewDelegate, PageViewDelegate>

@property (nonatomic, weak) id <PageSpreadViewDataSource> dataSource;

- (id)initWithPublication:(Publication *)publication;
- (BOOL)isSpreadPagesLoaded;
- (CGRect)zoomRectForScrollView:(UIScrollView *)scrollView withScale:(float)scale withCenter:(CGPoint)center;
- (void)reload;

//Widgeting Functions
- (void)addWidgetView:(WidgetView*)widgetView;
- (void)startWidets;
- (void)resetWidgets;
- (void)stopWidgets;

extern int const MAXIMUM_ZOOM_SCALE;
extern int const MINIMUM_ZOOM_SCALE;

@end