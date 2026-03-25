//
//  YDAdInitializer.h
//  YDAdModule
//
//  Created by dfy on 2025/12/29.
//

#ifndef YDAdInitializer_h
#define YDAdInitializer_h

#import <Foundation/Foundation.h>
#import "YDCommon.h"

/**
 * ADN初始化完成回调
 * @param success 初始化是否成功
 * @param error 错误信息（成功时为nil）
 */
typedef void(^YDAdInitializerCompletionHandler)(BOOL success, NSError * _Nullable error);

/**
 * ADN初始化协议
 * 各ADN模块需要实现此协议来提供SDK初始化功能
 */
@protocol YDAdInitializer <NSObject>

/**
 * 初始化ADN SDK
 * @param appId ADN的AppID
 * @param stateDict 状态字典，用于记录初始化状态
 * @param adnName ADN名称，用于在状态字典中记录状态
 * @param completionHandler 初始化完成回调（在初始化完成时调用，无论成功或失败）
 * @return 是否成功启动初始化流程
 */
+ (BOOL)initializeWithAppId:(NSString *)appId
                   stateDict:(NSMutableDictionary *)stateDict
                     adnName:(NSString *)adnName
           completionHandler:(nullable YDAdInitializerCompletionHandler)completionHandler;

@end

#endif /* YDAdInitializer_h */
