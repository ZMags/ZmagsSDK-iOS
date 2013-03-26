//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/27/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"


@interface HtmlModule : ZMagsModule<ModuleDelegate>

@property (nonatomic) BOOL status;
@property (nonatomic) BOOL displayTitleBar;
@property (nonatomic, strong) UIImage *titleBarLeftImage;
@property (nonatomic, strong) UIImage *titleBarRightImage;
@property (nonatomic, strong) UIImage *backgroundImage;
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) UIColor *titleBarColor;
@property (nonatomic, copy) NSMutableArray *segments;
@property (nonatomic, copy) NSMutableArray *supportingFiles;


+(HtmlModule *) sharedInstance;

@end