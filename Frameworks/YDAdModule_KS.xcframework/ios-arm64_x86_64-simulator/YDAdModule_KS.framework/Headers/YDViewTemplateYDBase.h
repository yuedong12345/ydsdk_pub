//
//  YDViewTemplateYDBase.h
//  YDAdModule
//
//  Created by dfy on 2024/8/6.
//

#ifndef YDViewTemplateYDBase_h
#define YDViewTemplateYDBase_h

#import "YDViewTemplateCommon.h"
#import "YDADXInfoAd.h"

@interface YDViewTemplateYDBase : UIView

@property (nonatomic, weak) NSDictionary *extParam;

- (instancetype)init:(NSInteger)templateId data:(YDADXInfoAd *)adNative size:(CGSize)containerSize;

- (void)renderView:(UIViewController *)rootViewController;

- (UIButton *)getDislikeButton;

//- (void)setDelegate:(id<KSNativeAdDelegate>)delegate;
@end

#endif /* YDViewTemplateYDBase_h */
