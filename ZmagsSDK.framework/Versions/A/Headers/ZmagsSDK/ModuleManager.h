//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/27/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "CarouselModule.h"
#import "CommerceProModule.h"
#import "BookshelfModule.h"
#import "HtmlModule.h"
#import "SplashModule.h"
#import "VideoModule.h"
#import "ZmagsAPIOperation.h"
#import "ParallaxModule.h"

@class GeneralConfigModule;
@class ViewerConfigModule;
@class DownloadAllModulesOperation;
@class AnalyticsModule;

typedef enum {
    ModuleDownloadStateNotDownloaded,
    ModuleDownloadStateFinished,
    ModuleDownloadStateDownloading,
    ModuleDownloadStatePaused
} ModuleDownloadState;

@interface ModuleManager : NSObject <ZmagsAPIRequestDelegate>

@property(strong) NSArray *modules;
@property(strong) NSArray *preLaunchModules;;
@property(strong) NSArray *configs;
@property(strong) NSArray *preLaunchConfigs;
@property(nonatomic) BOOL isOffline;
@property(strong, nonatomic) NSString *zmagsApiKey;

@property(nonatomic, strong) DownloadAllModulesOperation *downloadAllModulesOperation;

+ (ModuleManager *)sharedInstance;
+ (NSUInteger)moduleType:(NSString *)moduleName;
- (void)downloadModule:(NSString *)zmagsModuleName;
- (void)downloadConfig:(NSString *) zmagsModuleName;
- (void)synchronousDownloadModule:(NSString *)zmagsModuleName;
-(void)synchronousDownloadConfig:(NSString *)zmagsConfigName;

-(void)initModules;
-(void)preLaunchInitialization;
- (void)downloadModules;
@end