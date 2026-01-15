//
//  YDADXBannerAdView.h
//  YDAdModule
//
//  Created by Claude on 2024/12/18.
//

#ifndef YDADXBannerAdView_h
#define YDADXBannerAdView_h

#import <UIKit/UIKit.h>
#import "YDADXAd.h"
#import "YDAdSlot.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXBannerAdView;
@protocol YDADXVideoViewStateDelegate;

@protocol YDADXBannerAdViewDelegate <NSObject>

@optional
/**
 Banner视图渲染成功回调
 @param bannerView YDADXBannerAdView 实例
 */
- (void)YDBannerViewDidRenderSuccess:(YDADXBannerAdView *)bannerView;

/**
 Banner视图渲染失败回调
 @param bannerView YDADXBannerAdView 实例
 @param error 错误信息
 */
- (void)YDBannerViewDidRenderFail:(YDADXBannerAdView *)bannerView error:(NSError *)error;

/**
 Banner视图点击回调
 @param bannerView YDADXBannerAdView 实例
 */
- (void)YDBannerViewDidClick:(YDADXBannerAdView *)bannerView;

/**
 Banner关闭按钮点击回调
 @param bannerView YDADXBannerAdView 实例
 */
- (void)YDBannerViewCloseButtonClick:(YDADXBannerAdView *)bannerView;

/**
 Banner视图移动到window时回调（用于曝光上报）
 @param bannerView YDADXBannerAdView 实例
 */
- (void)YDBannerViewMoveToWindow:(YDADXBannerAdView *)bannerView;

@end

@interface YDADXBannerAdView : UIView

/**
 代理对象
 */
@property (nonatomic, weak, nullable) id<YDADXBannerAdViewDelegate> delegate;

/**
 广告位信息（用于上报）
 */
@property (nonatomic, strong, nullable) YDAdSlot *slot;

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

#endif /* YDADXBannerAdView_h */
