//
//  YDADXRewardVideoViewController.h
//  YDAdModule
//
//  Created by Claude on 2024/12/18.
//

#ifndef YDADXRewardVideoViewController_h
#define YDADXRewardVideoViewController_h

#import <UIKit/UIKit.h>
#import "YDADXAd.h"
#import "YDAdSlot.h"
#import "YDADXRewardVideoAd.h"
#import "YDCommon.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXRewardVideoViewController;

@protocol YDADXRewardVideoViewControllerDelegate <NSObject>

@optional
/**
 激励视频 ViewController 即将显示
 @param controller YDADXRewardVideoViewController 实例
 */
- (void)rewardVideoViewControllerWillAppear:(YDADXRewardVideoViewController *)controller;

/**
 激励视频 ViewController 已显示（曝光）
 @param controller YDADXRewardVideoViewController 实例
 */
- (void)rewardVideoViewControllerDidShow:(YDADXRewardVideoViewController *)controller;

/**
 激励视频点击
 @param controller YDADXRewardVideoViewController 实例
 */
- (void)rewardVideoViewControllerDidClick:(YDADXRewardVideoViewController *)controller;

/**
 激励视频达到激励条件
 @param controller YDADXRewardVideoViewController 实例
 */
- (void)rewardVideoViewControllerDidRewardEffective:(YDADXRewardVideoViewController *)controller;

/**
 激励视频播放完成
 @param controller YDADXRewardVideoViewController 实例
 */
- (void)rewardVideoViewControllerDidPlayFinish:(YDADXRewardVideoViewController *)controller;

/**
 激励视频关闭
 @param controller YDADXRewardVideoViewController 实例
 @param closeType 关闭类型
 */
- (void)rewardVideoViewControllerDidClose:(YDADXRewardVideoViewController *)controller closeType:(YDADXRewardVideoCloseType)closeType;

@end

@interface YDADXRewardVideoViewController : UIViewController

/**
 代理对象
 */
@property (nonatomic, weak, nullable) id<YDADXRewardVideoViewControllerDelegate> delegate;

/**
 广告数据
 */
@property (nonatomic, strong, nullable) YDADXAd *adData;

/**
 广告位信息（用于上报）
 */
@property (nonatomic, strong, nullable) YDAdSlot *slot;

/**
 是否静音播放
 */
@property (nonatomic, assign) BOOL videoMuted;

/**
 关闭按钮延迟显示时间（秒）
 */
@property (nonatomic, assign) NSTimeInterval closeButtonDelay;

/**
 激励比例（0.0-1.0）
 */
@property (nonatomic, assign) CGFloat rewardVideoRatio;

/**
 旋转角度灵敏度配置（度）
 */
@property (nonatomic, assign) double rotateAngle;

/**
 加速度灵敏度配置（m/s²）
 */
@property (nonatomic, assign) double accValue;

@end

NS_ASSUME_NONNULL_END

#endif /* YDADXRewardVideoViewController_h */
