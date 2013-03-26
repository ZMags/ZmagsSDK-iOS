//
//  PageRepresentation.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>
#import "PublicationComponent.h"
#import "Publication.h"

@class PageDescriptor;

@interface PageRepresentationDescriptor : PublicationComponent

@property (nonatomic, retain) NSString *assetLocation;
@property (nonatomic, retain) NSNumber *height;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) NSNumber *size;
@property (nonatomic, retain) NSNumber *state;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSNumber *width;
@property (nonatomic, retain) PageDescriptor *pageDescriptor;

- (void)getPageRepresentationWithBlock:(void (^)(UIImage *pageRepresentation))block;

@end

@interface PageRepresentationDescriptor (CoreDataGeneratedAccessors)

- (void)addPageDescriptorObject:(PageDescriptor *)value;
- (void)removePageDescriptorObject:(PageDescriptor *)value;
- (void)addPageDescriptor:(NSSet *)values;
- (void)removePageDescriptor:(NSSet *)values;

@end
