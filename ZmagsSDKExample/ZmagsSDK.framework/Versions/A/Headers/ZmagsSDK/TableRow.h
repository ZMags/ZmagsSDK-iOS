//
//  TableRow.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 12/13/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//
//  Data model for rows in the library UITableView.
//

#import <Foundation/Foundation.h>
#import "Term.h"
#import "LibraryPublication.h"

typedef enum {
    kRow = 1,
    kSubRow = 2
} TableRowType;


@interface TableRow : NSObject

@property (nonatomic) TableRowType type;
@property (nonatomic, strong) Term *term;
@property (nonatomic, strong) TableRow *subRow;
@property (nonatomic) NSInteger selectedIndex;
@property (nonatomic) NSInteger currentRowIndex;
@property (nonatomic, strong) LibraryPublication *libraryPublication;

@end
