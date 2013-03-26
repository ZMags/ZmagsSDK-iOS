//
//  PublicationInfo.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PublicationComponent.h"

@class Publication, PublicationDescriptor;

@interface PublicationInfo : PublicationComponent

@property (nonatomic) BOOL activated;
@property (nonatomic) BOOL expired;
@property (nonatomic, retain) NSString *baseURL;
@property (nonatomic, retain) NSString *bundlePart;
@property (nonatomic, retain) NSString *bundlePath;
@property (nonatomic, retain) NSNumber *versionNumber;
@property (nonatomic, retain) PublicationDescriptor *publicationDescriptor;
@property (nonatomic, retain) Publication *publication;

- (void)getPublicationDescriptorWithBlock:(void (^)(PublicationDescriptor *publicationDescriptor))block;

@end
