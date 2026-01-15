//
//  YDCriticalActionReporter.h
//  YDAdModule
//
//  Created by dfy on 2024/4/16.
//

#ifndef YDCriticalActionReporter_h
#define YDCriticalActionReporter_h

#define REPORT_ACTION_REQUEST @"request"
#define REPORT_ACTION_PV @"pv"
#define REPORT_ACTION_CLICK @"click"

#import "YDCommon.h"

@interface YDCriticalActionReporter : NSObject
+ (void)reportAction:(NSString *)action data:(NSDictionary *)reportDict;

+ (void)reportPV:(NSString *)sceneId nativeAd:(id<YDAdNative>)adNative;

+ (void)reportClick:(NSString *)sceneId nativeAd:(id<YDAdNative>)adNative;
@end
#endif /* YDCriticalActionReporter_h */
