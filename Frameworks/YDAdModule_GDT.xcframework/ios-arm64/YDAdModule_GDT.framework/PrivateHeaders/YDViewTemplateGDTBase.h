//
//  YDViewTemplateGDTBase.h
//  YDAdModule
//
//  Created by dfy on 2024/4/11.
//

#ifndef YDViewTemplateGDTBase_h
#define YDViewTemplateGDTBase_h

#if YDADMODULE_GDT_ENABLED

#import "YDViewTemplateCommon.h"
#import <GDTMobSDK/GDTUnifiedNativeAdView.h>

@interface YDViewTemplateGDTBase : GDTUnifiedNativeAdView

@property (nonatomic, weak) NSDictionary *extParam;

//- (instancetype)init:(NSInteger)templateId binder:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize;

- (instancetype)init:(NSInteger)templateId data:(GDTUnifiedNativeAdDataObject *)dataObj size:(CGSize)containerSize;

- (void)renderView:(UIViewController *)rootViewController;

- (UIButton *)getDislikeButton;
@end

#endif // YDADMODULE_GDT_ENABLED

#endif /* YDViewTemplateGDTBase_h */
