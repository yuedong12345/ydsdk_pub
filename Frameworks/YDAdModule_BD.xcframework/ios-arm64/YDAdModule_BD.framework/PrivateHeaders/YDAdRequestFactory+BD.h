//
//  YDAdRequestFactory+BD.h
//  YDAdModule
//
//  Created on 2026/03/16.
//

#import "YDAdRequestFactory.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDAdRequestFactory (BD)

/// BD ADN 工厂方法
+ (YDAdNativeBase *)bdCreateAd:(YDAdPosConfig *)adConfig adType:(NSString *)ad_type;

@end

NS_ASSUME_NONNULL_END
