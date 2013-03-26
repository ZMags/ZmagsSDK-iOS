//
//  Markup+Mapping.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 4/16/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import "Markup.h"
#import <RestKit.h>

@interface Markup (Mapping)

+ (RKEntityMapping *)mappingForObjectStore:(RKManagedObjectStore *)objectStore;
+ (NSFetchRequest *(^)(NSURL *URL))fetchRequestBlockWithResourcePath:(NSString * const)resourcePath;

@end
