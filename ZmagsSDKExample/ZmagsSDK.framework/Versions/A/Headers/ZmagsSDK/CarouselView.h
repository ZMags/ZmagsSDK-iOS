//
//  CarouselView.h
//
//  Displays a rotating carousel, the CarouselView deals with user input and delegates
//  layout out the slots to SlotsLayer
//
//  Uses the CarouselViewDelegate to configure itself and make callbacks
//
//  Created by Eric Shea on 10/26/11.
//  Copyright (c) 2011 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CarouselModule.h"
#import "Publication.h"

@class CarouselView;

@protocol CarouselDelegateProtocol <NSObject>

- (void)openPublication:(Publication *)publication;

@end

@protocol CarouselDataSourceProtocol <NSObject>

@required
- (int)numberOfPublications;
- (UIImage *)carousel:(CarouselView*)view cover:(int)index;
- (NSString *)carousel:(CarouselView *)view title:(int)index;
- (Publication *)publicationForIndex:(NSInteger)index;
@end

@interface CarouselView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic, retain) UILabel *slotLabel;
@property (nonatomic, weak) IBOutlet id <CarouselDelegateProtocol> delegate;
@property (nonatomic, weak) IBOutlet id <CarouselDataSourceProtocol> dataSource;


- (id)initWithFrame:(CGRect)frame andDelegate:(id <CarouselDelegateProtocol>)carouselDelegate andDataSource:(id <CarouselDataSourceProtocol>)carouselDataSource;
- (void)rotateLeft;
- (void)rotateRight;
- (void)updateSlotTitle:(int)index;
- (void)pan:(UIPanGestureRecognizer *)pan;
- (void)updateSlotImage:(UIImage *)image atIndex:(int)index;

@end