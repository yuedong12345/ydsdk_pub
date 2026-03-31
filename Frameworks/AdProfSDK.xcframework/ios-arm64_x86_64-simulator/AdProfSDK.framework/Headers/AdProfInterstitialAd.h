//
//  AdProfInterstitialAd.h
//  AdProfSDK
//
//  Created by coderqi on 2025/11/14.
//

#import <Foundation/Foundation.h>
#import <AdProfSDK/AdProfInterstitialSlot.h>
#import <AdProfSDK/AdProfBaseAd.h>

NS_ASSUME_NONNULL_BEGIN

@class AdProfInterstitialAd;

@protocol AdProfInterstitialAdDelegate <NSObject>

@optional
/**
 *  广告加载成功
 * @param interstititalAd  广告对象
 */
- (void)ap_InterAdLoadSuccess:(AdProfInterstitialAd *)interstititalAd;

/**
 *  广告加载失败
 * @param interstititalAd  广告对象
 * @param error  错误信息
 */
- (void)ap_InterAdLoadFail:(AdProfInterstitialAd *)interstititalAd withError:(NSError *)error;


/**
 * 广告展示成功
 * @param interstititalAd  广告对象
 */
- (void)ap_InterAdShowSuccess:(AdProfInterstitialAd *)interstititalAd;

/**
 * 广告展示失败
 * @param interstititalAd  广告对象
 */
- (void)ap_InterAdShowFail:(AdProfInterstitialAd *)interstititalAd withError:(NSError *)error;

/**
 * 广告点击
 * @param interstititalAd  广告数据
 */
- (void)ap_InterAdDidClicked:(AdProfInterstitialAd *)interstititalAd;

/**
 * 广告关闭
 * @param interstititalAd  广告数据
 */
- (void)ap_InterAdDidClosed:(AdProfInterstitialAd *)interstititalAd;

/**
 * sdk广告跳转落地页关闭回调
 * @param interstititalAd  广告对象
 */
- (void)ap_InterAdWebPageClose:(AdProfInterstitialAd *)interstititalAd;

@end

@interface AdProfInterstitialAd : AdProfBaseAd

/// 广告请求参数
@property (nonatomic, strong, readonly) AdProfInterstitialSlot *adSlot;

@property (nonatomic, weak) id <AdProfInterstitialAdDelegate> delegate;

/**
 * @brief 初始化view
 */
- (instancetype)initWithSlot:(AdProfInterstitialSlot *)slot;

/**
 *  加载广告
 */
- (void)loadAd;

/**
 *  展示开屏广告
 *  @param rootViewController 展示开屏广告的UIViewController
 *  曝光时，请确保rootViewController无presentedVC，否则影响广告展示、点击、落地页打开
 */
- (void)showAdFromRootViewController:(UIViewController *)rootViewController;

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
