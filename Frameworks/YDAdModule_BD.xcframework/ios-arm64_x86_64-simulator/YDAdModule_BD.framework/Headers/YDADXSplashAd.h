//
//  YDADXSplashAd.h
//  YDAdModule
//
//  Created by dfy on 2024/6/5.
//

#ifndef YDADXSplashAd_h
#define YDADXSplashAd_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDAdSlot.h"
#import "YDADXMaterialMeta.h"
#import "YDADXAdTypeBase.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, YDADXSplashAdCloseType) {
    YDADXSplashAdCloseType_Unknow = 0,             // unknow
    YDADXSplashAdCloseType_ClickSkip = 1,          // click skip
    YDADXSplashAdCloseType_CountdownToZero = 2,    // countdown
    YDADXSplashAdCloseType_ClickAd = 3             // click Ad
};

@class YDADXSplashAd;

@protocol YDADXSplashAdDelegate <NSObject>

- (void)YDSplashAdLoadSuccess:(YDADXSplashAd *)splashAd;

- (void)YDSplashAdLoadFail:(YDADXSplashAd *)splashAd error:(NSError *)error;

- (void)YDSplashAdRenderSuccess:(YDADXSplashAd *)splashAd;

- (void)YDSplashAdRenderFail:(YDADXSplashAd *)splashAd error:(NSError *)error;

- (void)YDSplashAdDidShow:(YDADXSplashAd *)splashAd;

- (void)YDSplashAdDidClick:(YDADXSplashAd *)splashAd;

- (void)YDSplashAdDidClose:(YDADXSplashAd *)splashAd closeType:(YDADXSplashAdCloseType)closeType;

/**
 This method is called when another controller has been closed.
 @param interactionType : open appstore in app or open the webpage or view video ad details page.
 */
- (void)splashDidCloseOtherController:(YDADXSplashAd *)splashAd interactionType:(YDADXInteractionType)interactionType;

@end

@interface YDADXSplashAd : YDADXAdTypeBase

@property (nonatomic, weak, nullable) id<YDADXSplashAdDelegate> delegate;

@property (nonatomic, assign) BOOL hideSkipButton;

@property (nonatomic, assign) CGFloat fetchDelay;

- (instancetype)initWithSlot:(YDAdSlot *)slot adSize:(CGSize)adSize;

- (instancetype)initWithSlotID:(NSString *)slotID adSize:(CGSize)adSize;

- (void)loadAdData;

- (void)showSplashIn:(UIWindow *)window bottomView:(UIView *_Nullable)bottomView;

- (NSInteger)eCPM;
@end

NS_ASSUME_NONNULL_END

#endif /* YDADXSplashAd_h */
