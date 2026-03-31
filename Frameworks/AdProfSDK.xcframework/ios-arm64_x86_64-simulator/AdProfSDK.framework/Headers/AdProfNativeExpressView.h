//
//  AdProfNativeExpressView.h
//  AdProfSDK
//
//  Created by coderqi on 2025/12/10.
//

#import <UIKit/UIKit.h>
#import <AdProfSDK/AdProfNativeAdData.h>


NS_ASSUME_NONNULL_BEGIN
@class AdProfNativeExpressView;

@protocol AdProfNativeExpressViewDelegate <NSObject>

/**
 * 广告展示
 * @param adView  广告View
 */
- (void)onFeedAdShow:(AdProfNativeExpressView *)adView;

/**
 * 广告点击
 * @param adView  广告View
 */
- (void)onFeedAdClicked:(AdProfNativeExpressView *)adView clickPoint:(CGPoint)clickPoint accX:(NSInteger)accX accY:(NSInteger)accY accZ:(NSInteger)accZ impType:(NSInteger)impType size:(CGSize)size;
/**
 * 广告关闭
 * @param adView  广告View
 */
- (void)onFeedAdClosed:(AdProfNativeExpressView *)adView;

@end

@interface AdProfNativeExpressView : UIView

@property (nonatomic, weak) id <AdProfNativeExpressViewDelegate> delegate;

/// 根据广告数据源创建广告View
- (instancetype)initWithAdData:(AdProfNativeAdData *)adData;

/**
 * @brief 渲染广告内容
 */
- (NSError *)renderViewsUI;

/**
 * 释放广告
 */
- (void)destory;

@end

NS_ASSUME_NONNULL_END
