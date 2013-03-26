//
//  LibrarySubRowDataSource.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 12/10/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Term.h"
#import "SwipeView.h"

@interface SubshelfDataSource : NSObject <SwipeViewDataSource>

- (id)initWithSelectedIndex:(NSInteger)index andTerm:(Term *)term;

@end
