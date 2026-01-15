//
//  YDADXAdTypeBase.h
//  YDAdModule
//
//  Created by dfy on 2024/11/18.
//

#ifndef YDADXAdTypeBase_h
#define YDADXAdTypeBase_h

#import "YDCommon.h"
#import "YDADXAd.h"
#import "YDAdSlot.h"
#import "YDADXVideoView.h"

@interface YDADXAdTypeBase : NSObject <YDADXVideoViewStateDelegate>

@property (nonatomic, strong) YDAdSlot *slot;

@property (nonatomic, strong) YDADXAd *ydAd;

@property (nonatomic, weak) UIView *adContainerView;

- (void)registerContainer:(__kindof UIView *)containerView withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews containerClickable:(BOOL)isClickable;

- (void)didClick;

@end
#endif /* YDADXAdTypeBase_h */
