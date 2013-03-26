//
//  PublicationViewDataSource.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/23/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Publication.h"
#import "ZmagsService.h"
#import "PageSpreadViewController.h"

@interface PublicationViewDataSource : NSObject <UIPageViewControllerDataSource>

- (id)initWithPublication:(Publication *)publication;
- (PageSpreadViewController *)viewControllerForPageSpreadIndex:(NSInteger)pageSpread;
- (NSInteger)numberOfPageSpreads;
@end
