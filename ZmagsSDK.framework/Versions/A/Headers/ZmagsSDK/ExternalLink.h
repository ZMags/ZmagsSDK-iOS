//
//  ExternalLink.h
//  DemoApp
//
//  Created by Rob Lester on 2/11/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Link.h"

@interface ExternalLink : Link

@property (nonatomic, retain) NSString *target;
@property (nonatomic, retain) NSString *url;

@end
