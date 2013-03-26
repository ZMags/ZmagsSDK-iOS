//
//  Term.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Markup, Publication, Term;

@interface Term : NSManagedObject

@property (nonatomic, retain) NSDate *created;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *order;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSNumber *termId;
@property (nonatomic, retain) NSDate *updated;
@property (nonatomic, retain) NSSet *children;
@property (nonatomic, retain) NSSet *markups;
@property (nonatomic, retain) Term *parent;
@property (nonatomic, retain) NSSet *publications;
@end

@interface Term (CoreDataGeneratedAccessors)

- (void)addChildrenObject:(Term *)value;
- (void)removeChildrenObject:(Term *)value;
- (void)addChildren:(NSSet *)values;
- (void)removeChildren:(NSSet *)values;

- (void)addMarkupsObject:(Markup *)value;
- (void)removeMarkupsObject:(Markup *)value;
- (void)addMarkups:(NSSet *)values;
- (void)removeMarkups:(NSSet *)values;

- (void)addPublicationsObject:(Publication *)value;
- (void)removePublicationsObject:(Publication *)value;
- (void)addPublications:(NSSet *)values;
- (void)removePublications:(NSSet *)values;

@end
