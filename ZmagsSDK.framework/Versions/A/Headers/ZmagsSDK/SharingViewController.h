//
// ZLabs-Mobile
// Created by Shawn Hooley on 11/3/12.
// Copyright (c) 2012 Mobispoke. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "PublicationNavigationBar.h"
#import <MessageUI/MessageUI.h>

@interface SharingViewController : UIViewController <MFMailComposeViewControllerDelegate>

@property(nonatomic, strong) PublicationNavigationBar *popOverDelegate;

- (id)initWithPublication:(Publication *)publicationInfo;

@end

