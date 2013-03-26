//
//  PublicationDownloadView.h
//  Zlabs-Mobile
//
//  Created by Thomas Boetig on 6/9/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Publication.h"
#import <QuartzCore/QuartzCore.h>
#import "Constants.h"

typedef enum {
    PublicationDownloadStateNotDownloaded,
    PublicationDownloadStateFinished,
    PublicationDownloadStateDownloading,
    PublicationDownloadStatePaused
} PublicationDownloadState;

@interface PublicationDownloadView : UIView

- (id)initWithPublication:(Publication *)pub;

@end
