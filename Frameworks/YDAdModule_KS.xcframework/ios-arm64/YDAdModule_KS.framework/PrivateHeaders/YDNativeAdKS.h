//
//  YDNativeAdKS.h
//  YDAdModule
//
//  Created by SureLove on 2025/5/10.
//

#import <Foundation/Foundation.h>
#import "YDNativeExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@class KSNativeAd;

@interface YDNativeAdKS : NSObject<YDNativeAdDataObject>

- (instancetype)init:(KSNativeAd *)dataObj size:(CGSize)containerSize;
@end

NS_ASSUME_NONNULL_END
