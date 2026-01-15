//
//  YDAdManager.h
//  YDAdModule
//
//  Created by YueDong on 2023/12/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^YDCompleteHandler)(BOOL success, NSError * _Nullable error);

@interface YDAdManager : NSObject

- (instancetype)init NS_UNAVAILABLE;

+ (BOOL)initWithAppId:(NSString *)appId;

/// 初始化
//+ (void)setup;
+ (void)startWithAsyncCompletionHandler:(YDCompleteHandler)completionHandler;

+ (void)enableDefaultAudioSessionSetting:(BOOL)enabled;

/// 个性化推荐状态开关
/// - Parameter state: 状态  1  关闭 其它开启
+ (void)setPersonalizedState:(NSInteger)state;

+ (NSString *)sdkVersion;

+ (BOOL)isCSJInitComplete;
@end

NS_ASSUME_NONNULL_END
