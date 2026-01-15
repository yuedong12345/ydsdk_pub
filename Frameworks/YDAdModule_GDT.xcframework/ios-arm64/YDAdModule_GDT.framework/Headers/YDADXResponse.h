//
//  YDADXResponse.h
//  YDAdModule
//
//  Created by YueDong on 2024/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class YDADXAd;

@interface YDADXResponse : NSObject

/// code
@property (nonatomic, readonly, assign) NSInteger code;

/// msg
@property (nonatomic, readonly, copy, nullable) NSString *msg;

/// id 广告响应 id
@property (nonatomic, readonly, copy, nullable) NSString *responseId;

/// bid 广告信息
@property (nonatomic, readonly, strong, nullable) YDADXAd *adInfo;

- (instancetype)initWithDictionary:(NSDictionary *)dic;

- (BOOL)isSuccessLoadAd;

- (BOOL)isNoAd;
@end

NS_ASSUME_NONNULL_END
