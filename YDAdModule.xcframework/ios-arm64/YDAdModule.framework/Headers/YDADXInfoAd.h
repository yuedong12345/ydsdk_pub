//
//  YDADXInfoAd.h
//  YDAdModule
//
//  Created by dfy on 2024/8/6.
//

#ifndef YDADXInfoAd_h
#define YDADXInfoAd_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDAdSlot.h"
#import "YDADXAd.h"
#import "YDADXMaterialMeta.h"
#import "YDADXAdTypeBase.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, YDADXInfoAdCloseType) {
    YDADXInfoAdCloseType_Unknow = 0,             // unknow
    YDADXInfoAdCloseType_ClickClose = 1,          // click skip
    YDADXInfoAdCloseType_ClickAd = 2             // click Ad
};

@class YDADXInfoAd;

@protocol YDADXInfoAdDelegate <NSObject>

- (void)YDInfoAdLoadSuccess:(YDADXInfoAd *)nativeAd;

- (void)YDInfoAdLoadFail:(YDADXInfoAd *)nativeAd error:(NSError *)error;

//- (void)YDInfoAdRenderSuccess:(YDADXInfoAd *)nativeAd;
//
//- (void)YDInfoAdRenderFail:(YDADXInfoAd *)nativeAd error:(NSError *)error;

- (void)YDInfoAdDidShow:(YDADXInfoAd *)nativeAd;

- (void)YDInfoAdDidClick:(YDADXInfoAd *)nativeAd;

//- (void)YDInfoAdDidClose:(YDADXInfoAd *)nativeAd closeType:(YDADXInfoAdCloseType)closeType;

- (void)YDInfoDidShowOtherController:(YDADXInfoAd *)nativeAd;

- (void)YDInfoDidCloseOtherController:(YDADXInfoAd *)nativeAd interactionType:(YDADXInteractionType)interactionType;

@end


@interface YDADXInfoAd : YDADXAdTypeBase

@property (nonatomic, weak, nullable) id<YDADXInfoAdDelegate> delegate;

//@property (nonatomic, strong) YDADXAd *ydAd;

//@property (nonatomic, strong) YDAdSlot *slot;

@property (nonatomic, assign) CGFloat fetchDelay;

@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithSlot:(YDAdSlot *)slot adSize:(CGSize)adSize;

- (instancetype)initWithSlotID:(NSString *)slotID adSize:(CGSize)adSize;

- (void)loadAdData;

- (NSInteger)eCPM;

//- (void)registerContainer:(__kindof UIView *)containerView withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews containerClickable:(BOOL)isClickable;

- (void)onMoveToWindow;

- (void)onAdShake;

- (void)onDislikeClick;

@end

NS_ASSUME_NONNULL_END
#endif /* YDADXInfoAd_h */
