//
//  YDAdPolicyManager.h
//  YDAdModule
//
//  Created by YueDong on 2023/12/21.
//

#import <Foundation/Foundation.h>
#import "YDAdSceneConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^YDConfigHandler)(BOOL success, BOOL update, NSError * _Nullable error);

typedef void (^YDSceneConfigHandler)(BOOL success, YDAdSceneConfig *sceneConfig, NSError * _Nullable error);

typedef void (^YDCheckRewardHandler)(BOOL success, NSError * _Nullable error);

@interface YDAdPolicyManager : NSObject

+ (YDAdPolicyManager *)sharedInstance;

- (void)initConfig:(NSString *)appId completionHandler:(YDConfigHandler)completionHandler;

- (NSString *)getAppId:(NSString *)adProvider;

- (NSArray *)getADNs;

- (YDAdSceneConfig *)getSceneConfig:(NSString *)sceneId;

- (void)loadSceneConfig:(NSString *)sceneId completionHandler:(YDSceneConfigHandler)completionHandler;

- (void)checkReward:(NSString *)sceneId user_id:(NSString *)userId extra:(NSString *)extraData completionHandler:(YDCheckRewardHandler)completionHandler;

- (BOOL)isReleaseState;
@end

NS_ASSUME_NONNULL_END
