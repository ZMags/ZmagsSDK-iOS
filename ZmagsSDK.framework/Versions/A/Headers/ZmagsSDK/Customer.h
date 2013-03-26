//
//  Customer.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Customer : NSManagedObject

@property (nonatomic, retain) NSNumber *customerId;
@property (nonatomic, retain) NSString *name;

@end
