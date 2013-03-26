//
//  NavigationItem.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 10/2/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ParallaxItem : NSObject

@property (nonatomic) BOOL status;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *path;
@property (nonatomic) NSNumber *offset;
@property (nonatomic) NSInteger weight;

@end
