//
//  InternalLink.h
//  DemoApp
//
//  Created by Rob Lester on 2/11/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Link.h"

@interface InternalLink : Link

@property (nonatomic, retain) NSNumber *targetPageNumber;

@end
