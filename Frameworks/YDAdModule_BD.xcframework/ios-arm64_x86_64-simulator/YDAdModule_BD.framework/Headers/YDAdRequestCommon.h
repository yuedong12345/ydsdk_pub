//
//  YDAdRequestCommon.h
//  YDAdModule
//
//  Created by dfy on 2024/3/18.
//

#ifndef YDAdRequestCommon_h
#define YDAdRequestCommon_h

#import "YDCommon.h"
#import "YDSplashAd.h"
#import "YDBannerView.h"
#import "YDNativeExpressAd.h"
#import "YDRewardVideoAd.h"
#import "YDInterstitialAd.h"

@class YDAdNativeBase;
@class YDSplashAdTeamRequest;
@class YDNativeExpressView;
@class YDNativeExpressAdDelegete;
@class YDInterstitialAdDelegate;
@class YDAdPosConfig;
@class YDAdTeamConfig;

@protocol YDSplashAdRequestDelegate <NSObject>

@required
- (void)adDidLoad:(YDAdNativeBase *)nativeAd;

- (void)adOnError:(YDAdNativeBase *)nativeAd withError:(NSError *)error;

@optional
- (void)adTimeout:(YDAdPosConfig *)adConfig team:(YDAdTeamConfig *)teamConfig;
@end


@protocol YDTeamRequestDelegate <NSObject>
@required
- (void)adTeamDidLoad:(YDSplashAdTeamRequest *)teamRequest;

- (void)adTeamOnError:(YDSplashAdTeamRequest *)teamRequest err:(NSError *)error;

@end

@protocol YDSplashAdImpl <YDAdNative>

@required
- (void)showAdInWindow:(UIWindow *)window withBottomView:(UIView *)bottomView skipView:(UIView *)skipView;

- (void)setHolderDelegate:(id<YDSplashAdDelegate>)ext_delegate;
@end



@protocol YDExpressAdNative <YDAdNative>

@required
- (NSMutableArray<YDNativeExpressView *> *)getYDViews;

- (void)setHolderDelegate:(id<YDNativeExpressAdDelegete>)ext_delegate;

- (BOOL)isSelfRender;
@end



@protocol YDBannerAdNative <YDAdNative>

- (void)setHolderViewController:(UIViewController *)viewController;

- (UIView *)getBannerAdView;

- (void)setBannerDelegate:(id<YDBannerViewDelegate>)ext_delegate;
@end


@protocol YDRewardAdNative <YDAdNative>

- (BOOL)showRewardAd:(UIViewController *)rootViewController;

- (void)setRewardDelegate:(id<YDRewardedVideoAdDelegate>)ext_delegate;
@end

@protocol YDInterAdNative <YDAdNative>

- (void)setInterDelegate:(id<YDInterstitialAdDelegate>)ext_delegate;

- (void)showInterAd:(UIViewController *)rootViewController;

@end
#endif /* YDAdRequestCommon_h */
