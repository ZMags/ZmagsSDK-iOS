//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/31/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZmagsJSONAPIOperation.h"

//Module enum used to map modules in db.
enum {
    kZmagsCarouselModule,
    kZmagsGridModule,
    kZmagsCommerceProModule,
    kZmagsHtmlModule,
    kZmagsSplashModule,
    kZmagsVideoModule,
    kZmagsParallexModule,
    kZmagsGeneralConfigModule,
    kZmagsViewerModule,
    kZmagsAnalyticsModule,
    kZmagsAppsModule
};
typedef NSUInteger ZMagsModuleType;


@interface DownloadModuleOperation :ZmagsJSONAPIOperation

@property NSString *bundle;
@property NSString *moduleName;
@property NSUInteger moduleType;
@property NSString *zmagsApiKey;

- (void)parseModuleConfiguration:(NSDictionary *)moduleDict;

@end