//
//  YDAdInitManager.h
//  YDAdModule
//
//  Created by dfy on 2025/4/16.
//

#ifndef YDAdInitManager_h
#define YDAdInitManager_h

#import "YDAdManager.h"

//typedef void (^YDInitCompleteHandler)(BOOL success, NSError * _Nullable error);

@interface YDAdInitManager : NSObject

+ (YDAdInitManager *)sharedInstance;

- (BOOL)initWithAppId:(NSString *)appId;

- (void)initWithAsyncCompletionHandler:(YDCompleteHandler)completionHandler;

@property (nonatomic, assign) BOOL isCSJInitComplete;

@end
#endif /* YDAdInitManager_h */
