//
//  Markup.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Term;

@interface Markup : NSManagedObject

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSDate *created;
@property (nonatomic, retain) NSString *externalUrl;
@property (nonatomic, retain) NSString *image;
@property (nonatomic, retain) NSNumber *markupId;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDate *updated;
@property (nonatomic, retain) NSNumber *version;
@property (nonatomic, retain) NSSet *terms;
@end

@interface Markup (CoreDataGeneratedAccessors)

- (void)addTermsObject:(Term *)value;
- (void)removeTermsObject:(Term *)value;
- (void)addTerms:(NSSet *)values;
- (void)removeTerms:(NSSet *)values;

@end
