//
//  YDNativeExpressView.h
//  YDAdModule
//
//  Created by YueDong on 2023/12/21.
//

#ifndef YDNativeExpressView_h
#define YDNativeExpressView_h

#import <UIKit/UIKit.h>
#import "YDNativeExpressAd.h"

NS_ASSUME_NONNULL_BEGIN


@interface YDNativeExpressView : UIView

/// 控制器 必传
@property (nonatomic, weak) UIViewController *rootController;

@property (nonatomic, strong) id<YDNativeAdDataObject> dataObject;

/// 是否渲染完毕
@property (nonatomic, assign, readonly) BOOL isReady;

/// 是否是视频广告
@property (nonatomic, assign, readonly) BOOL isVideoAd;

/// 广告是否有效 广告加载成功  未曝光  未过期时，为YES，否则为NO
@property (nonatomic, readonly) BOOL isAdValid;

/// 渲染
- (void)render;

- (void)addAdView:(UIView *)adView;

- (UIView *)getRenderView;

- (void)registerClickableViews:(nullable NSArray<UIView *> *)views;

- (void)registerContainer:(__kindof UIView *)containerView
       withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews;

- (void)unregisterView;

/// 视频广告时长，单位 ms
- (CGFloat)videoDuration;

/// 视频广告已播放时长，单位 ms
- (CGFloat)videoPlayTime;

@end

NS_ASSUME_NONNULL_END
#endif /* YDNativeExpressView_h */
