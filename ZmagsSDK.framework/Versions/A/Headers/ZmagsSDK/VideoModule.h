//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/27/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"


@interface VideoModule : ZMagsModule<ModuleDelegate>

@property(nonatomic) BOOL status;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) NSString *youTubeChannelName;
@property (nonatomic, retain) UIColor *backgroundColor;

+(VideoModule *) sharedInstance;

@end