//
//  YDTemplateCard13.h
//  YDAdModule
//
//  Created by dfy on 2024/4/14.
//

#ifndef YDTemplateCard13_h
#define YDTemplateCard13_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDTemplateCard13 : UIView <YDCardView>

- (instancetype)init:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize;
@end

#endif /* YDTemplateCard13_h */
