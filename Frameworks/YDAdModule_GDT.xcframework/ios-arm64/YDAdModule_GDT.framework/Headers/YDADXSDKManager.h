//
//  YDADXSDKManager.h
//  YDAdModule
//
//  Created by dfy on 2024/6/6.
//

#ifndef YDADXSDKManager_h
#define YDADXSDKManager_h

typedef void (^YDADXCompletionHandler)(BOOL success, NSError * _Nullable error);

@interface YDADXSDKManager : NSObject

+ (void)startWithCompletionHandler:(YDADXCompletionHandler)completionHandler;

@end
#endif /* YDADXSDKManager_h */
