//
//  AssetCache.h
//  Zlabs-Mobile
//
//  Created by Eric Shea on 7/26/12.
//  Copyright (c) 2012 Zmags. All rights reserved.
//
// Offline publication asset cache on the filesystem
// used by HTML widgets when in offline mode

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AssetCache : NSObject {

}

+ (AssetCache *)sharedInstance;
- (NSString *)fileURLForPublication:(NSString *)pubId assetWithUrl:(NSString *)url;
- (NSString *)fileURLForPublication:(NSString *)pubId assetWithUrl:(NSString *)url andAssetType:(NSString *)assetType;
- (void)cachePublication:(NSString *)pubId assetWithURL:(NSString *)url andData:(NSData *)data;

- (UIImage *)cacheModuleAsset:(NSString *)url zMagsApiKey:(NSString *)zMagsApiKey;
-(UIImage *)moduleAssetFromCache:(NSString *)url zMagsApiKey:(NSString *)zMagsApiKey;
@end
