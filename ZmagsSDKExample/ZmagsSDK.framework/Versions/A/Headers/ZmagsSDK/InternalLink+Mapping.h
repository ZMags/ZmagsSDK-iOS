//
//  InternalLink+Mapping.h
//  zmags
//
//  Created by Rob Lester on 2/11/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "InternalLink.h"

@interface InternalLink (Mapping)

+ (InternalLink *)internalLinkFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
