//
//  LibrarySubRow.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 12/13/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SubshelfDataSource.h"
#import "Shelf.h"

@interface SubShelf : UITableViewCell <SwipeViewDelegate>

@property (nonatomic, strong) SubshelfDataSource *dataSource;
@property (nonatomic, weak) id <Shelf> delegate;

@end
