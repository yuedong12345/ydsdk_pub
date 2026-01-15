//
//  YDAdCacheData.h
//  YDAdModule
//
//  Created by dfy on 2024/3/19.
//

#ifndef YDAdCacheData_h
#define YDAdCacheData_h

#import "YDCommon.h"

@interface YDAdCacheData : NSObject

- (instancetype)init:(id<YDAdNative>)ad_native;

- (NSComparisonResult)compare:(YDAdCacheData *)other;

- (id<YDAdNative>)getAdNative;

- (BOOL)isExpire:(NSTimeInterval)currentTime;
@end
#endif /* YDAdCacheData_h */
