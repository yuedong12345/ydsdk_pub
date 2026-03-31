//
//  AdProfRewardVideoAd.h
//  AdProfSDK
//
//  Created by coderqi on 2025/11/14.
//

#import <Foundation/Foundation.h>
#import <AdProfSDK/AdProfRewardVideoSlot.h>
#import <AdProfSDK/AdProfBaseAd.h>

NS_ASSUME_NONNULL_BEGIN

@class AdProfRewardVideoAd;
@class AdProfRewardVideoSlot;

@protocol AdProfRewardVideoAdDelegate <NSObject>

@optional
/**
 *  广告加载成功
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdLoadSuccess:(AdProfRewardVideoAd *)rewardAd;

/**
 *  广告加载失败
 * @param rewardAd  广告对象
 * @param error  错误信息
 */
- (void)ap_RewardAdLoadFail:(AdProfRewardVideoAd *)rewardAd withError:(NSError *)error;


/**
 * 广告展示成功
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdShowSuccess:(AdProfRewardVideoAd *)rewardAd;

/**
 * 广告展示失败
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdShowFail:(AdProfRewardVideoAd *)rewardAd withError:(NSError *)error;

/**
 * 广告播放开始
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdPlayStart:(AdProfRewardVideoAd *)rewardAd;

/**
 * 广告播放结束
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdPlayFinished:(AdProfRewardVideoAd *)rewardAd;

/**·
 * 广告点击
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdDidClicked:(AdProfRewardVideoAd *)rewardAd;

/**
 * 广告关闭
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdDidClosed:(AdProfRewardVideoAd *)rewardAd;

/**
 * 广告点击跳过
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdDidSkiped:(AdProfRewardVideoAd *)rewardAd;

/**
 * sdk广告跳转落地页关闭回调
 * @param rewardAd  广告对象
 */
- (void)ap_RewardAdWebPageClose:(AdProfRewardVideoAd *)rewardAd;

/**
 *  广告任务完成
 *  @param rewardAd  广告对象
 */
- (void)ap_RewardAdTaskCompleted:(AdProfRewardVideoAd *)rewardAd;

@end

@interface AdProfRewardVideoAd : AdProfBaseAd

/// 广告请求参数
@property (nonatomic, strong, readonly) AdProfRewardVideoSlot *adSlot;

@property (nonatomic, weak) id <AdProfRewardVideoAdDelegate> delegate;

/**
 * @brief 初始化view
 */
- (instancetype)initWithSlot:(AdProfRewardVideoSlot *)slot;

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
