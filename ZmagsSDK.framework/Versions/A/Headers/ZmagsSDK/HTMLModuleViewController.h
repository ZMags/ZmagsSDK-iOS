//
//  HTMLModuleViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 4/13/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import "HTMLViewController.h"
#import "WebViewForge.h"
//#import <ZmagsSDK/VergeViewController.h>

@interface HTMLModuleViewController : HTMLViewController

@property(nonatomic) float percentageToScaleWebView;

- (id)initWithMarkup:(Markup *)markup;

@end