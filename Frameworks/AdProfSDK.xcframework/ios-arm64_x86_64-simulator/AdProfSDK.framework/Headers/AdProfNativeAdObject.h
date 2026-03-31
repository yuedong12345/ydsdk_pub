//
//  AdProfNativeAdObject.h
//  AdProfSDK
//
//  Created by coderqi on 2025/12/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdProfSDK/AdProfNativeAdData.h>
#import <AdProfSDK/AdProfNativeExpressView.h>
#import <AdProfSDK/AdProfVideoPlayerView.h>

@class AdProfAdMetaData;
@class AdProfNativeAdObject;
NS_ASSUME_NONNULL_BEGIN

@protocol AdProfNativeAdObjectDelegate <NSObject>

/**
 * 广告展示
 * @param adObject  广告数据
 */
- (void)ap_NativeAdShow:(AdProfNativeAdObject *)adObject;

/**
 * 广告点击
 * @param adObject  广告数据
 */
- (void)ap_NativeAdClicked:(AdProfNativeAdObject *)adObject;
/**
 * 广告关闭
 * @param adObject  广告数据
 */
- (void)ap_NativeAdClosed:(AdProfNativeAdObject *)adObject;

/**
 * 广告关闭
 * @param adObject  广告数据
 */
- (void)ap_NativeAdWebPageClosed:(AdProfNativeAdObject *)adObject;

@end

@interface AdProfNativeAdObject : NSObject

/// 是否是模板广告
@property (nonatomic, assign) BOOL isExpress;

/// 获取广告模板视图
///  非模板广告时，返回空
- (AdProfNativeExpressView *)getExpressView;

/// 获取广告的视频播放器
- (AdProfVideoPlayerView *)getMediaView;

@property (nonatomic, weak) id <AdProfNativeAdObjectDelegate> delegate;

/// 广告的原始数据
@property (nonatomic, strong, readonly) AdProfNativeAdData *adData;

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
