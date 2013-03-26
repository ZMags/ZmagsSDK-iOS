//
//  PageDescriptor+Mapping.h
//  ZmagsService
//
//  Created by Rob Lester on 2/5/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "PageDescriptor.h"

@interface PageDescriptor (Mapping)

+ (PageDescriptor *)pageDescriptorFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
