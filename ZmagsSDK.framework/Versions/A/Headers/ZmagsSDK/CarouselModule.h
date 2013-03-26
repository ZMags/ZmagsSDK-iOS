//
//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/27/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"

@interface CarouselModule : ZMagsModule<ModuleDelegate>

@property(nonatomic) BOOL status;
@property(nonatomic) BOOL displayTitleBar;
@property(nonatomic,strong) NSString *topText;
@property(nonatomic,strong) UIImage *backgroundImage;
@property(nonatomic,strong) UIColor *backgroundColor;
@property(nonatomic,strong) UIFont *publicationTitleFont;
@property(nonatomic,strong) UIColor *publicationTitleFontColor;
@property(nonatomic,strong) NSString *nonToolbarTitleFont;
@property(nonatomic,strong) UIColor *nonToolbarTitleFontColor;
@property(nonatomic) NSUInteger nonToolbarTitleFontSize;

@property(nonatomic,strong) UIImage *arrowLeftOnImage;
@property(nonatomic,strong) UIImage *arrowLeftOffImage;
@property(nonatomic,strong) UIImage *arrowRightOnImage;
@property(nonatomic,strong) UIImage *arrowRightOffImage;
@property(nonatomic,strong) UIImage *publicationPlaceHolderImage;

+(CarouselModule *) sharedInstance;
@end