//
//  Product.h
//  zmags
//
//  Created by Rob Lester on 2/12/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Product, ProductLink;

@interface Product : NSManagedObject

@property (nonatomic, retain) NSString *properties;
@property (nonatomic, retain) NSString *productID;
@property (nonatomic, retain) NSSet *productLink;
@property (nonatomic, retain) NSString *variants;
@end

@interface Product (CoreDataGeneratedAccessors)

- (void)addProductLinkObject:(ProductLink *)value;
- (void)removeProductLinkObject:(ProductLink *)value;
- (void)addProductLink:(NSSet *)values;
- (void)removeProductLink:(NSSet *)values;

@end
