//
//  YDViewTemplateBDBase.h
//  YDAdModule
//
//  Created by dfy on 2024/4/15.
//

#ifndef YDViewTemplateBDBase_h
#define YDViewTemplateBDBase_h

#if YDADMODULE_BD_ENABLED

#import <BaiduMobAdSDK/BaiduMobAdNative.h>
#import <BaiduMobAdSDK/BaiduMobAdSmartFeedView.h>
#import "YDViewTemplateCommon.h"
#import "YDCommon.h"

@interface YDViewTemplateBDBase : BaiduMobAdSmartFeedView

@property (nonatomic, weak) NSDictionary *extParam;

- (instancetype)init:(NSInteger)templateId data:(BaiduMobAdNativeAdObject *)dataObj size:(CGSize)containerSize;

- (void)renderView:(UIViewController *)rootViewController;

- (UIButton *)getDislikeButton;

@end

#endif // YDADMODULE_BD_ENABLED

#endif /* YDViewTemplateBDBase_h */
