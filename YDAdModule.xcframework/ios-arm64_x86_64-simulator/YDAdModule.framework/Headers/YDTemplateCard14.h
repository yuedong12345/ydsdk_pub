//
//  YDTemplateCard14.h
//  YDAdModule
//
//  Created by dfy on 2024/4/11.
//

#ifndef YDTemplateCard14_h
#define YDTemplateCard14_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDTemplateCard14 : UIView <YDCardView>

- (instancetype)init:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize;
@end
#endif /* YDTemplateCard14_h */
