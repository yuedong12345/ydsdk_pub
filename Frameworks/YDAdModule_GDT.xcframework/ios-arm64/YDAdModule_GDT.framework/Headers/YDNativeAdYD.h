//
//  YDNativeAdYD.h
//  YDAdModule
//
//  Created by SureLove on 2025/5/14.
//

#import <Foundation/Foundation.h>
#import "YDNativeExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXInfoAd;

@interface YDNativeAdYD : NSObject<YDNativeAdDataObject>

- (instancetype)init:(YDADXInfoAd *)dataObj size:(CGSize)containerSize;
@end

NS_ASSUME_NONNULL_END
