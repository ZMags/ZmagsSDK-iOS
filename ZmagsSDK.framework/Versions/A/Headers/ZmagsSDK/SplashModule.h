//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/27/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"


@interface SplashModule : ZMagsModule<ModuleDelegate>

@property (nonatomic, retain) UIImage *splashImage;
@property(nonatomic) BOOL status;

+(SplashModule *) sharedInstance;

@end