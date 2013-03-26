//
//  Link.h
//  DemoApp
//
//  Created by Rob Lester on 2/11/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PageEnrichment.h"

@interface Link : PageEnrichment

@property (nonatomic, retain) NSNumber *color;
@property (nonatomic, retain) NSNumber *opacity;

@end
