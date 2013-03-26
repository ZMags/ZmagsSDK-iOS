//
//  ScrubberTrackView.h
//  Scrubber
//
//  Created by Rob Lester on 4/17/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@protocol ScrubberTrackDelegate <NSObject>

@required
- (void)scrubberTrackHasScrolled:(id)sender;
- (void)scrubberTrackLeftArrowHasBeenTapped;
- (void)scrubberTrackRightArrowHasBeenTapped;
- (void)scrubberTrackHasEndedDrag:(id)sender;
@end

@interface ScrubberTrackView : UIView

@property(nonatomic, weak) id <ScrubberTrackDelegate> delegate;

- (void)scrollToPercentage:(CGFloat)percentage;

@end
