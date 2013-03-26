//
//  ScrubberDataSource.h
//  Scrubber
//
//  Created by Rob Lester on 4/24/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
@class  ScrubberView;

@protocol ScrubberDataSourceProtocol <NSObject, UITableViewDataSource>
- (NSInteger)numberOfPagesInPublicationForScrubberView:(ScrubberView *)scrubberView;
- (NSInteger)numberofSpreadsInPublicationForScrubberView:(ScrubberView *)scrubberView;
- (NSInteger)numberOfPagesInSpreadForScrubberView:(ScrubberView *)scrubberView;
- (NSString *)chapterNameForPageNumber:(NSInteger)pageNumber inScrubberView:(ScrubberView *)scrubberView;
- (BOOL)doesPublicationHidePageNumbers;
- (BOOL)doesPublicationHaveTwoPageCover;

@end
