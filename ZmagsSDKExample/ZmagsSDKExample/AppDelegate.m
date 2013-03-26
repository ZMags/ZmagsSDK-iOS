//
//  AppDelegate.m
//  ZmagsSDKExample
//
//  Created by Rob Lester on 3/22/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import "AppDelegate.h"
#import <ZmagsSDK/ZmagsSDK.h>

@interface AppDelegate()

@property (nonatomic, strong) UITabBarController *tabBarController;

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.tabBarController = [[UITabBarController alloc] init];
    
    self.window.backgroundColor = [UIColor darkTextColor];
    [self.window setRootViewController:self.tabBarController];
    
    [[ZmagsService sharedInstance] loadApp:@"QNdXaGMAL85e9SPFNEMudgIDDhUD5J99" withApiKey:@"105d0589cf" modulesCompleted:^{
        
    } appDataCompleted:^{
        CarouselViewController* carouselViewController = [[CarouselViewController alloc] init];
        BookshelfViewController *bookShelfViewController = [[BookshelfViewController alloc] init];
        ViewerViewController *vergeViewController = [[ViewerViewController alloc] initWithPublication:@"6be4a1ad"];
        
        //Adding custom title and icon.
        vergeViewController.title = @"Publication";
        vergeViewController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Publication" image:[UIImage imageNamed:@"book"] tag:0];
        
        [self.tabBarController setViewControllers:@[carouselViewController, bookShelfViewController, vergeViewController]];

        [self.window makeKeyAndVisible];
    } failure:^{
        NSLog(@"Failed To Load Zmags API");
    }];
    
    
    [self.window addSubview:self.tabBarController.view];
    return YES;
}

@end
