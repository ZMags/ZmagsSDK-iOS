//
//  PublicationController.h
//  ZmagsService
//
//  Created by Rob Lester on 2/4/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageDescriptor.h"
#import "Publication.h"

@interface PublicationController : NSObject

- (id)initWithPublicationId:(NSString *)publicationId;
- (void)isPublicationActivated:(void (^)(BOOL publicationActivated))block;
- (void)getPageNumberWithBlock:(void (^)(NSInteger))block;
- (void)getImageForPage:(NSInteger)page withSize:(CGSize)size withBlock:(void (^)(UIImage *image))block;
- (void)getEnrichmentsForPage:(NSInteger)page withBlock:(void (^)(NSArray *enrichments))block;
- (void)downloadPublicationWithCallBack:(void(^)(CGFloat percentageDownloaded))block;
- (void)deleteDownloadedPublication;
- (void)resumePublicationDownload;
- (void)pausePublicationDownload;
- (void)checkForNewVersionWithBlock:(void (^)(BOOL publicationUpdated))block;

@property (nonatomic, strong, readonly) Publication *publication;


@end
