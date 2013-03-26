//
//  PublicationCache.h
//  zmags
//
//  Created by Rob Lester on 2/14/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PublicationController.h"

@interface PublicationCache : NSObject

+ (PublicationCache *)sharedInstance;
- (PublicationController*)getPublicationControllerForPublicationID:(NSString*)publicationId;

@end
