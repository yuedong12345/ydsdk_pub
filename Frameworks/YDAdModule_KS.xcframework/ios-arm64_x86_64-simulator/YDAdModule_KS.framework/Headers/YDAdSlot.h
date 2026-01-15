//
//  YDAdSlot.h
//  YDAdModule
//
//  Created by dfy on 2024/6/5.
//

#ifndef YDAdSlot_h
#define YDAdSlot_h

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, YDADXAdType) {
    YDADXAdType_Unknow = 0,
    YDADXAdType_Splash = 1,
    YDADXAdType_Interstitial = 2,
    YDADXAdType_Banner = 3,
    YDADXAdType_Feed = 4,
    YDADXAdType_RewardVideo = 5
};

typedef NS_ENUM(NSInteger, YDADXInteractionMode) {
    YDADXInteractionMode_Unknow = 0,
    YDADXInteractionMode_Shake = 1 /// 摇一摇
};

@interface YDAdSlot : NSObject

@property (nonatomic, copy, nonnull) NSString *codeId;

@property (nonatomic, assign) NSInteger adType;

@property (nonatomic, assign) CGSize adSize;

@property (nonatomic, copy, nullable) NSString *responseTimeInMs;

@property (nonatomic, copy, nullable) NSString *materialReadyTimeInMs;

@property (nonatomic, copy, nullable) NSString *showTimeInMs;

@property (nonatomic, copy, nullable) NSString *clickTimeInMs;

@property (nonatomic, assign) YDADXInteractionMode interactionType;

@property (nonatomic, assign) double shakeRate;

@property (nonatomic, assign) double rotateRate;

@property (nonatomic, assign) NSInteger price;

/// 在摇一摇检测周期内，加速度传感器x轴峰值
@property (nonatomic, assign) double maxAccX;

@property (nonatomic, assign) double maxAccY;   ///y轴峰值

@property (nonatomic, assign) double maxAccZ;   ///z轴峰值

@property (nonatomic, assign) CGPoint touchPointInternal;   /// view内的点击坐标

@property (nonatomic, assign) CGPoint touchPointGlobal;     /// 转换为相对于屏幕的坐标

@property(nonatomic) CGRect adFrame;            /// 在屏幕中的显示区域

- (instancetype)init;

- (NSDictionary *)genParams;
@end

NS_ASSUME_NONNULL_END

#endif /* YDAdSlot_h */
