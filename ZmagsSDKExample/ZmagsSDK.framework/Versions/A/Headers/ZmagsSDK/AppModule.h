//
//  AppModule.h
//  ZmagsSDK
//
//  Created by Shawn Hooley on 3/2/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZMagsModule.h"

@interface AppModule : ZMagsModule<ModuleDelegate>

@property(nonatomic, strong)NSString *name;
@property(nonatomic, strong)NSString *apiKey;

@end
