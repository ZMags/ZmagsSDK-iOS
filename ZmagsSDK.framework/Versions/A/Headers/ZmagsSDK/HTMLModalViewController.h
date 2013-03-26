//
//  HTMLModalViewController.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 8/22/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "PublicationNavigationBar.h"
#import <QuartzCore/QuartzCore.h>

typedef enum {
    Right,
    Top,
    Left,
    Botton
} DisplayDirection;

typedef enum {
    closeLocationLeft,
    closeLocationRight
} CloseLocation;

typedef enum {
    TopBar,
    BottomBar
} NavigationBarLocation;

@interface HTMLModalViewController : UIViewController <UIWebViewDelegate>
@property(nonatomic, strong) UIColor *toolbarColor;
@property(nonatomic) DisplayDirection displayDirection;
@property(nonatomic) BOOL hideArrows;
@property(nonatomic) CloseLocation closeButtonLocation;
@property(nonatomic) NavigationBarLocation navigationBarLocation;

- (id)initWithUrl:(NSString *)url;
- (void)display;
- (void)dismiss;
@end