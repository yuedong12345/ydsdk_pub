//
//  YDTemplateCard13Video.h
//  YDAdModule
//
//  Created by dfy on 2024/4/15.
//

#ifndef YDTemplateCard13Video_h
#define YDTemplateCard13Video_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDTemplateCard13Video : UIView <YDCardView>

- (instancetype)init:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize;

@end
#endif /* YDTemplateCard13Video_h */
