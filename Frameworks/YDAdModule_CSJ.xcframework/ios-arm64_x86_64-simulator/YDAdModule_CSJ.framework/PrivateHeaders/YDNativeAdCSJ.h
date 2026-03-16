//
//  YDNativeAdCSJ.h
//  YDAdModule
//
//  Created by dfy on 2025/5/6.
//

#ifndef YDNativeAdCSJ_h
#define YDNativeAdCSJ_h

#import "YDNativeExpressAd.h"

@class BUNativeAd;

@interface YDNativeAdCSJ : NSObject <YDNativeAdDataObject>

- (instancetype)init:(BUNativeAd *)adNative size:(CGSize)containerSize;

@end

#endif /* YDNativeAdCSJ_h */
