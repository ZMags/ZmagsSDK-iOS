//
//  Product+Mapping.h
//  zmags
//
//  Created by Rob Lester on 2/12/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "Product.h"

@interface Product (Mapping)

+ (Product *)productLinkFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
