//
//  Constants.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 11/27/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

static NSString *const NOTIFICATION_VIEW_ERROR = @"NotificationViewError";
static NSString *const NOTIFICATION_VIEW_SUCCESS = @"NotificationViewSuccess";
static NSString *const NOTIFICATION_VIEW_STICKY = @"NotificationViewSticky";
static NSString *const NOTIFICATION_VIEW_STICKY_DISMISS = @"NotificationViewStickyDismiss";
static NSString *const NOTIFICATION_TITLE = @"notificationtitle";
static NSString *const NOTIFICATION_MESSAGE = @"notificationmessage";


//Trig Constants
#define DEGREES_TO_RADIANS(x) (M_PI * x / 180.0)
#define RADIANS_TO_DEGREES(x) (180 * x / M_PI)

//Carousel
static NSInteger const CAROUSEL_IMAGE_WIDTH = 292;
static NSInteger const CAROUSEL_IMAGE_HEIGHT = 381;
static NSString *const CAROUSEL_IMAGE_PAGE_NUMBER = @"1";
static NSString *const CAROUSEL_CACHED_IMAGE_PREFIX = @"carousel";

// Page
static NSInteger const PAGE_WIDTH = 512.0;
static NSInteger const PAGE_HEIGHT = 768.0;

// Publication
static NSInteger const PUBLICATION_IMAGE_WIDTH = 1024;
static NSInteger const PUBLICATION_IMAGE_HEIGHT = 1280;

//Scrubber
static int const SCRUBBER_IMAGES_WIDTH = 207;
static int const SCRUBBER_IMAGES_HEIGHT = 157;

//Configuration
static BOOL const NAME_PUBLICATIONS_FROM_PUBLICATOR = NO;
static BOOL const PLAY_VIDEO_ON_SHOW = NO;
