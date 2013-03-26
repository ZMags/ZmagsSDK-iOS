//
//  MediaRepresentationDescriptor+Mapping.h
//  zmags
//
//  Created by Rob Lester on 2/12/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "MediaRepresentationDescriptor.h"

@interface MediaRepresentationDescriptor (Mapping)

+ (MediaRepresentationDescriptor *)mediaRepresentationDescriptorJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
