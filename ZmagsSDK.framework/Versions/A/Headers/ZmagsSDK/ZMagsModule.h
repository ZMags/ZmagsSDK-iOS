//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/31/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ZMagsModule;
@protocol ModuleDelegate <NSObject>
@required
- (ZMagsModule *) configure:(NSString *)configuration apiKey:(NSString *)apiKey;
@end

@interface ZMagsModule : NSObject

@property (nonatomic, strong) NSString *zMagsApiKey;
@property (nonatomic, strong) NSString *moduleName;

- (BOOL)boolFromString:(NSString*)boolStr withDefault:(BOOL)defaultBool;
- (NSString *)string:(NSString*)theString withDefault:(NSString *)defaultString;
- (UIColor *)colorFromString:(NSString*)colorString withDefault:(UIColor *)defaultColor;
- (NSInteger)integerFromString:(NSString *)integerString withDefault:(NSInteger)defaultSize;
- (UIImage *)imageFromUrl:(NSString*)url withDefault:(UIImage*)defaultImage;
- (UIImage *)imageFromCache:(NSString *)url withDefault:(UIImage *)defaultImage;
- (UIFont *)fontFromName:(NSString *)fontName andSize:(NSInteger)fontSize;
@end

