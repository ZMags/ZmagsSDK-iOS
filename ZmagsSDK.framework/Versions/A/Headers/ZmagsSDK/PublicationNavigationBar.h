//
//  PublicationNavigationBar.h
//  Zlabs-Mobile
//
//  Created by Thomas Boetig on 4/14/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Publication.h"
//#import "WebViewForge.h"

@class PublicationInfo;

@protocol PublicationNavigationDelegate <NSObject>
- (void)resetInactivityTimer;
- (void)stopInactivityTimer;
- (void)goToPage:(NSInteger)pageNumber;
- (void)close;

@end

@interface PublicationNavigationBar : UIToolbar <UITextFieldDelegate>

@property (nonatomic, weak) id publicationNavigationDelegate;
@property (nonatomic, strong) UILabel *pageLabel;
@property (nonatomic, strong) UITextField *pageTextField;
@property (nonatomic, assign) BOOL isHidden;
@property (nonatomic, strong) NSString *currentPage;
@property (nonatomic, strong) UIPopoverController *sharingPopover;
@property (nonatomic) BOOL isShowingShare;

- (id)initWithFrame:(CGRect)frame andPublication:(Publication *)publication;
- (void)addButtons;
- (void)updatePageNumbers:(NSString *)pages;
- (void)toggleToolbarDisplay:(id)sender;
- (void)gotoPage:(id)sender;
- (void)dismissModal:(id)sender;
- (void)checkout:(id)sender;
- (void)dismissSharingPopOver;

@end
