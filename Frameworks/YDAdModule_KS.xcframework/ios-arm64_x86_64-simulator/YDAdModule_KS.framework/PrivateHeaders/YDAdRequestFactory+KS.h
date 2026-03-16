//
//  YDAdRequestFactory+KS.h
//  YDAdModule
//
//  Created on 2026/03/16.
//

#import "YDAdRequestFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDAdRequestFactory (KS)

/// KS ADN 工厂方法
+ (YDAdNativeBase *)ksCreateAd:(YDAdPosConfig *)adConfig adType:(NSString *)ad_type;

@end

NS_ASSUME_NONNULL_END
