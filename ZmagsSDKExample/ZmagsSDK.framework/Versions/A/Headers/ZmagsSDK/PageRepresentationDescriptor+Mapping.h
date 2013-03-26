//
//  PageRepresentationDescriptor+Mapping.h
//  ZmagsService
//
//  Created by Rob Lester on 2/5/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "PageRepresentationDescriptor.h"

@interface PageRepresentationDescriptor (Mapping)

+ (PageRepresentationDescriptor *)pageRepresentationDescriptorFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
