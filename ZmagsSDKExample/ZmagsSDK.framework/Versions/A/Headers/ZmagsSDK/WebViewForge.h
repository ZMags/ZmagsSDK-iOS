//
//  WebViewBuilder.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 5/8/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTMLCheckoutViewController.h"

@class HTMLDPWViewController;
@class HTMLCheckoutViewController;

static NSString *const DPW_VIEW_CONTROLLER_URL = @"http://zappadmin.zmags.com/viewer/dpwWebViewBazaar.html";
static NSString *const CHECKOUT_VIEW_CONTROLLER_URL = @"http://shop.harpersbazaar.com/checkout/cart";

@interface WebViewForge : NSObject

+ (UIWebView *)createTransparentWebView;
+ (UIView *)sharedInstanceCheckoutWebView;
+ (HTMLCheckoutViewController *)sharedInstanceCheckoutWebViewController;

@end
