//
//  HTMLViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 7/11/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//
//  Abstract Interface for All HTML Views.

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <MessageUI/MessageUI.h>
#import "MBProgressHUD.h"
#import "Markup.h"
#import "ZappService.h"
//#import "Enrichment.h"
#import "ZmagsService.h"

static NSString* const ZAPP_LOCATION_PROCOTOL = @"zapp";

@interface HTMLViewController : UIViewController <UIWebViewDelegate, MBProgressHUDDelegate, MFMailComposeViewControllerDelegate>

@property(strong, nonatomic) UIWebView *webView;
@property(strong, nonatomic) MBProgressHUD *hud;
@property(strong, nonatomic) Markup *markup;

- (void)loadWithMarkup:(Markup *)markup;
- (void)loadWithHTML:(NSString *)html andBaseURL:(NSURL *)baseURL;
- (void)loadWithURL:(NSURL *)url;

- (void)show;
- (void)hide;

//Protected Methods
- (BOOL)isRedirectionAllowed:(NSString *)url;
- (void)showHUD;
- (BOOL)webView:(UIWebView *)webView isTryingToRedirectWithRequest:(NSURLRequest *)request forNavigationType:(UIWebViewNavigationType)navigatioType;

@end
