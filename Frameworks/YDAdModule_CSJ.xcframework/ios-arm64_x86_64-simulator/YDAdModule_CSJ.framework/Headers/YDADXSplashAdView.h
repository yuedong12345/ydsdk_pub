//
//  YDADXSplashAdView.h
//  YDAdModule
//
//  Created by dfy on 2024/6/12.
//

#ifndef YDADXSplashAdView_h
#define YDADXSplashAdView_h

#import "YDCommon.h"
#import "YDAdSlot.h"
#import "YDADXVideoView.h"
#import "YDADXAd.h"

NS_ASSUME_NONNULL_BEGIN

@class YDADXSplashAdView;
@class YDADXAd;

@protocol YDADXSplashAdViewDelegate <NSObject>

- (void)YDSplashViewSkipButtonClick:(YDADXSplashAdView *)splashView;

- (void)YDSplashViewDidRenderSuccess:(YDADXSplashAdView *)splashView;

- (void)YDSplashViewDidRenderFail:(YDADXSplashAdView *)splashView error:(NSError *)error;

- (void)YDSplashViewDidClick:(YDADXSplashAdView *)splashView internal:(CGPoint)internalPoint up:(CGPoint)upPoint down:(CGPoint)downPoint;

@end

@interface YDADXSplashAdView : UIView

@property (nonatomic, weak, nullable) id<YDADXSplashAdViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame animationStyle:(NSInteger)style videoData:(YDADXVideo *)video rotate:(double)rotateAngle acc:(double)configAcc;

- (BOOL)render:(YDADXAd *)ydAd;

- (void)show;

- (void)dismiss;

- (void)updateLeftSecond:(NSInteger)seconds percent:(CGFloat)percent;

- (void)setVideoDelegate:(id<YDADXVideoViewStateDelegate>)videoDelegate;

- (NSArray<__kindof UIView *> *_Nullable)getClickableViews;

@property (nonatomic, strong) YDAdSlot *slot;

@end

NS_ASSUME_NONNULL_END

#endif /* YDADXSplashAdView_h */
