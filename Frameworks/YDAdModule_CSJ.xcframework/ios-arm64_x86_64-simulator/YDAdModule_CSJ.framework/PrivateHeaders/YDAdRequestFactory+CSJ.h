//
//  YDAdRequestFactory+CSJ.h
//  YDAdModule
//
//  Created on 2026/03/16.
//

#import "YDAdRequestFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDAdRequestFactory (CSJ)

/// CSJ ADN 工厂方法
+ (YDAdNativeBase *)csjCreateAd:(YDAdPosConfig *)adConfig adType:(NSString *)ad_type;

/// CSJ M (融合版) ADN 工厂方法
+ (YDAdNativeBase *)csjMCreateAd:(YDAdPosConfig *)adConfig adType:(NSString *)ad_type;

@end

NS_ASSUME_NONNULL_END
