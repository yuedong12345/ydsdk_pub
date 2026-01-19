//
//  YDViewTemplateKSBase.h
//  YDAdModule
//
//  Created by dfy on 2024/4/13.
//

#ifndef YDViewTemplateKSBase_h
#define YDViewTemplateKSBase_h

#if YDADMODULE_KS_ENABLED

#import "YDViewTemplateCommon.h"
#import <KSAdSDK/KSAdSDK.h>

@interface YDViewTemplateKSBase : UIView

@property (nonatomic, weak) NSDictionary *extParam;

- (instancetype)init:(NSInteger)templateId data:(KSNativeAd *)adNative size:(CGSize)containerSize;

- (void)renderView:(UIViewController *)rootViewController;

- (UIButton *)getDislikeButton;

- (void)setDelegate:(id<KSNativeAdDelegate>)delegate;
@end

#endif // YDADMODULE_KS_ENABLED

#endif /* YDViewTemplateKSBase_h */
