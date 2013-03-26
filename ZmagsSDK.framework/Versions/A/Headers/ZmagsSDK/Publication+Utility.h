//
//  Publication+Utility.h
//  zmags
//
//  Created by Rob Lester on 2/19/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "Publication.h"

@interface Publication (Utility)

- (NSInteger)numberOfPages;
- (NSInteger)numberOfPagesInSpread;
- (NSInteger)numberOfSpreads;
- (NSInteger)spreadIndexForPageNumber:(NSInteger)pageNumber;

@end
