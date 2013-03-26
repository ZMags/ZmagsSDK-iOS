//
// ZLabs-Mobile
// Created by Shawn Hooley on 9/14/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"


@interface ParallaxModule : ZMagsModule<ModuleDelegate>

@property (nonatomic) BOOL status;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) NSNumber *slideSpeed;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSArray *backgroundItems;

+(ParallaxModule *) sharedInstance;
- (ParallaxModule *)configure:(NSString *)configuration apiKey:(NSString *)apiKey;

@end