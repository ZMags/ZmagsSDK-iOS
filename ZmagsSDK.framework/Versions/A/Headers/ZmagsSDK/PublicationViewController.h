//
//  PublicationViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/23/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PublicationViewDataSource.h"
//#import "WidgetView.h"
#import "UIColor+HexString.h"
#import "PageScrollViewController.h"

typedef enum {
    resting,
    animating
} AnimationState;

@interface PublicationViewController : PageScrollViewController

- (void)goToSpreadNumber:(NSInteger)spreadNumber;

@end
