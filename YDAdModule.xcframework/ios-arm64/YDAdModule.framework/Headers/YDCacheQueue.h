//
//  YDCacheQueue.h
//  YDAdModule
//
//  Created by dfy on 2024/3/19.
//

#ifndef YDCacheQueue_h
#define YDCacheQueue_h

#import "YDAdCacheData.h"

@interface YDCacheQueue : NSObject

@property(nonatomic) NSInteger queueSize;

- (instancetype)init;

- (NSInteger)count;

- (void)addCache:(YDAdCacheData *)cache;

- (YDAdCacheData *)getCache;

- (void)consumeAdCache:(YDAdCacheData *)cache;

- (void)refreshAdCache;

- (NSString *)printQueue;
@end
#endif /* YDCacheQueue_h */
