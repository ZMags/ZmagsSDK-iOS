//
//  Catalog.h
//  Library
//
//  Created by Rob Lester on 12/10/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Publication.h"
#import "ZImageView.h"

@interface LibraryPublication : UIView

//Protected Methods
- (void)setFontForLabel:(UILabel*)label;
- (void)coverImageDownloaded;

- (id)initWithPublication:(Publication*)publication withName:(NSString *)title;
- (void)setPublication:(Publication *)publication withTitle:(NSString *)title;
- (void)prepareForResuse;

@property (nonatomic, strong) ZImageView* imageView;
@property (nonatomic, readonly, strong) Publication* publication;
@property (nonatomic, readonly, strong) UILabel *label;


@end
