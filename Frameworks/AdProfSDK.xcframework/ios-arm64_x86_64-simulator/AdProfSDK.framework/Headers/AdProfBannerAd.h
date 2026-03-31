//
//  APBannerAd.h
//  AdProfSDK
//
//  Created by coderqi on 2025/11/13.
//

#import <UIKit/UIKit.h>
#import <AdProfSDK/AdProfBannerSlot.h>
#import <AdProfSDK/AdProfBannerView.h>
#import <AdProfSDK/AdProfBaseAd.h>

NS_ASSUME_NONNULL_BEGIN

@class AdProfBannerSlot;
@class AdProfBannerAd;

@protocol AdProfBannerAdDelegate <NSObject>

/**
 *  广告加载成功
 * @param bannerAd  广告对象
 */
- (void)ap_BannerAdLoadSuccess:(AdProfBannerAd *)bannerAd;

/**
 *  广告加载失败
 * @param bannerAd  广告对象
 * @param error  错误信息
 */
- (void)ap_BannerAdLoadFail:(AdProfBannerAd *)bannerAd withError:(NSError *)error;


/**
 * 广告展示成功
 * @param bannerAd  广告对象
 */
- (void)ap_BannerAdShowSuccess:(AdProfBannerAd *)bannerAd;

/**
 * 广告展示失败
 * @param bannerAd  广告对象
 */
- (void)ap_BannerAdShowFail:(AdProfBannerAd *)bannerAd withError:(NSError *)error;

/**
 * 广告点击
 * @param bannerAd  广告数据
 */
- (void)ap_BannerAdDidClicked:(AdProfBannerAd *)bannerAd;

/**
 * 广告关闭
 * @param bannerAd  广告数据
 */
- (void)ap_BannerAdDidClosed:(AdProfBannerAd *)bannerAd;

/**
 * sdk广告跳转落地页关闭回调
 * @param bannerAd  广告对象
 */
- (void)ap_BannerAdWebPageClose:(AdProfBannerAd *)bannerAd;

@end

@interface AdProfBannerAd : AdProfBaseAd

/// 广告请求参数
@property (nonatomic, strong, readonly) AdProfBannerSlot *adSlot;

@property (nonatomic, weak) id <AdProfBannerAdDelegate> delegate;

/**
 * @brief 初始化view
 */
- (instancetype)initWithSlot:(AdProfBannerSlot *)slot;

/**
 *  加载广告
 */
- (void)loadAd;

/**
 *   获取广告View
 */
- (AdProfBannerView *)getBannerViewError:(NSError **)error;

/**
 * 销毁广告
 */
- (void)destoryAd;

/**
 * 获取广告出价
 * 广告加载成功之后，才会有值
 *  单位：分
 */
- (NSInteger)getBidPrice;

/**
 * 聚合竞价结果回传
 */
- (void)sendBidResultNotificationWithInfo:(NSDictionary *)infoDic andResut:(BOOL)isSucc;

@end

NS_ASSUME_NONNULL_END
