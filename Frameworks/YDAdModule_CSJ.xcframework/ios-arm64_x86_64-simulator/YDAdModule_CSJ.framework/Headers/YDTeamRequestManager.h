//
//  YDTeamRequestManager.h
//  YDAdModule
//
//  Created by dfy on 2024/3/24.
//

#ifndef YDTeamRequestManager_h
#define YDTeamRequestManager_h

#import "YDAdRequestCommon.h"

@interface YDTeamRequestManager : NSObject

+(void)startRequestSplash:(NSString *)sceneId delegate:(id<YDTeamRequestDelegate>)requestDelegate;

+(void)startRequestBanner:(NSString *)sceneId delegate:(id<YDTeamRequestDelegate>)requestDelegate viewController:(UIViewController *)viewController;

+(BOOL)isTeamRequesting:(NSString *)sceneId;

+(void)addRequestDelegate:(NSString *)sceneId delegate:(id<YDTeamRequestDelegate>)requestDelegate;

+(void)removeRequestDelegate:(NSString *)sceneId;

@end
#endif /* YDTeamRequestManager_h */
