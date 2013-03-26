//
//  PageEnrichment+Mapping.h
//  ZmagsService
//
//  Created by Rob Lester on 2/6/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "PageEnrichment.h"

@interface PageEnrichment (Mapping)

+ (PageEnrichment *)pageEnrichmentFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
