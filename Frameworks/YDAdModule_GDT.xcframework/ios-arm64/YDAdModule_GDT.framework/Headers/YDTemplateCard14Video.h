//
//  YDTemplateCard14Video.h
//  YDAdModule
//
//  Created by dfy on 2024/4/12.
//

#ifndef YDTemplateCard14Video_h
#define YDTemplateCard14Video_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"
#import "YDViewTemplateCommon.h"

@interface YDTemplateCard14Video : UIView <YDCardView>

- (instancetype)init:(id<YDNativeViewDataBinder>)dataBinder size:(CGSize)containerSize;

@end
#endif /* YDTemplateCard14Video_h */
