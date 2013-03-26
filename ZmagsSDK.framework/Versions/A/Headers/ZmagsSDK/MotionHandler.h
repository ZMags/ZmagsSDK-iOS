//
//  MotionHandler.h
//  AOMobilHD
//
//  Created by Eric Shea on 1/15/12.
//  Copyright (c) 2012 InterLogic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>

@interface MotionHandler : NSObject {
    CMMotionManager *motionManager;
}

@property(strong, nonatomic) CMMotionManager *motionManager;
+ (MotionHandler *)sharedInstance;
@end
