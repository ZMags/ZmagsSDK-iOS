//
//  Publication.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PublicationComponent.h"

@class PublicationInfo, Term;

@interface Publication : PublicationComponent

@property (nonatomic, retain) NSString *catId;
@property (nonatomic, retain) NSString *image;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *order;
@property (nonatomic, retain) NSString *pubId;
@property (nonatomic, retain) NSNumber *publicationId;
@property (nonatomic, retain) NSString *thumbnailPubId;
@property (nonatomic, retain) NSNumber *updateStatus;
@property (nonatomic, retain) NSSet *terms;
@property (nonatomic, retain) PublicationInfo *publicationInfo;
@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL downloaded;
@property (nonatomic) BOOL twoPageCover;
@property (nonatomic) BOOL singlePage;

- (void)getPublicationInfoWithBlock:(void (^)(PublicationInfo *publicationInfo))block;
- (void)deletePublication;
- (void)checkForNewVersionWithCallBack:(void (^)(BOOL publicationUpdated))block;

@end

@interface Publication (CoreDataGeneratedAccessors)

- (void)addTermsObject:(Term *)value;
- (void)removeTermsObject:(Term *)value;
- (void)addTerms:(NSSet *)values;
- (void)removeTerms:(NSSet *)values;

@end
