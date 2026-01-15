//
//  YDSplashAdTeamRequest.h
//  YDAdModule
//
//  Created by dfy on 2024/3/18.
//

#ifndef YDSplashAdTeamRequest_h
#define YDSplashAdTeamRequest_h

#import "YDAdSceneConfig.h"
#import "YDAdRequestCommon.h"

@interface YDSplashAdTeamRequest : NSObject

@property (nonatomic, weak) id<YDTeamRequestDelegate> delegate;

@property (nonatomic, weak) id<YDTeamRequestDelegate> holerDelegate;

- (instancetype)init:(YDAdSceneConfig *)adSceneConfig;

- (NSString *)getRequestId;

- (NSString *)getSceneId;

- (void)requestAd;

@end

#endif /* YDSplashAdTeamRequest_h */
