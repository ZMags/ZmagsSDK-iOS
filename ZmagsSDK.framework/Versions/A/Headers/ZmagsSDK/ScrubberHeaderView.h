//
//  ScrubberHeaderView.h
//  Scrubber
//
//  Created by Rob Lester on 4/17/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "ScrubberPaneView.h"
#import "ScrubberDataSourceProtocol.h"

@protocol ScrubberHeaderDelegate<NSObject>
- (void)scrubberHeaderDidScrollToPercentage:(CGFloat)percentage;
- (void)scrubberHeaderDidFinishScrollingAtSpreadNumber:(NSInteger)spreadNumber;
@end

@interface ScrubberHeaderView : UIView <UIGestureRecognizerDelegate, ScrubberPaneDelegate>

@property (nonatomic, weak) id <ScrubberDataSourceProtocol> dataSource;
@property (nonatomic, weak) id <ScrubberHeaderDelegate> delegate;
@property (nonatomic) BOOL isSmallHeader;

- (void)shrinkHeaderWithCallBack:(void(^)())callback;
- (void)growHeaderWithCallBack:(void(^)())callback;
- (void)scrollScrubberPaneToPercentage:(CGFloat)percentage;
- (void)scrollScrubberPaneToSpreadNumber:(NSInteger)spreadNumber;
- (void)snapScrubberPaneToClosesSpread;
- (void)scrollScrubberPaneToNextSpread;
- (void)scrollScrubberPaneToPreviousSpread;
- (ScrubberPaneSpreadView*)currentScrubberPaneSpreadView;

@end
