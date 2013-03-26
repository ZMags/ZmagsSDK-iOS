//
//  PublicationInfo+Mapping.h
//  ZmagsService
//
//  Created by Rob Lester on 2/4/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "PublicationInfo.h"

@interface PublicationInfo (Mapping)

+ (PublicationInfo *)publicationInfoFromJSON:(NSData *)JSON withError:(NSError **)error;

@end
