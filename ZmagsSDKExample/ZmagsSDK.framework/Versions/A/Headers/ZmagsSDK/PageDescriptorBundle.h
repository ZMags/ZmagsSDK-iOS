//
//  PageDescriptorBundle.h
//  ZmagsService
//
//  Created by Rob Lester on 2/5/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class PublicationDescriptor;

@interface PageDescriptorBundle : NSManagedObject

@property (nonatomic, retain) NSString *bundlePart;
@property (nonatomic, retain) NSString *bundlePath;
@property (nonatomic, retain) PublicationDescriptor *publicationDescriptor;

@end
