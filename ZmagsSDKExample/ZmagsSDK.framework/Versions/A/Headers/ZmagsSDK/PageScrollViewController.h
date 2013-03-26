//
//  PageScrollViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/25/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageScrollViewControllerDelegate.h"

@interface PageScrollViewController : UIViewController <UIScrollViewDelegate>

@property(nonatomic, weak) id <UIPageViewControllerDataSource> dataSource;
@property(nonatomic, weak) id <PageScrollViewControllerDelegate> delegate;
@property(nonatomic, strong) NSArray* viewControllers;

- (id)initWithTransitionStyle:(UIPageViewControllerTransitionStyle)style navigationOrientation:(UIPageViewControllerNavigationOrientation)navigationOrientation options:(NSDictionary *)options;
- (void)setViewControllers:(NSArray *)viewControllers direction:(UIPageViewControllerNavigationDirection)direction animated:(BOOL)animated completion:(void (^)(BOOL finished))completion;
-(UIScrollView *)scrollView;
- (void)scrollToNextSpread;
- (void)scrollToPreviousSpread;
@end
