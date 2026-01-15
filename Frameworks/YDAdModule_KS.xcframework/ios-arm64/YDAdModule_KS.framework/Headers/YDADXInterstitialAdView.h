//
//  YDADXInterstitialAdView.h
//  YDAdModule
//
//  Created by Claude on 2024/12/18.
//

#ifndef YDADXInterstitialAdView_h
#define YDADXInterstitialAdView_h

#import <UIKit/UIKit.h>
#import "YDADXAd.h"
#import "YDAdSlot.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXInterstitialAdView;
@protocol YDADXVideoViewStateDelegate;

@protocol YDADXInterstitialAdViewDelegate <NSObject>

@optional
/**
 插屏视图渲染成功回调
 @param interstitialView YDADXInterstitialAdView 实例
 */
- (void)YDInterstitialViewDidRenderSuccess:(YDADXInterstitialAdView *)interstitialView;

/**
 插屏视图渲染失败回调
 @param interstitialView YDADXInterstitialAdView 实例
 @param error 错误信息
 */
- (void)YDInterstitialViewDidRenderFail:(YDADXInterstitialAdView *)interstitialView error:(NSError *)error;

/**
 插屏视图点击回调
 @param interstitialView YDADXInterstitialAdView 实例
 */
- (void)YDInterstitialViewDidClick:(YDADXInterstitialAdView *)interstitialView;

/**
 插屏关闭按钮点击回调
 @param interstitialView YDADXInterstitialAdView 实例
 */
- (void)YDInterstitialViewCloseButtonClick:(YDADXInterstitialAdView *)interstitialView;

@end

@interface YDADXInterstitialAdView : UIView

/**
 代理对象
 */
@property (nonatomic, weak, nullable) id<YDADXInterstitialAdViewDelegate> delegate;

/**
 广告位信息（用于上报）
 */
@property (nonatomic, strong, nullable) YDAdSlot *slot;

/**
 关闭按钮延迟显示时间（秒），默认3秒
 */
@property (nonatomic, assign) NSTimeInterval closeButtonDelay;

/**
 旋转角度灵敏度配置（度）
 */
@property (nonatomic, assign) double rotateAngle;

/**
 加速度灵敏度配置（m/s²）
 */
@property (nonatomic, assign) double accValue;

/**
 渲染广告数据
 @param adData 广告数据对象
 */
- (void)render:(YDADXAd *)adData;

/**
 获取可点击的视图数组
 @return 可点击的视图数组
 */
- (NSArray<UIView *> *)getClickableViews;

/**
 设置视频播放delegate（如果有视频素材）
 @param delegate 视频播放状态代理
 */
- (void)setVideoDelegate:(id<YDADXVideoViewStateDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END

#endif /* YDADXInterstitialAdView_h */
