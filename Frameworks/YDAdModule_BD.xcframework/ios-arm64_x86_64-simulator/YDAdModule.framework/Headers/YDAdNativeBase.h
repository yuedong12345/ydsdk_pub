//
//  YDAdNativeBase.h
//  YDAdModule
//
//  Created by dfy on 2024/3/20.
//

#ifndef YDAdNativeBase_h
#define YDAdNativeBase_h

#import "YDAdPosConfig.h"
#import "YDCommon.h"
#import "YDAdRequestCommon.h"

@interface YDAdNativeBase : NSObject <YDAdNative>

@property (nonatomic, strong) YDAdPosConfig *adPosConfig;

@property (nonatomic, weak) id<YDSplashAdRequestDelegate> requestDelegate;

@property(nonatomic) NSInteger biddingEcpm;

@property(nonatomic) NSInteger realEcpm;

@property (nonatomic, strong) dispatch_source_t timeOutTimer;

- (instancetype)init:(YDAdPosConfig *)adPosConfig;

@end
#endif /* YDAdNativeBase_h */
