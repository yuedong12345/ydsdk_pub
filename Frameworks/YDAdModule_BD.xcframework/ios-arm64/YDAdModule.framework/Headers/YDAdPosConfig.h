//
//  YDAdPosConfig.h
//  Pods
//
//  Created by dfy on 2024/3/17.
//

#ifndef YDAdPosConfig_h
#define YDAdPosConfig_h

#import <Foundation/Foundation.h>

@interface YDAdPosConfig : NSObject

@property(nonatomic, strong) NSString *sceneId;

@property(nonatomic, copy) NSString *codeId;

@property(nonatomic, copy) NSString *adType;

@property(nonatomic, copy) NSString *providerId;

@property(nonatomic, strong) NSString *adProvider;

@property (nonatomic) CGSize adSize;

@property(nonatomic) NSInteger adWidth;

@property(nonatomic) NSInteger adHeight;

@property(nonatomic) NSInteger templateId;

@property(nonatomic) NSInteger eCpm;

@property(nonatomic) BOOL isBidding;

@property(nonatomic) float biddingRate;

- (instancetype)init:(NSString *)scene jsonData:(NSDictionary *)data;

- (NSString *)getType;

@end

#endif /* YDAdPosConfig_h */
