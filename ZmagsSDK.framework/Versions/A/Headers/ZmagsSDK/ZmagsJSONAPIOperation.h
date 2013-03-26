//
//  ZmagsJSONAPIOperation.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 6/22/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#import "ZmagsAPIOperation.h"

@interface ZmagsJSONAPIOperation : ZmagsAPIOperation {
    id _responseJSON;
}

@property (nonatomic, strong) id responseJSON;

@end
