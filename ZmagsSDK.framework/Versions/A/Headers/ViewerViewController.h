//
//  ViewerViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/23/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZmagsSDK/ScrubberDataSource.h"
#import "ZmagsSDK/PageScrollViewControllerDelegate.h"
#import "ZmagsSDK/PublicationNavigationBar.h"

@interface ViewerViewController : UIViewController <PageScrollViewControllerDelegate, PublicationNavigationDelegate, ScrubberViewDelegate>

- (id)initWithPublication:(NSString *)publicationId;

@end
