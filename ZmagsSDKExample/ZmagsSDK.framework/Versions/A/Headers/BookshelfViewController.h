//
//  ViewController.h
//  Library
//
//  Created by Rob Lester on 12/6/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZmagsSDK/Shelf.h"
#import "ZmagsSDK/BookshelfViewControllerDelegate.h"
#import "ZmagsSDK/BookshelfSearchController.h"

extern NSString *const PUBLICATION_DOWNLOAD_UPDATE_NOTIFICATION;

@interface BookshelfViewController : UITableViewController <UITableViewDelegate, Shelf, BookshelfSearchControllerDelegate>
@property (nonatomic, strong) id <BookshelfViewControllerDelegate> delegate;

extern const NSInteger SEARCH_WIDTH;

@end
