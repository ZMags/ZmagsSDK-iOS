//
//  ZImageView.h
//  ZmagsSDK
//
//  Created by Rob Lester on 3/19/13.
//  Copyright (c) 2013 Zmags. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZImageView : UIImageView

@property (nonatomic) BOOL showLoadingIndicator;
@property (nonatomic) BOOL crossFadeImages;
@property (nonatomic) BOOL highLightOnTouch;

- (void)loadPageNumber:(NSInteger)pageNumber forPublicationId:(NSString*)publicationId withSize:(CGSize)size success:(void(^)())success;
@end
