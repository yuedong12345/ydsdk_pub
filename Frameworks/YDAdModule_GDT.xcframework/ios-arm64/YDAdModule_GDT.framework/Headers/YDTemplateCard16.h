//
//  YDTemplateCard16.h
//  YDAdModule
//
//  Created by dfy on 2024/4/21.
//

#ifndef YDTemplateCard16_h
#define YDTemplateCard16_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDTemplateCard16 : UIView <YDCardView>

- (instancetype)init:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize;
@end

#endif /* YDTemplateCard16_h */
