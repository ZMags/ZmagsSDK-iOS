//
//  ZFileManager
//  Zlabs-Mobile
//
//  Created by Rob Lester on 9/7/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//
//  Some useful file management functions, all in one convenient place.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ZFileManager : NSObject

+ (NSString *)md5:(NSString *)input;
+ (NSString*)dataMD5:(NSData *)data;
+ (NSURL *)applicationCachesDirectory;
+ (NSString *)stringApplicationCachesDirectory;
+ (NSError *)writeImage:(UIImage *)image toFileNamed:(NSString *)fileName toDirectory:(NSString *)filePath;
+ (BOOL)directoryExistsAtAbsolutePath:(NSString *)filename;
+ (BOOL)fileExistsAtAbsolutePath:(NSString *)filename;
+ (BOOL)createDirectory:(NSString *)directoryName atFilePath:(NSString *)filePath;
+ (BOOL)deleteFolderAtLocation:(NSString*)pathToFolder error:(NSError**)error;

@end