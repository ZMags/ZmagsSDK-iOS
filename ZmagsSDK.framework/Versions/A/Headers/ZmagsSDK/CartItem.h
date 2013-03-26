//
//  CartItem.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Cart;

@interface CartItem : NSManagedObject

@property (nonatomic, retain) NSString *bundle;
@property (nonatomic, retain) NSString *itemId;
@property (nonatomic, retain) Cart *cart;

@end
