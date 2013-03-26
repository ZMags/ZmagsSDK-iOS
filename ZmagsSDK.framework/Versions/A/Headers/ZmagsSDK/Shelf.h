//
//  LibraryRow.h
//  Library
//
//  Created by Rob Lester on 12/7/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ShelfDataSource.h"
#import "SubshelfDataSource.h"
#import "LibraryPublicationCategory.h"
#import "SwipeView.h"

@class ShelfDataSource;
@class Shelf;

@protocol Shelf <NSObject>

- (void)shelf:(Shelf *)libraryRow withSwipeView:(SwipeView *)swipeView didSelectItemAtIndex:(NSInteger)index;

@end

@interface Shelf : UITableViewCell <SwipeViewDelegate>

@property (nonatomic, strong) ShelfDataSource *dataSource;
@property (nonatomic, weak) id <Shelf> delegate;

- (void)animateSelectionOfItemAtIndex:(NSInteger)index;
- (void)animateUnselectionOfRowWithAnimationDuration:(float)duration;
- (void)selectRowAtIndex:(NSInteger)index withCurrentIndex:(NSInteger)currentIndex usingSelectedPublication:(LibraryPublication *)libraryPublication;
- (void)unselectRow;
- (void)subRowInsertForItemAtIndex:(NSInteger)index;
- (void)subRowRemoveForItemAtIndex:(NSInteger)index;
- (NSInteger)currentFirstIndex;

@end
