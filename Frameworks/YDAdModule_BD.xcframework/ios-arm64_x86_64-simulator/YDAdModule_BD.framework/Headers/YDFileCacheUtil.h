//
//  YDFileCacheUtil.h
//  YDAdModule
//
//  Created by dfy on 2025/4/15.
//

#ifndef YDFileCacheUtil_h
#define YDFileCacheUtil_h

@interface YDFileCacheUtil : NSObject

+ (NSData *)readCache:(NSString *)cacheFileName;

+ (void)writeToCache:(NSString *)cacheFileName cacheData:(NSData *)encryptedData;

+ (BOOL)isCacheValid:(NSString *)cacheFileName interval:(NSInteger)updateInterval;

// 删除指定缓存文件及其时间戳
+ (void)deleteCache:(NSString *)cacheFileName;

@end

#endif /* YDFileCacheUtil_h */
