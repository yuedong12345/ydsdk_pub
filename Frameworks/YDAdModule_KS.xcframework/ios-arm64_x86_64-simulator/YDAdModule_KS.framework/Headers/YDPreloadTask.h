//
//  YDPreloadTask.h
//  YDAdModule
//
//  Created by dfy on 2025/4/18.
//

#ifndef YDPreloadTask_h
#define YDPreloadTask_h

#import "YDCommon.h"
#import "YDAdPosConfig.h"

typedef void (^YDPreloadCompleteHandler)(BOOL success);

@interface YDPreloadTask : NSObject

- (instancetype)init:(NSString *)sceneId adType:(NSString *)type adnId:(NSString *)providerId adnName:(NSString *)provider;

- (void)addAd:(YDAdPosConfig *)adConfig;

- (BOOL)dataFinished;

- (YDAdPosConfig *)getAd;

- (void)pollAd;

- (void)preloadConfig:(BOOL)success cacheEcpm:(NSInteger)ecpm completeHandler:(YDPreloadCompleteHandler)handler;

- (NSMutableArray *)getLoadList;

- (NSInteger)getPreloadListSize;

@end
#endif /* YDPreloadTask_h */
