//
//  YDViewTemplate13GDT.h
//  YDAdModule
//
//  Created by dfy on 2024/3/31.
//

#ifndef YDViewTemplate13GDT_h
#define YDViewTemplate13GDT_h

#import <GDTMobSDK/GDTUnifiedNativeAdView.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDViewTemplate13GDT : GDTUnifiedNativeAdView <YDTemplateView>

- (instancetype)init:(GDTUnifiedNativeAdDataObject *)dataObj;

//- (void)setHolderViewController:(UIViewController *)viewController;
//
//- (void)render;

@end
#endif /* YDViewTemplate13GDT_h */
