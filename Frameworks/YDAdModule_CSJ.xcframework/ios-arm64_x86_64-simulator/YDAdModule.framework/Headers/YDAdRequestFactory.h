//
//  YDAdRequestFactory.h
//  YDAdModule
//
//  Created by dfy on 2024/3/25.
//

#ifndef YDAdRequestFactory_h
#define YDAdRequestFactory_h

#import "YDAdNativeBase.h"

@interface YDAdRequestFactory : NSObject

+(YDAdNativeBase *)createAdNative:(YDAdPosConfig *)adConfig;

@end
#endif /* YDAdRequestFactory_h */
