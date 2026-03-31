//
//  AdProfNativeAd.h
//  AdProfSDK
//
//  Created by coderqi on 2025/11/14.
//

#import <Foundation/Foundation.h>
#import <AdProfSDK/AdProfNativeAdObject.h>
#import <AdProfSDK/AdProfNativeAdSlot.h>
#import <AdProfSDK/AdProfBaseAd.h>

NS_ASSUME_NONNULL_BEGIN

@class AdProfNativeAdSlot;
@class AdProfNativeAd;

@protocol AdProfNativeAdDelegate <NSObject>

- (void)ap_nativeAdLoadSuccess:(AdProfNativeAd *)nativeAd;

- (void)ap_nativeAdLoadFail:(AdProfNativeAd *)nativeAd withError:(NSError *)error;



@end

@interface AdProfNativeAd : AdProfBaseAd
/// 广告请求参数
@property (nonatomic, strong, readonly) AdProfNativeAdSlot *adSlot;

@property (nonatomic, weak) id <AdProfNativeAdDelegate> delegate;

/// 广告对象，在ap_nativeAdLoadSuccess回调后有值
@property (nonatomic, strong, readonly, nullable) NSArray <AdProfNativeAdObject *> *nativeAdObjects;

/**
 * @brief 初始化view
 */
- (instancetype)initWithSlot:(AdProfNativeAdSlot *)slot;

/**
 *  加载广告
 */
- (void)loadAd;

/**
 *  注册自渲染view
 *  @param containerView     广告渲染容器
 *  @param clickableViews   广告可点击的views，不传：默认整个广告可响应点击
 *  @return 返回错误，检查adItem、containerView、clickableViews是否存在问题
 */
- (NSError *)registerWithAdObject:(AdProfNativeAdObject *)adObject
                       containerView:(UIView *)containerView
                      clickableViews:(NSArray<UIView *> *_Nullable)clickableViews
                        closeView:(NSArray<UIView *> *_Nullable)closeableViews;

/**
 *  销毁广告
 */
- (void)destory;

@end

NS_ASSUME_NONNULL_END
