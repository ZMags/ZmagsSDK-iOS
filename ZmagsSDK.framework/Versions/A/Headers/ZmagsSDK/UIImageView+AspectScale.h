//
//  UIImageView+AspectScale.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 6/6/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (AspectScale)
- (CGSize)aspectAdjustedImageScale;
- (CGSize)aspectAdjustedImageSize;
- (CGPoint)aspectAdjustedImageOrigin;
@end
