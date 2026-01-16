//
//  YDNativeAdGDT.h
//  YDAdModule
//
//  Created by dfy on 2025/5/6.
//

#ifndef YDNativeAdGDT_h
#define YDNativeAdGDT_h

#import "YDNativeExpressAd.h"

@class GDTUnifiedNativeAdDataObject, GDTUnifiedNativeAdView;

@interface YDNativeAdGDT : NSObject<YDNativeAdDataObject>

- (instancetype)init:(GDTUnifiedNativeAdDataObject *)dataObj size:(CGSize)containerSize;

- (GDTUnifiedNativeAdView *)gdtNativeAdView;
@end
#endif /* YDNativeAdGDT_h */
