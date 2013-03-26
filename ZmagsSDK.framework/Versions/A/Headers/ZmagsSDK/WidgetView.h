//
//  WidgetView.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 5/6/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constants.h"
#import "PageEnrichment.h"

@class PageSpreadViewController;

//Notification Actions
static NSString *const OPEN_URL_NOTIFICATION = @"openUrlNotification";
static NSString *const GO_TO_PAGE_NOTIFICATION = @"goToPageNotification";
static NSString *const OPEN_PRODUCT_LINK_NOTIFICATION = @"openProductLinkNotification";
static NSString *const OPEN_CUSTOM_LINK_NOTIFICATION = @"openCustomLinkNotification";

//User Info Dictionary Keys
static NSString *const PAGE_TO_NAVIGATE_TO = @"pageToNavigateTo";
static NSString *const ENRICHMENT_DATA = @"enrichmentData";
static NSString *const URL_TO_OPEN = @"url";
static NSString *const OPEN_DIRECTION = @"openDirection";
static NSString *const HEX_NAVIGATION_COLOR = @"hexNavigationColor";
static NSString *const NAVIGATION_CLOSE_LOCATION = @"closeButtonLocation"; 
static NSString *const NAVIGATION_HIDE_ARROWS = @"hideNavigationArrows";
static NSString *const NAVIGATION_BAR_LOCATION = @"navigationBarLocation";

@interface WidgetView : UIView

@property(nonatomic, strong) PageEnrichment *pageEnrichment;
@property(nonatomic) BOOL isPlaced;
@property(nonatomic) NSInteger zIndex;

//Public Methods
- (id)initWithPageEnrichment:(PageEnrichment *)pageEnrichment;
- (void)reset;
- (void)start;
- (void)stop;

//Protected Methods
- (void)addTapGesture;
- (void)tapResponder:(UIGestureRecognizer *)recognizer;
- (BOOL)isOffline;

+ (NSString*)completeURLIfRelative:(NSString*)possibleRelativeURL;

@end
