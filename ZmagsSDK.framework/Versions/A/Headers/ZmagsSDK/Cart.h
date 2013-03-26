//
//  Cart.h
//  Pods
//
//  Created by Rob Lester on 2/2/13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CartItem;

@interface Cart : NSManagedObject

@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSSet *cartItems;
@end

@interface Cart (CoreDataGeneratedAccessors)

- (void)addCartItemsObject:(CartItem *)value;
- (void)removeCartItemsObject:(CartItem *)value;
- (void)addCartItems:(NSSet *)values;
- (void)removeCartItems:(NSSet *)values;

@end
