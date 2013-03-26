//
//  VideoEnrichment+Mapping.h
//  zmags
//
//  Created by Rob Lester on 2/11/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "VideoEnrichment.h"

@interface VideoEnrichment (Mapping)

+ (VideoEnrichment *)videoEnrichmentFromJSON:(id)JSON withError:(NSError * __autoreleasing *)error;

@end
