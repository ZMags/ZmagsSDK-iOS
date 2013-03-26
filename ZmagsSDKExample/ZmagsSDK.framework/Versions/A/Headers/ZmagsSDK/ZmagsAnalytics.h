//
//  ZmagsAnalytics.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 12/11/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const AnalyticsIdKey;
extern NSString *const AnalyticsTypeKey;

typedef enum : NSUInteger {
    Google,
    Omniture
} AnalyticsType;

@interface ZmagsAnalytics : NSObject
@property (nonatomic, assign) BOOL trackingEnabled;

+ (ZmagsAnalytics *) sharedInstance;

- (void)trackAppLaunch;
- (void)startSession;
- (void)stopSession;
- (void)setCustomPropertyIndex:(NSInteger)index name:(NSString*)name value:(NSString*)value scope:(NSString*)scope;
- (void)trackView:(NSString*)view;
- (void)trackEvent:(NSString*)event properties:(NSDictionary *)properties;

@end


