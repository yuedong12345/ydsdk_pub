//
//  YDADXRewardVideoAd.h
//  YDAdModule
//
//  Created by Claude on 2024/12/18.
//

#ifndef YDADXRewardVideoAd_h
#define YDADXRewardVideoAd_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YDCommon.h"
#import "YDAdSlot.h"
#import "YDADXAdTypeBase.h"
#import "YDADXMaterialMeta.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXRewardVideoAd;

/**
 激励视频关闭类型
 */
typedef NS_ENUM(NSInteger, YDADXRewardVideoCloseType) {
    YDADXRewardVideoCloseTypeClickClose = 0,    // 点击关闭按钮
    YDADXRewardVideoCloseTypePlayComplete = 1,  // 播放完成自动关闭
    YDADXRewardVideoCloseTypeClickAd = 2        // 点击广告跳转
};

@protocol YDADXRewardVideoAdDelegate <NSObject>

@optional
/**
 广告加载成功回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 */
- (void)YDRewardVideoAdLoadSuccess:(YDADXRewardVideoAd *)rewardVideoAd;

/**
 广告加载失败回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 @param error 错误信息
 */
- (void)YDRewardVideoAdLoadFail:(YDADXRewardVideoAd *)rewardVideoAd error:(NSError *)error;

/**
 激励视频即将展示回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 */
- (void)YDRewardVideoAdWillVisible:(YDADXRewardVideoAd *)rewardVideoAd;

/**
 激励视频曝光回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 */
- (void)YDRewardVideoAdDidShow:(YDADXRewardVideoAd *)rewardVideoAd;

/**
 激励视频点击回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 */
- (void)YDRewardVideoAdDidClick:(YDADXRewardVideoAd *)rewardVideoAd;

/**
 激励视频达到激励条件回调（播放到设定比例，默认75%）
 @param rewardVideoAd YDADXRewardVideoAd 实例
 */
- (void)YDRewardVideoAdDidRewardEffective:(YDADXRewardVideoAd *)rewardVideoAd;

/**
 激励视频播放完成回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 */
- (void)YDRewardVideoAdDidPlayFinish:(YDADXRewardVideoAd *)rewardVideoAd;

/**
 激励视频关闭回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 @param closeType 关闭类型
 */
- (void)YDRewardVideoAdDidClose:(YDADXRewardVideoAd *)rewardVideoAd closeType:(YDADXRewardVideoCloseType)closeType;

/**
 详情页关闭回调
 @param rewardVideoAd YDADXRewardVideoAd 实例
 @param interactionType 交互类型
 */
- (void)rewardVideoDidCloseOtherController:(YDADXRewardVideoAd *)rewardVideoAd interactionType:(YDADXInteractionType)interactionType;

@end

@interface YDADXRewardVideoAd : YDADXAdTypeBase

/**
 代理对象
 */
@property (nonatomic, weak, nullable) id<YDADXRewardVideoAdDelegate> delegate;

/**
 是否静音播放（默认NO）
 */
@property (nonatomic, assign) BOOL videoMuted;

/**
 广告请求延迟时间
 */
@property (nonatomic, assign) CGFloat fetchDelay;

/**
 关闭按钮延迟显示时间（秒），默认5秒
 */
@property (nonatomic, assign) NSTimeInterval closeButtonDelay;

/**
 激励比例（0.0-1.0），达到此比例时触发激励回调，默认0.75（75%）
 */
@property (nonatomic, assign) CGFloat rewardVideoRatio;

/**
 用于展示广告详情页的根视图控制器
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/**
 初始化方法
 @param slot 广告位信息
 @return YDADXRewardVideoAd 实例
 */
- (instancetype)initWithSlot:(YDAdSlot *)slot;

/**
 初始化方法
 @param slotID 广告位ID
 @return YDADXRewardVideoAd 实例
 */
- (instancetype)initWithSlotID:(NSString *)slotID;

/**
 加载广告数据
 */
- (void)loadAdData;

/**
 展示激励视频
 @param viewController 用于 present 激励视频 ViewController
 @return 是否成功展示（YES-成功，NO-失败，可能广告未加载或已过期）
 */
- (BOOL)showRewardVideoFromViewController:(UIViewController *)viewController;

/**
 获取视频时长
 @return 视频时长（秒）
 */
- (CGFloat)videoDuration;

/**
 获取广告eCPM价格
 @return eCPM价格（单位：分）
 */
- (NSInteger)eCPM;

@end

NS_ASSUME_NONNULL_END

#endif /* YDADXRewardVideoAd_h */
