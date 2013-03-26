//
// ZLabs-Mobile
// Created by Shawn Hooley on 9/24/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"


@interface GeneralConfigModule : ZMagsModule<ModuleDelegate>

@property (nonatomic) BOOL status;
@property (nonatomic, strong) UIColor *tabBarColor;
@property (nonatomic, strong) UIColor *tabBarTintColor;
@property (nonatomic, strong) UIColor *selectedImageTint;
@property (nonatomic, strong) UIImage *tabBarLeftImage;
@property (nonatomic, strong) UIImage *tabBarRightImage;
@property (nonatomic, strong) UIImage *titleBarLeftImage;
@property (nonatomic, strong) UIImage *titleBarRightImage;
@property (nonatomic, strong) NSString *googleAnalyicsId;
@property (nonatomic, strong) NSString *demoMode;

+(GeneralConfigModule *) sharedInstance;
@end