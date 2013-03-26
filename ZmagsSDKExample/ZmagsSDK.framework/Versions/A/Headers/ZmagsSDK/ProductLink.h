//
//  ProductLink.h
//  zmags
//
//  Created by Rob Lester on 2/12/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Link.h"

@class Product;

@interface ProductLink : Link

@property (nonatomic, retain) NSString *productDescription;
@property (nonatomic, retain) NSString *productID;
@property (nonatomic, retain) NSString *productName;
@property (nonatomic, retain) NSString *productPart;
@property (nonatomic, retain) NSString *productPath;
@property (nonatomic, retain) NSDecimalNumber *productPrice;
@property (nonatomic) BOOL usesProductDatabase;
@property (nonatomic, retain) Product *product;

- (void)downloadProductwithCallBack:(void (^)(Product *product))block;

@end
