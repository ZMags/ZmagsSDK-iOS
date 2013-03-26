//
//  PublicationDescriptor.h
//  ZmagsService
//
//  Created by Rob Lester on 2/5/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PublicationComponent.h"
#import "Publication.h"

@class PageDescriptor, PageDescriptorBundle, Product, PublicationInfo;

@interface PublicationDescriptor : PublicationComponent

@property (nonatomic, retain) NSNumber *firstPageIsCoverPage;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *numberOfPages;
@property (nonatomic, retain) NSNumber *pageAspectRatio;
@property (nonatomic, retain) NSMutableOrderedSet *pageDescriptors;
@property (nonatomic, retain) NSSet *products;
@property (nonatomic, retain) PublicationInfo *publicationInfo;
@property (nonatomic, retain) NSOrderedSet *pageDescriptorBundles;

- (void)getPageDescriptorForPage:(NSInteger)pageNumber WithBlock:(void (^)(PageDescriptor *pageDescriptor))block;

@end

@interface PublicationDescriptor (CoreDataGeneratedAccessors)

- (void)insertObject:(PageDescriptor *)value inPageDescriptorsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromPageDescriptorsAtIndex:(NSUInteger)idx;
- (void)insertPageDescriptors:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removePageDescriptorsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInPageDescriptorsAtIndex:(NSUInteger)idx withObject:(PageDescriptor *)value;
- (void)replacePageDescriptorsAtIndexes:(NSIndexSet *)indexes withPageDescriptors:(NSArray *)values;
- (void)addPageDescriptorsObject:(PageDescriptor *)value;
- (void)removePageDescriptorsObject:(PageDescriptor *)value;
- (void)addPageDescriptors:(NSOrderedSet *)values;
- (void)removePageDescriptors:(NSOrderedSet *)values;
- (void)addProductsObject:(Product *)value;
- (void)removeProductsObject:(Product *)value;
- (void)addProducts:(NSSet *)values;
- (void)removeProducts:(NSSet *)values;

- (void)insertObject:(PageDescriptorBundle *)value inPageDescriptorBundlesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromPageDescriptorBundlesAtIndex:(NSUInteger)idx;
- (void)insertPageDescriptorBundles:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removePageDescriptorBundlesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInPageDescriptorBundlesAtIndex:(NSUInteger)idx withObject:(PageDescriptorBundle *)value;
- (void)replacePageDescriptorBundlesAtIndexes:(NSIndexSet *)indexes withPageDescriptorBundles:(NSArray *)values;
- (void)addPageDescriptorBundlesObject:(PageDescriptorBundle *)value;
- (void)removePageDescriptorBundlesObject:(PageDescriptorBundle *)value;
- (void)addPageDescriptorBundles:(NSOrderedSet *)values;
- (void)removePageDescriptorBundles:(NSOrderedSet *)values;
@end
