//
//  CarouselLayers.h
//  AO
//
//  Primary CALayer for the Carousel and responsible for driving the layout and animation
//  Uses the CarouselViewDelegate to get information about the slots and images
//
//  Created by Eric Shea on 11/8/11.
//  Copyright (c) 2011 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "Constants.h"
#import <UIKit/UIKit.h>

@interface SlotsLayer : CALayer  {
    BOOL animationRunning;
    double startAngle;
    double endAngle;
    double animationDuration;
    CFTimeInterval startTimestamp;
    CATransformLayer *transformLayer;
    CADisplayLink *displayLink;
}

@property(nonatomic, assign) BOOL animationRunning;
@property(nonatomic, assign) double initialAngle;
@property(nonatomic, assign) double totalCircumference;
@property(nonatomic, assign) double angle;
@property(nonatomic, assign) double radius;
@property(nonatomic, assign) double verticalPadding;
@property(nonatomic, retain) NSMutableArray *visibleSlots;
@property(nonatomic, retain) NSMutableArray *slots;

- (void)show;
- (double)calculateInitialAngle;
- (void)setSlotCount:(int)count;
- (void)addSlot:(int)index;
- (void)updateSlotImage:(UIImage *)image atIndex:(int)index;
- (void)stopAnimation;
- (void)rotateLeft;
- (void)rotateRight;
- (void)setAngle:(double)a animated:(BOOL)animate;
- (void)setAngle:(double)a animated:(BOOL)animate duration:(float)duration;

@end
