//
//  CoreDataService.h
//  ZmagsService
//
//  Created by Rob Lester on 2/2/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <RestKit.h>

@interface CoreDataService : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (CoreDataService *)sharedInstance;
- (void)saveContext;
- (void)reset;

@end
