//
//  YDADXInterstitialAd.h
//  YDAdModule
//
//  Created by Claude on 2024/12/18.
//

#ifndef YDADXInterstitialAd_h
#define YDADXInterstitialAd_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YDCommon.h"
#import "YDAdSlot.h"
#import "YDADXAdTypeBase.h"
#import "YDADXMaterialMeta.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXInterstitialAd;
@class YDADXInterstitialAdView;

/**
 插屏广告关闭类型
 */
typedef NS_ENUM(NSInteger, YDADXInterstitialCloseType) {
    YDADXInterstitialCloseTypeClick = 0,    // 点击关闭按钮
    YDADXInterstitialCloseTypeClickAd = 1,  // 点击广告跳转
    YDADXInterstitialCloseTypeTimeout = 2   // 超时自动关闭
};

@protocol YDADXInterstitialAdDelegate <NSObject>

@optional
/**
 广告加载成功回调
 @param interstitialAd YDADXInterstitialAd 实例
 */
- (void)YDInterstitialAdLoadSuccess:(YDADXInterstitialAd *)interstitialAd;

/**
 广告加载失败回调
 @param interstitialAd YDADXInterstitialAd 实例
 @param error 错误信息
 */
- (void)YDInterstitialAdLoadFail:(YDADXInterstitialAd *)interstitialAd error:(NSError *)error;

/**
 广告渲染成功回调
 @param interstitialAd YDADXInterstitialAd 实例
 */
- (void)YDInterstitialAdRenderSuccess:(YDADXInterstitialAd *)interstitialAd;

/**
 广告渲染失败回调
 @param interstitialAd YDADXInterstitialAd 实例
 @param error 错误信息
 */
- (void)YDInterstitialAdRenderFail:(YDADXInterstitialAd *)interstitialAd error:(NSError *)error;

/**
 广告曝光回调
 @param interstitialAd YDADXInterstitialAd 实例
 */
- (void)YDInterstitialAdDidShow:(YDADXInterstitialAd *)interstitialAd;

/**
 广告点击回调
 @param interstitialAd YDADXInterstitialAd 实例
 */
- (void)YDInterstitialAdDidClick:(YDADXInterstitialAd *)interstitialAd;

/**
 广告关闭回调
 @param interstitialAd YDADXInterstitialAd 实例
 @param closeType 关闭类型
 */
- (void)YDInterstitialAdDidClose:(YDADXInterstitialAd *)interstitialAd closeType:(YDADXInterstitialCloseType)closeType;

/**
 详情页关闭回调
 @param interstitialAd YDADXInterstitialAd 实例
 @param interactionType 交互类型
 */
- (void)interstitialDidCloseOtherController:(YDADXInterstitialAd *)interstitialAd interactionType:(YDADXInteractionType)interactionType;

@end

@interface YDADXInterstitialAd : YDADXAdTypeBase

/**
 代理对象
 */
@property (nonatomic, weak, nullable) id<YDADXInterstitialAdDelegate> delegate;

/**
 插屏视图（只读，广告加载成功后自动创建）
 */
@property (nonatomic, strong, readonly, nullable) YDADXInterstitialAdView *interstitialView;

/**
 广告请求延迟时间
 */
@property (nonatomic, assign) CGFloat fetchDelay;

/**
 关闭按钮延迟显示时间（秒），默认3秒
 */
@property (nonatomic, assign) NSTimeInterval closeButtonDelay;

/**
 用于展示广告详情页的根视图控制器
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/**
 初始化方法
 @param slot 广告位信息
 @return YDADXInterstitialAd 实例
 */
- (instancetype)initWithSlot:(YDAdSlot *)slot;

/**
 初始化方法
 @param slotID 广告位ID
 @return YDADXInterstitialAd 实例
 */
- (instancetype)initWithSlotID:(NSString *)slotID;

/**
 加载广告数据
 */
- (void)loadAdData;

/**
 在指定视图控制器中显示插屏广告
 @param viewController 用于展示插屏广告的视图控制器
 */
- (void)showInterstitialInViewController:(UIViewController *)viewController;

/**
 获取广告eCPM价格
 @return eCPM价格（单位：分）
 */
- (NSInteger)eCPM;

@end

NS_ASSUME_NONNULL_END

#endif /* YDADXInterstitialAd_h */
