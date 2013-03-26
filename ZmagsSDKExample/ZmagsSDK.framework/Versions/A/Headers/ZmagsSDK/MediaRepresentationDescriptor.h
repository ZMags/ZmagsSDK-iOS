//
//  MediaRepresentationDescriptor.h
//  zmags
//
//  Created by Rob Lester on 2/12/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class VideoEnrichment;

@interface MediaRepresentationDescriptor : NSManagedObject

@property (nonatomic, retain) NSNumber *size;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) VideoEnrichment *videoEnrichment;

@end
