//
// ZLabs-Mobile
// Created by Shawn Hooley on 12/12/12.
// Copyright (c) 2012 Mobispoke. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"

@interface AnalyticsModule : ZMagsModule<ModuleDelegate>


@property(nonatomic) BOOL status;
@property(nonatomic) NSArray *analyticsConfigArray;



+ (AnalyticsModule *)sharedInstance;


@end