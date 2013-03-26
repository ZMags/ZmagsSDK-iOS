//
//  PageView.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/24/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Publication.h"
#import "PageDataSource.h"

typedef enum {
    left,
    right,
    center
} PageViewJustification;

@protocol PageViewDelegate <NSObject>

- (void)pageViewLoaded;

@end

@interface PageView : UIView

@property(nonatomic) NSInteger pageNumber;
@property(nonatomic) BOOL isLoaded;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, weak) id <PageViewDelegate> delegate;

- (id)initWithPageNumber:(NSInteger)pageNumber ForPublication:(Publication *)publication withJustification:(PageViewJustification)justification;
- (UIImageView *)getImageViewOnPage;
- (void)loadPage;

@end
