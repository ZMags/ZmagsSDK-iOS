//
//  PageDescriptor.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>
#import "PublicationComponent.h"

@class PageEnrichment, PageRepresentationDescriptor, PublicationDescriptor;

@interface PageDescriptor : PublicationComponent

@property (nonatomic, retain) NSString *pageEnrichmentsBundles;
@property (nonatomic, retain) NSString *pageLabel;
@property (nonatomic, retain) NSNumber *pageNumber;
@property (nonatomic, retain) NSNumber *state;
@property (nonatomic, retain) NSSet *enrichments;
@property (nonatomic, retain) NSSet *pageRepresentationDescriptors;
@property (nonatomic, retain) PublicationDescriptor *publicationDescriptor;

- (void)getPageRepresentationDescriptorWithClosestSize:(CGSize)size WithBlock:(void (^)(PageRepresentationDescriptor *pageRepresentationDescriptor))block;
- (void)getPageEnrichmentsWithBlock:(void (^)(NSArray *enrichments))block;
- (void)getAllPageRepresentationDescriptorsWithBlock:(void (^)(NSArray *pageRepresentationDescriptors))block;

@end

@interface PageDescriptor (CoreDataGeneratedAccessors)

- (void)addEnrichmentsObject:(PageEnrichment *)value;
- (void)removeEnrichmentsObject:(PageEnrichment *)value;
- (void)addEnrichments:(NSSet *)values;
- (void)removeEnrichments:(NSSet *)values;

- (void)addPageRepresentationDesciptorsObject:(PageRepresentationDescriptor *)value;
- (void)removePageRepresentationDescriptorsObject:(PageRepresentationDescriptor *)value;
- (void)addPageRepresentationDescriptors:(NSSet *)values;
- (void)removePageRepresentationDescriptors:(NSSet *)values;

- (void)addPublicationDescriptorObject:(PublicationDescriptor *)value;
- (void)removePublicationDescriptorObject:(PublicationDescriptor *)value;
- (void)addPublicationDescriptor:(NSSet *)values;
- (void)removePublicationDescriptor:(NSSet *)values;

@end
