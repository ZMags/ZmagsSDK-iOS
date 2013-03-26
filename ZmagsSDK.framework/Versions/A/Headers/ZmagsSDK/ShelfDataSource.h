//
//  LibraryRowDataSource.h
//  Library
//
//  Created by Rob Lester on 12/7/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Shelf.h"
#import "Term.h"
#import "SwipeView.h"

@interface ShelfDataSource : NSObject <SwipeViewDataSource>

- (id)initWithTerm:(Term *)term;
- (Publication *)publicationAtIndex:(NSInteger)index;

@end
