//
//  PageDataSource.h
//  Zlabs-Mobile
//
//  Created by Rob Lester on 10/24/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZmagsService.h"
#import "Publication.h"

@interface PageDataSource : NSObject
+ (UIImageView *)imageForPageNumber:(NSInteger)pageNumber withPublication:(Publication *)publication withCallBack:(void(^)(UIImageView* imageView))block;
@end

