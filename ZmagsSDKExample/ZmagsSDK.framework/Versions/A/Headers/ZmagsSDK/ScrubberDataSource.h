 //
//  ScrubberViewControllerDataSource.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/23/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Publication.h"
#import "ZmagsService.h"
#import "Constants.h"
#import "ScrubberView.h"
#import "ScrubberDataSourceProtocol.h"

@interface ScrubberDataSource : NSObject <ScrubberDataSourceProtocol>

- (id)initWithPublication:(Publication *)publication;

@end
