//
//  YDNativeExpressView+Private.m
//  YDAdModule
//
//  Created by YueDong on 2023/12/21.
//

#import <Foundation/Foundation.h>
#import "YDAdManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDAdManager (Private)
+ (YDAdManager *)sharedInstance;
//+ (BOOL)globalAdSwitch;
//+ (BOOL)isVip;
+ (void)csjInit;
+ (void)ksInit;
+ (BOOL)isCsjInit;
+ (BOOL)isKsInit;
@end

NS_ASSUME_NONNULL_END
