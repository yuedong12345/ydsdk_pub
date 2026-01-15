//
//  YDViewTemplateCommon.h
//  YDAdModule
//
//  Created by dfy on 2024/3/31.
//

#ifndef YDViewTemplateCommon_h
#define YDViewTemplateCommon_h

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

static NSInteger const YD_AD_VIEW_STYLE_SINGLE_PIC = 1;

static NSInteger const YD_AD_VIEW_STYLE_MULTIPLE_PIC = 2;

static NSInteger const YD_AD_VIEW_STYLE_VIDEO = 3;

@protocol YDNativeAdViewHolder <NSObject>

- (void)addAdView:(UIView *)adView;

- (void)registerContainer:(__kindof UIView *)containerView
       withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews;

- (void)unregisterView;

- (UIView *)getRenderView;
@end

@protocol YDNativeViewDataBinder <NSObject>

- (NSString *)getNativeAdProvider;

- (NSInteger)imageWidth;

- (NSInteger)imageHeight;

- (NSString *)imageURL;

- (NSString *)desc;

- (NSString *)title;

- (NSString *)callToActionText;

- (NSString *)btnText;

- (UIView *)getVideoView;

- (NSString *)adLogoImageName;
@end

@protocol YDTemplateView <NSObject>

- (void)setHolderViewController:(UIViewController *)viewController;

- (void)render;

- (UIView *)getRenderView;
@end

@protocol YDCardView <NSObject>

- (NSArray<UIView *> *)card_clickableViews;

- (UIView *)card_callToActionView;

- (NSArray<UIImageView *> *)card_imageViews;

- (void)updateVideoView;

- (UIButton *)getDislikeView;

- (CGRect)getPrimeImageFrame;

- (CGFloat)getRealHeight;

@end

NS_ASSUME_NONNULL_END

#endif /* YDViewTemplateCommon_h */
