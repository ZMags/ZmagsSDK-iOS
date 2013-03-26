//
//  HTMLViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 4/13/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import "HTMLViewController.h"
#import "WebViewForge.h"

@interface HTMLCheckoutViewController : HTMLViewController
@property (nonatomic) float percentageToScaleWebView;
@property (nonatomic, strong) NSString *checkoutURL;

- (void)addCloseButton;
@end