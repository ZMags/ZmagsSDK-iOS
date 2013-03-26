//
//  MobiDebug.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 3/20/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//

#ifndef Zlabs_Mobile_MobiDebug_h
#define Zlabs_Mobile_MobiDebug_h

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#   define ELog(err) {if(err) DLog(@"%@", err)}
#else
#   define DLog(...)
#   define ELog(...)
#endif

#endif
