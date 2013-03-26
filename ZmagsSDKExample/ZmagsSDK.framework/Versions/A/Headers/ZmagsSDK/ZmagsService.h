//
//  ZmagsService.h
//  ZmagsService
//
//  Created by Rob Lester on 2/2/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//
//  This file will be exposed to clients as the interface to a combination of the Publication API and the Zapp API.
//
//  The idea is to lazy load publicaiton data on the returned publication object.
//
//  For example if you wanted the page number you would get the publication object and ask the publication page number property.
//  Below the surface the publication would check if it has it and if it doesn't would go out and retrieve the page number.
//  The upside to this is fast load times, low memory use, no main thread blocking. The downside is everything then has to be done in callbacks and be asyncronus.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Publication.h"
#import "Markup.h"
#import "PublicationController.h"

@interface ZmagsService : NSObject
@property (nonatomic, strong) NSString *appKey;
@property (nonatomic, strong) NSString *apiKey;

extern NSString *const ZAPP_SERVICE_LOAD_COMPLETED_NOTIFICATION;
extern NSString *const ZAPP_SERVICE_LOAD_FAILED_NOTIFICATION;

+ (ZmagsService *)sharedInstance;

- (void)deleteAppData;
- (void)loadApp:(NSString*)appKey withApiKey:(NSString *)zmagsApiKey modulesCompleted:(void(^)())modulesCompletedBlock appDataCompleted:(void(^)())appDataCompletedBlock failure:(void(^)())failBlock;

//Loading
- (void)loadZappServiceWithCallBack:(void(^)())callback;
- (void)loadModulesWithCallBack:(void(^)())callback;

// Publication Retrieval
- (void)publicationListWithCallback:(void(^)(NSArray* publicationID))callback;
- (void)featuredPublicationsWithCallback:(void(^)(NSArray* featuredPublications))callback;
- (Publication*)publicationById:(NSString*)publicationId;

- (PublicationController*)publicationControllerForPublicationId:(NSString*)publicationId;

// Images
- (void)pageImageWithPublicationId:(NSString*)publicationId withPageNumber:(NSUInteger)pageNumber andSize:(CGSize)size callback:(void(^)(UIImage *image))callback;

- (void)downloadPublicationId:(NSString*)publicationId withCallback:(void(^)(CGFloat percentageDownloaded))callback;
- (void)deletePublicationId:(NSString*)publicationId;
- (void)pausePublicationDownload:(NSString*)publicationId;
- (void)resumePublicationDownload:(NSString*)publicationId;

// Functions that probably will change.
- (void)publicationTermListWithCallback:(void(^)(NSArray* terms))callBack;
- (void)menuTermListWithCallBack:(void(^)(NSArray* terms))callback;
- (void)markupForTerm:(Term*)term WithCallBack:(void(^)())callback;

- (void)enrichmentsForPublicationId:(NSString*)publicationId withPageNumber:(NSUInteger)pageNumber callBack:(void(^)(NSArray* enrichments))callback;

- (void)publicationById:(NSString *)publicationId callBack:(void(^)(Publication* publication))callback;

@end
