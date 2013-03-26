//
//  ProductLink+Mapping.h
//  zmags
//
//  Created by Rob Lester on 2/12/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "ProductLink.h"

@interface ProductLink (Mapping)

+ (ProductLink *)productLinkFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
