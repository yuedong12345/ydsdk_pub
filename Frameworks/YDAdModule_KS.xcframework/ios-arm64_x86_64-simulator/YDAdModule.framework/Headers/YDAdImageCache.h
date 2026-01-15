//YDAdImageCache.h
//  YueDong
//
//  Created by YueDong on 2024/7/24.
//  Copyright © 2024 Yue Dong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, YDAdImageCacheType) {
    YDAdImageCacheTypeNone,
    YDAdImageCacheTypeNetwork,//网络
    YDAdImageCacheTypeDisk,//磁盘
    YDAdImageCacheTypeMemory//内存
};

@interface YDAdImageCache : NSObject

+ (instancetype)sharedImageCache;

- (BOOL)moveImageWithData:(NSData *)imageData fileName:(NSString *)fileName atSourceURL:(NSURL *)sourceURL;

- (void)imageDataForKey:(NSString *)key completed:(void (^)(NSData * _Nullable data, YDAdImageCacheType cacheType))complete;

@end

NS_ASSUME_NONNULL_END
