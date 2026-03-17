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

@interface YDAdPolicyManager : NSObject

+ (YDAdPolicyManager *)sharedInstance;

- (void)initConfig:(NSString *)appId completionHandler:(YDConfigHandler)completionHandler;

- (NSString *)getAppId:(NSString *)adProvider;

- (NSArray *)getADNs;

- (YDAdSceneConfig *)getSceneConfig:(NSString *)sceneId;

@end

NS_ASSUME_NONNULL_END
