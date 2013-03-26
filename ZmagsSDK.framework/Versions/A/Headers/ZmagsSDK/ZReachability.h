//
//  ZReachability.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 1/22/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Reachability.h"

@interface ZReachability : NSObject

+ (ZReachability *)sharedInstance;

- (void)registerReachabilityChangeCallBackBlock:(BOOL(^)(NetworkStatus))block callNow:(BOOL)callNow;
- (void)unregisterCallBackBlock:(BOOL(^)(NetworkStatus))block;
- (BOOL)isOffline;
- (BOOL)isOnline;

@end
