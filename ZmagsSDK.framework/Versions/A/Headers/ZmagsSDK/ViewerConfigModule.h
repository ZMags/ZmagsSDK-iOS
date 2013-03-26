//
// ZLabs-Mobile
// Created by Shawn Hooley on 9/24/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"

@interface ViewerConfigModule : ZMagsModule <ModuleDelegate>

@property(nonatomic) BOOL status;
@property(nonatomic, strong) UIColor *generalBackgroundColor;

// Navigation Bar Configuration Properties
@property(nonatomic, strong) UIImage *navigationBarTitleBarLeftImage;
@property(nonatomic, strong) UIImage *navigationBarTitleBarRightImage;
@property(nonatomic, strong) UIImage *navigationBarShareButtonImage;
@property(nonatomic, strong) UIImage *navigationBarCheckoutButtonImage;
@property(nonatomic, strong) UIColor *navigationBarNumberBackgroundColor;
@property(nonatomic, strong) UIColor *navigationBarTintColor;
@property(nonatomic, strong) UIColor *buttonBackgroundColor;
@property(nonatomic, strong) UIColor *navigationBarColor;
@property(nonatomic, strong) NSString *navigationBarFont;
@property(nonatomic) BOOL navigationBarDisplayShareButton;
@property(nonatomic) BOOL navigationBarDisplayCheckoutButton;
@property(nonatomic) BOOL navigationBarDisplayNumberTextField;

// Scrubber Configuration Properties
@property(nonatomic) BOOL scrubberDisplayPublicationName;
@property(nonatomic) BOOL loadingIndicator;
@property(nonatomic) BOOL scrubberDisplayNumbers;
@property(nonatomic, strong) UIColor *trackBackgroundColor;
@property(nonatomic, strong) UIColor *trackBorderColor;
@property(nonatomic, strong) UIColor *paneOverlayColor;
@property(nonatomic, strong) UIColor *scrubberBackgroundColor;
@property(nonatomic, strong) UIColor *scrubberTitleFontColor;
@property(nonatomic, strong) UIColor *scrubberNumberFontColor;
@property(nonatomic, strong) UIColor *scrubberGripTrackBackgroundColor;
@property(nonatomic, strong) UIImage *scrubberGripTouchedImage;
@property(nonatomic, strong) UIImage *scrubberGripUntouchedImage;
@property(nonatomic, strong) UIImage *scrubberLeftArrowImage;
@property(nonatomic, strong) UIImage *scrubberRightArrowImage;
@property(nonatomic, strong) UIImage *scrubberSinglePageLoadingImage;
@property(nonatomic, strong) UIImage *scrubberTwoPageLoadingImage;
@property(nonatomic, strong) NSString *scrubberNumberFont;
@property(nonatomic, strong) NSString *scrubberTitleFont;


// Viewer Configuration Properties
@property(nonatomic, strong) UIColor *viewerBackgroundColor;
@property(nonatomic, strong) UIColor *viewerLoadingColor;
@property(nonatomic, strong) UIImage *viewerBackgroundImage;
@property(nonatomic, strong) UIImage *viewerLoadingImage;
@property(nonatomic, strong) NSString* widgetBaseUrl;

// Share Configuration Properties
@property(nonatomic) BOOL shareAttachPublicationCover;
@property(nonatomic, strong) UIImage *shareEmailButtonImage;
@property(nonatomic, strong) UIImage *shareFacebookButtonImage;
@property(nonatomic, strong) UIImage *shareTwitterButtonImage;
@property(nonatomic, strong) NSString *shareEmailMessage;
@property(nonatomic, strong) NSString *shareEmailSubject;
@property(nonatomic, strong) NSString *shareFacebookMessage;
@property(nonatomic, strong) NSString *shareTwitterMessage;

+ (ViewerConfigModule *)sharedInstance;

@end