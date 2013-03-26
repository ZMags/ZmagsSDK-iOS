//
//  LibrarySearchDataSource.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 1/24/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Publication.h"

@protocol BookshelfSearchControllerDelegate <NSObject>

- (void)openPublication:(Publication*)publication;

@end

@interface BookshelfSearchController : NSObject <UITableViewDataSource, UISearchBarDelegate, UITableViewDelegate, UISearchDisplayDelegate>

@property(nonatomic, strong) UISearchDisplayController* displayController;
@property(nonatomic, weak) id<BookshelfSearchControllerDelegate>delegate;

@end
