//
//  YDNativeAdBD.h
//  YDAdModule
//
//  Created by SureLove on 2025/5/10.
//

#import <Foundation/Foundation.h>
#import "YDNativeExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@class BaiduMobAdNativeAdObject;

@interface YDNativeAdBD : NSObject<YDNativeAdDataObject>

- (instancetype)init:(BaiduMobAdNativeAdObject *)dataObj size:(CGSize)containerSize;
@end

NS_ASSUME_NONNULL_END
