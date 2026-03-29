//
//  YDCommonParam.h
//  YDAdModule
//
//  Created by dfy on 2025/4/16.
//

#ifndef YDCommonParam_h
#define YDCommonParam_h

@interface YDCommonParam : NSObject

+ (YDCommonParam *)sharedInstance;

- (void)genParam:(NSString *)appId;

- (NSString *)getInitConfigUrl;

- (NSString *)getBiddingConfigUrl;

- (NSString *)getStartConfigUrl;

- (NSString *)getTeamConfigUrl;

- (NSString *)getUploadUrl;

- (NSString *)getSceneConfigUrl;

- (NSString *)getCheckRewardUrl;

- (NSString *)encrypt:(NSString *)str;

- (NSString *)decrypt:(NSString *)str;

- (void)putRM:(NSString *)sceneId value:(NSInteger)rm;

- (void)putCL:(NSString *)sceneId value:(NSInteger)cl;

- (NSNumber *)getRM:(NSString *)sceneId;

- (NSNumber *)getCL:(NSString *)sceneId;
@end

#endif /* YDCommonParam_h */
