//
//  ZmagsAnalyticsDelegate.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 12/11/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ZmagsAnalyticsDelegate <NSObject>
@required
- (NSString *)analyticsId;
- (void)configure:(NSDictionary *)params;

- (void)startSession;
- (void)stopSession;
- (void)setCustomPropertyIndex:(NSInteger)index name:(NSString*)name value:(NSString*)value scope:(NSString*)scope;
- (void)trackView:(NSString*)view;
- (void)trackEvent:(NSString*)event properties:(NSDictionary *)properties;

@end