//
//  WidgetFactory.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 5/6/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WidgetView.h"
//#import "Enrichment.h"
#import "InternalLinkWidgetView.h"
#import "ExternalLinkWidgetView.h"
#import "ProductLinkWidgetView.h"
#import "VideoWidgetView.h"
#import "PageEnrichment.h"

@interface WidgetFactory : NSObject

+ (WidgetView *)createWidgetViewFromEnrichment:(PageEnrichment *)pageEnrichment;

@end
