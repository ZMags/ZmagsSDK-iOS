//
//  PageScrollViewControllerDelegate.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/29/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PageScrollViewController;

@protocol PageScrollViewControllerDelegate <NSObject>

@optional
- (void)pageScrollViewController:(PageScrollViewController *)pageViewController didFinishAnimating:(BOOL)finished previousViewControllers:(NSArray *)previousViewControllers transitionCompleted:(BOOL)completed;
- (void)pageViewController:(PageScrollViewController *)pageViewController willTransitionToViewControllers:(NSArray *)pendingViewControllers;

@end
