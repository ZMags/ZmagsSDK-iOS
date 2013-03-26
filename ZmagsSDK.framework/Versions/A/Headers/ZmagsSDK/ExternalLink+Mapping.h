//
//  ExternalLink+Mapping.h
//  zmags
//
//  Created by Rob Lester on 2/11/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "ExternalLink.h"

@interface ExternalLink (Mapping)

+ (ExternalLink *)externalLinkFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
