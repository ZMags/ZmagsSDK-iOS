//
// ZLabs-Mobile
// Created by Shawn Hooley on 9/24/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>



@interface DownloadAllModulesOperation : ZmagsAPIOperation

- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)completed:(id)responseObject;
- (void)didFailWithError:(NSError*)error;
- (void)finish;

@end