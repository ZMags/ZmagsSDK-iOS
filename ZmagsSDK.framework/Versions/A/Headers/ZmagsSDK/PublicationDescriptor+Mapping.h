//
//  PublicationDescriptor+Mapping.h
//  ZmagsService
//
//  Created by Rob Lester on 2/4/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "PublicationDescriptor.h"

@interface PublicationDescriptor (Mapping)

+ (PublicationDescriptor *)publicationDescriptorFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
