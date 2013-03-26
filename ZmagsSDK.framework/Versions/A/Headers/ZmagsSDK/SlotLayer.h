//
//  ImageSlot.h
//  AO
//
//  Extends CALayer to contain basic information about a slot in the carousel
//  Contains a CALayer for its shadow
//
//  Created by Eric Shea on 11/8/11.
//  Copyright (c) 2011 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

@interface SlotLayer : CALayer
@property(nonatomic, assign) int index;
@property(nonatomic, assign) double angle;
@property(nonatomic, assign) double rotation;
@property(nonatomic, strong) CALayer *shadow;
@property(nonatomic, strong) CALayer *greyOverlay;

@end
