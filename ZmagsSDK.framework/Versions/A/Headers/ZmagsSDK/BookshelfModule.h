//
// ZLabs-Mobile
// Created by Shawn Hooley on 8/27/12.
// Copyright (c) 2012 Zmags. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "ZMagsModule.h"


@interface BookshelfModule : ZMagsModule<ModuleDelegate>

@property(nonatomic) BOOL status;

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;

@property (retain, nonatomic) NSString *topText;

@property (retain, nonatomic) UIColor *publicationTitleFontColor;
@property (retain, nonatomic) UIFont  *publicationTitleFont;

@property (retain, nonatomic) UIColor *rowTitleFontColor;
@property (retain, nonatomic) UIFont  *rowTitleFont;

@property (retain, nonatomic) UIColor *subcategoryTitleFontColor;
@property (retain, nonatomic) UIFont  *subcategoryTitleFont;
@property (retain, nonatomic) UIImage *subcategoryBackgroundImage;

@property (retain, nonatomic) UIImage *publicationBackgroundImage;
@property (retain, nonatomic) UIImage *publicationTwoPageLoadingImage;
@property (retain, nonatomic) UIImage *publicationSinglePageLoadingImage;

@property (retain, nonatomic) UIImage *publicationTab;
@property (retain, nonatomic) UIImage *publicationSelectedIndicator;
@property (retain, nonatomic) UIImage *publicationGridArrow;

@property (retain, nonatomic) UIImage *tabBarImage;
@property (retain, nonatomic) UIImage *publicationShadow;
@property (retain, nonatomic) UIImage *publicationSheen;

@property (retain, nonatomic) NSString *titleHide;
@property (retain, nonatomic) NSString *titleShow;

@property (retain, nonatomic) NSString *publicationsHideAll;
@property (retain, nonatomic) NSString *publicationsShowAll;

@property (retain, nonatomic) UIImage *publicationTabShadow;

@property (retain, nonatomic) UIFont   *pagingGridWrapperButtonFont;
@property (retain, nonatomic) NSString *pagingGridWrapperButtonFontColor;
@property (retain, nonatomic) NSString *pagingGridWrapperButtonText;

@property (retain, nonatomic) UIImage *leftArrowImage;
@property (retain, nonatomic) UIImage *rightArrowImage;

@property (nonatomic) BOOL showSearch;


+(BookshelfModule *) sharedInstance;

- (UILabel *) publicationTitleLabel;
- (UILabel *) subcategoryTitleLabel;
- (UIImageView *) gridItemImageView;
- (UIImageView *) sheenView;
- (UIImageView *) subcategoryBackgroundView;
- (UIImageView *) gridShadowView;

- (UILabel *) rowTitleLabel;


@end
