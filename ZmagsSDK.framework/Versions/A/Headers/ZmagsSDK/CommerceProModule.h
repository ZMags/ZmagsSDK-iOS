//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/27/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"

@interface CommerceProModule : ZMagsModule<ModuleDelegate>

@property(nonatomic) BOOL status;
@property (nonatomic, retain) UIImage *cartButtonImage;
@property (nonatomic, retain) UIImage *checkoutButtomImage;
@property(nonatomic, retain) NSString *projectFile;
@property(retain) NSMutableArray *allowedURLsandCustomSegments;
@property(nonatomic) NSString *checkoutURL;

+(CommerceProModule *) sharedInstance;

@end