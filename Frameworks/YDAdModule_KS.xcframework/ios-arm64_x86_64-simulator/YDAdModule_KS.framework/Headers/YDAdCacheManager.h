//
//  YDAdCacheManager.h
//  YDAdModule
//
//  Created by dfy on 2024/3/20.
//

#ifndef YDAdCacheManager_h
#define YDAdCacheManager_h

#import "YDAdCacheData.h"

@interface YDAdCacheManager : NSObject

+ (YDAdCacheManager *)sharedInstance;

//+ (void)addCache2:(NSString *)scene cache:(YDAdCacheData *)cacheData;

+ (void)addCache:(NSString *)scene cache:(id<YDAdNative>)cacheData;

+ (NSInteger)getCacheNum:(NSString *)scene;

+ (YDAdCacheData *)getAdCache:(NSString *)scene;

+ (void)consumeAdCache:(NSString *)scene cache:(YDAdCacheData *)cache;
@end
#endif /* YDAdCacheManager_h */
