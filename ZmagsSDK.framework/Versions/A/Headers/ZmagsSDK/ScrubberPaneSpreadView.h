//
//  SrubberPaneSpread.h
//  Zmags-UI
//
//  Created by Rob Lester on 2/27/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScrubberPaneSpreadView : UITableViewCell

@property (nonatomic, strong) UIImageView *leftImageView;
@property (nonatomic, strong) UIImageView *rightImageView;
@property (nonatomic, strong) NSString *spreadString;
@property (nonatomic) BOOL isSinglePage;

@end
