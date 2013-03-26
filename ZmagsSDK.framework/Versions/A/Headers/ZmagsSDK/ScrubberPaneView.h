//
//  ScrubberPaneView.h
//  Scrubber
//
//  Created by Rob Lester on 4/17/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "ScrubberPaneSpreadView.h"
#import "ScrubberDataSourceProtocol.h"

@protocol ScrubberPaneDelegate <NSObject>
- (void)scrubberPaneDidScrollToPercentage:(CGFloat)percentage andScrubberPaneSpreadView:(ScrubberPaneSpreadView*)scrubberPaneSpreadView;
- (void)ScrubberPaneDidFinishScrollingAtSpreadNumber:(NSInteger)spreadNumber;
@end

@interface ScrubberPaneView : UIView <UITableViewDelegate>
@property(nonatomic, weak) id <ScrubberDataSourceProtocol> dataSource;
@property(nonatomic, weak) id <ScrubberPaneDelegate> paneDelegate;
@property(nonatomic) BOOL isAnimatedScroll;

- (void)scrollToPercentage:(CGFloat)percentage;
- (void)snapToClosestSpread;
- (CGFloat)currentPecentageScrolled;
- (ScrubberPaneSpreadView*)currentScrubberPaneSpreadView;
- (void)scrollToSpreadNumber:(NSInteger)spreadNumber;
- (void)scrollToNextSpread;
- (void)scrollToPreviousSpread;

@end
