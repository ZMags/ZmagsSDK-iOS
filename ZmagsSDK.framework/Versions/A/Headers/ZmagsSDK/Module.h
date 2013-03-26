//
//  Module.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Module : NSManagedObject

@property (nonatomic, retain) NSString *bundle;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSNumber *moduleType;
@property (nonatomic, retain) NSNumber *state;

@end
