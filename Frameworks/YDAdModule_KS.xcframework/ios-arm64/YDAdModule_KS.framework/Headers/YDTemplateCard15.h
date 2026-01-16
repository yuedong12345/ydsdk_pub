//
//  YDTemplateCard15.h
//  YDAdModule
//
//  Created by dfy on 2024/4/19.
//

#ifndef YDTemplateCard15_h
#define YDTemplateCard15_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDTemplateCard15 : UIView <YDCardView>

- (instancetype)init:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize extPara:(NSDictionary *)extParams;

@end
#endif /* YDTemplateCard15_h */
