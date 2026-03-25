//
//  YDViewTemplateCSJBase.h
//  YDAdModule
//
//  Created by dfy on 2024/4/13.
//

#ifndef YDViewTemplateCSJBase_h
#define YDViewTemplateCSJBase_h

#if YDADMODULE_CSJ_ENABLED

#import "YDViewTemplateCommon.h"
#import "YDCommon.h"
#import <BUAdSDK/BUAdSDK.h>

@interface YDViewTemplateCSJBase : UIView

@property (nonatomic, weak) NSDictionary *extParam;

- (instancetype)init:(NSInteger)templateId data:(BUNativeAd *)adNative size:(CGSize)containerSize;

- (void)renderView:(UIViewController *)rootViewController;

- (UIButton *)getDislikeButton;

//- (UIView *)getSelfRenderView;
@end

#endif // YDADMODULE_CSJ_ENABLED

#endif /* YDViewTemplateCSJBase_h */
