//
//  VideoEnrichment.h
//  zmags
//
//  Created by Rob Lester on 2/12/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PageEnrichment.h"

@class MediaRepresentationDescriptors;

@interface VideoEnrichment : PageEnrichment

@property (nonatomic) BOOL enableControls;
@property (nonatomic) BOOL loop;
@property (nonatomic) BOOL playOnLoad;
@property (nonatomic) BOOL usesExternalSource;
@property (nonatomic, retain) NSString *internalSource;
@property (nonatomic, retain) NSString *externalSource;
@property (nonatomic, retain) NSString *posterImageResourcePath;
@property (nonatomic, retain) NSString *posterImageContentType;
@property (nonatomic, retain) NSString *posterImageType;
@property (nonatomic, retain) NSString *posterImageAssetLocation;
@property (nonatomic, retain) NSNumber *posterImageSize;
@property (nonatomic, retain) NSSet *mediaRepresentationDescriptors;

- (void)downloadVideowithCallBack:(void (^)(NSString *videoLocation, NSString* posterImageLocation))block;

@end

@interface VideoEnrichment (CoreDataGeneratedAccessors)

- (void)addMediaRepresentationDescriptorsObject:(MediaRepresentationDescriptors *)value;
- (void)removeMediaRepresentationDescriptorsObject:(MediaRepresentationDescriptors *)value;
- (void)addMediaRepresentationDescriptors:(NSSet *)values;
- (void)removeMediaRepresentationDescriptors:(NSSet *)values;

@end
