//
//  YDADXBannerAd.h
//  YDAdModule
//
//  Created by Claude on 2024/12/18.
//

#ifndef YDADXBannerAd_h
#define YDADXBannerAd_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDAdSlot.h"
#import "YDADXAdTypeBase.h"
#import "YDADXMaterialMeta.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXBannerAd;
@class YDADXBannerAdView;

@protocol YDADXBannerAdDelegate <NSObject>

@optional
/**
 广告加载成功回调
 @param bannerAd YDADXBannerAd 实例
 */
- (void)YDBannerAdLoadSuccess:(YDADXBannerAd *)bannerAd;

/**
 广告加载失败回调
 @param bannerAd YDADXBannerAd 实例
 @param error 错误信息
 */
- (void)YDBannerAdLoadFail:(YDADXBannerAd *)bannerAd error:(NSError *)error;

/**
 广告渲染成功回调
 @param bannerAd YDADXBannerAd 实例
 */
- (void)YDBannerAdRenderSuccess:(YDADXBannerAd *)bannerAd;

/**
 广告渲染失败回调
 @param bannerAd YDADXBannerAd 实例
 @param error 错误信息
 */
- (void)YDBannerAdRenderFail:(YDADXBannerAd *)bannerAd error:(NSError *)error;

/**
 广告曝光回调
 @param bannerAd YDADXBannerAd 实例
 */
- (void)YDBannerAdDidShow:(YDADXBannerAd *)bannerAd;

/**
 广告点击回调
 @param bannerAd YDADXBannerAd 实例
 */
- (void)YDBannerAdDidClick:(YDADXBannerAd *)bannerAd;

/**
 广告关闭回调
 @param bannerAd YDADXBannerAd 实例
 */
- (void)YDBannerAdDidClose:(YDADXBannerAd *)bannerAd;

/**
 详情页关闭回调
 @param bannerAd YDADXBannerAd 实例
 @param interactionType 交互类型
 */
- (void)bannerDidCloseOtherController:(YDADXBannerAd *)bannerAd interactionType:(YDADXInteractionType)interactionType;

@end

@interface YDADXBannerAd : YDADXAdTypeBase

/**
 代理对象
 */
@property (nonatomic, weak, nullable) id<YDADXBannerAdDelegate> delegate;

/**
 Banner视图（只读，广告加载成功后自动创建）
 */
@property (nonatomic, strong, readonly, nullable) YDADXBannerAdView *bannerView;

/**
 广告请求延迟时间
 */
@property (nonatomic, assign) CGFloat fetchDelay;

/**
 用于展示广告详情页的根视图控制器
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/**
 初始化方法
 @param slot 广告位信息
 @param adSize 广告尺寸（推荐300x60）
 @return YDADXBannerAd 实例
 */
- (instancetype)initWithSlot:(YDAdSlot *)slot adSize:(CGSize)adSize;

/**
 初始化方法
 @param slotID 广告位ID
 @param adSize 广告尺寸（推荐300x60）
 @return YDADXBannerAd 实例
 */
- (instancetype)initWithSlotID:(NSString *)slotID adSize:(CGSize)adSize;

/**
 加载广告数据
 */
- (void)loadAdData;

/**
 获取广告eCPM价格
 @return eCPM价格（单位：分）
 */
- (NSInteger)eCPM;

@end

NS_ASSUME_NONNULL_END

#endif /* YDADXBannerAd_h */
