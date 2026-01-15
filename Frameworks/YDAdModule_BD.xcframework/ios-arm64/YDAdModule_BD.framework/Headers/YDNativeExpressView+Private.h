//
//  YDNativeExpressView+Private.m
//  YDAdModule
//
//  Created by YueDong on 2023/12/21.
//

#import <Foundation/Foundation.h>
#import "YDNativeExpressView.h"
#import "YDViewTemplateCommon.h"

NS_ASSUME_NONNULL_BEGIN

@class GDTNativeExpressAdView;
@class YDNativeExpressAd;
@class BUNativeAd;
@class KSFeedAd;
@class BaiduMobAdExpressNativeView;

@protocol YDExpressViewBinder<NSObject>

- (UIView *)getExpressView;

- (void)setViewController:(UIViewController *)rootController;

- (void)renderExpressView;

- (void)callbackRenderResult;
@end


@interface YDNativeExpressView (Private)

@property (nonatomic, strong) id<YDExpressViewBinder> delegate;

- (instancetype)init:(id<YDExpressViewBinder>)viewBinder adSize:(CGSize)size;

- (void)updateExpressAd:(YDNativeExpressAd *)expressAd;

- (YDNativeExpressAd *)getNativeExpressAd;

- (void)handleDislikeLogic;
@end

NS_ASSUME_NONNULL_END
