//
//  LibraryDataSource.h
//  Library
//
//  Created by Rob Lester on 12/6/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Shelf.h"

@interface BookshelfDataSource : NSObject <UITableViewDataSource>

@property (nonatomic, weak) id <Shelf> delegate;

- (void)insertSubRowForRowAtIndexPath:(NSIndexPath *)indexPath withPublicationAtIndex:(NSInteger)index withCurrentFirstIndex:(NSInteger)currentIndex usingSelectedPublication:(LibraryPublication *)selectPublication;
- (BOOL)isSubRowDisplayedAtIndexPath:(NSIndexPath *)indexPath;
- (void)deleteSubRowForRowAtIndexPath:(NSIndexPath *)indexPath;
- (id)initWithTerms:(NSArray*)terms;

@end
