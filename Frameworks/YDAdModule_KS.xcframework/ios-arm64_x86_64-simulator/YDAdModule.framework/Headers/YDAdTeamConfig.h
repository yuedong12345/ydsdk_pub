//
//  YDAdTeamConfig.h
//  YDAdModule
//
//  Created by dfy on 2024/3/17.
//

#ifndef YDAdTeamConfig_h
#define YDAdTeamConfig_h

#import "YDAdPosConfig.h"
#import "YDAdRequestCommon.h"

typedef NS_ENUM(NSUInteger, YDAdAddType) {
    YDAdAddType_List = 0,
    YDAdAddType_Up = 1,
    YDAdAddType_Down = 2,
    YDAdAddType_Bidding = 3
};

typedef void (^YDAdTeamLoadHandler)(BOOL success);

@interface YDAdTeamConfig : NSObject

@property (nonatomic, strong) NSString *sceneId;

@property (nonatomic, strong) NSString *listKey;    // TODO 去掉

@property (nonatomic, weak) id<YDSplashAdRequestDelegate> requestDelegate;

- (instancetype)init:(NSString *)sceneId adType:(NSString *)type adnId:(NSString *)providerId adnName:(NSString *)provider;

- (YDAdPosConfig *)getAdConfig:(BOOL)isBidding;

- (void)setRequestAd:(BOOL)isBidding timeOut:(NSInteger)maxTime;

- (void)setRequestResult:(BOOL)isSuccess isBidding:(BOOL)isBid bidEcpm:(NSInteger)ecpm;

- (void)addAd:(YDAdPosConfig *)adConfig addType:(YDAdAddType)type;

- (BOOL)isFinished;

- (void)setLoadListener:(YDAdTeamLoadHandler)listener;

- (void)setTimeOut;

- (NSString *)getListKey;

- (void)collectRequestAction:(NSMutableArray *)requestArray;

@end
#endif /* YDAdTeamConfig_h */
