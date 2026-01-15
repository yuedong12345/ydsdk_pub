//
//  YDSplashAdRequest.h
//  YDAdModule
//
//  Created by dfy on 2024/3/18.
//

#ifndef YDSplashAdRequest_h
#define YDSplashAdRequest_h

#import "YDAdPosConfig.h"
#import "YDAdRequestCommon.h"

@interface YDSplashAdRequest : NSObject <YDSplashAdRequestDelegate>

- (instancetype)init:(YDAdPosConfig *)adConfig;

- (void)loadAd:(id<YDSplashAdRequestDelegate>)requestDelegate;

- (NSString *)getCodeId;

- (id<YDAdNative>)getRequestImpl;

- (void)setTimer:(dispatch_source_t)timer;

- (dispatch_source_t)getTimer;

@end
#endif /* YDSplashAdRequest_h */
