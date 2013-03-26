//
//  ZmagsAPIOperation.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 6/19/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

typedef NSUInteger ZmagsRequestState;

typedef enum {
    ZmagsRequestTypePubInfo,
    ZmagsRequestTypePubDescriptor,
    ZmagsRequestTypePageDescriptor,
    ZmagsRequestTypePageEnrichments,
    ZmagsRequestTypePageRepresentation,
    ZmagsRequestTypeCheckAssetsComplete,
    ZmagsRequestTypeCheckAllPageRepsComplete,
    ZmagsRequestTypeProduct,
    ZmagsRequestTypeAsset,
    ZmagsRequestTypeRemovePublication,
} ZmagsAPIRequestType;

@class ZmagsAPIOperation, PublicationInfo;

@protocol ZmagsAPIRequestDelegate <NSObject>
// TODO maybe break this up into two methods
- (void)operationCompleted:(NSOperation *)operation didFail:(BOOL)didFail withError:(NSError *)error;

@end

@interface ZmagsAPIOperation : NSOperation

@property (atomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSURLRequest *request;
@property (nonatomic, strong) NSString *publicationId;
@property (nonatomic, strong) NSMutableData *data;
@property (nonatomic, strong) NSURLConnection *connection;
@property (nonatomic) BOOL done;
@property (nonatomic) NSInteger requestType;
@property (weak) id <ZmagsAPIRequestDelegate> delegate;

- (id)initWithDelegate:(id)delegate;
- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)completed:(id)responseObject;
- (void)didFailWithError:(NSError *)error;
- (void)finish;

- (PublicationInfo *)publicationInfoById:(NSString *)publicationId;

@end
