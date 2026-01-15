//
//  YDDebugAdRequest.h
//  YDAdModule
//
//  Created by dfy on 2024/4/9.
//

#ifndef YDDebugAdRequest_h
#define YDDebugAdRequest_h

#import "YDCommon.h"
#import "YDAdPosConfig.h"
#import "YDAdRequestCommon.h"
#import "YDAdNativeBase.h"

@interface YDDebugAdRequest : YDAdNativeBase

- (instancetype)init:(YDAdPosConfig *)adPosConfig;

@end
#endif /* YDDebugAdRequest_h */
