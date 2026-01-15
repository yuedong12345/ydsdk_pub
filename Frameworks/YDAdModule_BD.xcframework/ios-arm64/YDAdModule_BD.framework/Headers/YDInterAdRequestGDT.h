//
//  YDInterAdRequestGDT.h
//  YDAdModule
//
//  Created by dfy on 2024/5/27.
//

#ifndef YDInterAdRequestGDT_h
#define YDInterAdRequestGDT_h

#import "YDCommon.h"
#import "YDAdPosConfig.h"
#import "YDAdRequestCommon.h"
#import "YDAdNativeBase.h"

@interface YDInterAdRequestGDT : YDAdNativeBase

- (instancetype)init:(YDAdPosConfig *)adPosConfig adType:(NSString *)ad_type;

@end
#endif /* YDInterAdRequestGDT_h */
