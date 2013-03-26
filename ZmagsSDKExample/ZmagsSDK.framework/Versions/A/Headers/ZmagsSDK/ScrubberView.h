//
//  ScrubberView.h
//  Scrubber
//
//  Created by Rob Lester on 4/24/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ScrubberHeaderView.h"
#import "ScrubberPaneView.h"
#import "ScrubberTrackView.h"
#import "ScrubberDataSourceProtocol.h"

@protocol ScrubberViewDelegate <NSObject>

- (void)scrubberDidFinishScrollingAtPageSpread:(NSInteger)pageSpread;

@end

@interface ScrubberView : UIView <ScrubberTrackDelegate, ScrubberHeaderDelegate, UITableViewDelegate>

typedef enum {
    scrubberViewHeaderOnly,
    scrubberViewCompletelyHidden,
    scrubberVisible
} ScrubberVisibility;

@property (nonatomic, weak) id <ScrubberDataSourceProtocol> dataSource;
@property (nonatomic, weak) id <ScrubberViewDelegate> delegate;
@property (nonatomic, readonly) NSInteger currentSpread;
@property (nonatomic) ScrubberVisibility scrubberVisibility;

- (void)scrollToSpreadNumber:(NSInteger)spreadNumber;
- (ScrubberPaneSpreadView*)currentScrubberPaneSpreadView;
- (void)showOnlyHeader;
- (void)show;
- (void)toggleVisibility;


@end
