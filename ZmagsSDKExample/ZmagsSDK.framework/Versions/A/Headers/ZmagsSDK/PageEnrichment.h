//
//  PageEnrichment.h
//  ZmagsService
//
//  Created by Rob Lester on 2/6/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <CoreGraphics/CoreGraphics.h>
#import "PublicationComponent.h"

@class Asset, PageDescriptor;

@interface PageEnrichment : PublicationComponent

@property (nonatomic, retain) NSString * effect;
@property (nonatomic, retain) NSNumber * opacity;
@property (nonatomic, retain) NSNumber * lastPageNumber;
@property (nonatomic, retain) NSString * value;
@property (nonatomic, retain) NSDecimalNumber * height;
@property (nonatomic, retain) NSNumber * rotation;
@property (nonatomic, retain) NSDecimalNumber * width;
@property (nonatomic, retain) NSString * shapeType;
@property (nonatomic, retain) NSDecimalNumber * y;
@property (nonatomic, retain) NSDecimalNumber * x;
@property (nonatomic, retain) NSNumber * firstPageNumber;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSSet *assets;
@property (nonatomic, retain) PageDescriptor *pageDescriptor;

- (CGRect)frameForPageOrigin:(CGPoint)origin andImageSize:(CGSize)imageSize;

@end

@interface PageEnrichment (CoreDataGeneratedAccessors)

- (void)addAssetsObject:(Asset *)value;
- (void)removeAssetsObject:(Asset *)value;
- (void)addAssets:(NSSet *)values;
- (void)removeAssets:(NSSet *)values;

@end
