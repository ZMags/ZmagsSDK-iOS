//
//  PublicationComponent.h
//  zmags
//
//  Created by Rob Lester on 2/7/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AFHTTPRequestOperation;
@interface PublicationComponent : NSManagedObject

- (void)requestComponentWithOperation:(AFHTTPRequestOperation *)requestOperation withCallBackBlock:(void (^)(id object))block;
- (void)firePendingRequestsForURL:(NSString *)operationUrl withObject:(id)object;
- (NSOperationQueue *)publicationOperationQueue;

@end
