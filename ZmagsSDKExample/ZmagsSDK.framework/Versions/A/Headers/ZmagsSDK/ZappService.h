//
//  ZappService.h
//  ZmagsService
//
//  Created by Rob Lester on 2/2/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Term.h"
#import "Publication.h"

@interface ZappService : NSObject

+ (ZappService *)sharedInstance;
- (void)deleteAppData;
- (NSArray*)listOfPublications;
- (NSArray*)listOfFeaturedPublications;
- (NSArray *)publicationTerms;
- (void)loadZappWithCallBack:(void(^)(NSError* error))callback;
- (void)loadModules:(void(^)())loadedCallback;
- (NSArray *)menuTerms;
- (UIImage *)imageForTabBarIcon:(NSString *)url;
- (NSArray *)markupsForTerm:(Term *)term;
- (Publication *)publicationById:(NSString *)publicationId;

@end
