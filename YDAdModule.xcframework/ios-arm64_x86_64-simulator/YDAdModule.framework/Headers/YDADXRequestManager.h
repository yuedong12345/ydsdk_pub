//
//  YDADXRequestManager.h
//  YDAdModule
//
//  Created by dfy on 2024/6/6.
//

#ifndef YDADXRequestManager_h
#define YDADXRequestManager_h

#import "YDAdSlot.h"
#import "YDADXAd.h"

#define ADXServerURL @"http://api.adx.adyuedong.com/ad/v6"

#define REPORT_ACTION_PV @"pv"
#define REPORT_ACTION_CLICK @"click"
#define REPORT_ACTION_CLOSE @"close"
#define REPORT_ACTION_DEEPLINK_START @"dp_start"
#define REPORT_ACTION_DEEPLINK_SUCCESS @"dp_success"
#define REPORT_ACTION_DEEPLINK_FAIL @"dp_fail"

@interface YDADXRequestManager : NSObject

+ (void)requestAdData:(NSDictionary *)params completeHandler:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler;

+ (void)reportActionPV:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionClick:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionClose:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionDpStart:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionDpSuccess:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionDpFail:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionVideoStart:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionVideoProgress25:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionVideoProgress50:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionVideoProgress75:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionVideoComplete:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportActionVideoClose:(YDADXEvents *)events adSlot:(YDAdSlot *)slot;

+ (void)reportAction:(NSString *)action urls:(NSArray<NSString *> *)urlList adSlot:(YDAdSlot *)slot;
@end
#endif /* YDADXRequestManager_h */
