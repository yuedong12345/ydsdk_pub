//
//  YDTemplateCard16Video.h
//  YDAdModule
//
//  Created by dfy on 2024/4/28.
//

#ifndef YDTemplateCard16Video_h
#define YDTemplateCard16Video_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDTemplateCard16Video : UIView <YDCardView>

- (instancetype)init:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize;

@end

#endif /* YDTemplateCard16Video_h */
