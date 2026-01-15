//
//  YDAdMotionManager.h
//  YueDong
//
//  Created by YueDong on 2024/7/25.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>
#import "YDCommon.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, YDAdMotionAttitudeOptions) {
    /// 不检测
    YDAdMotionAttitudeOptionNone  = 0,
    /// 绕 x 轴旋转
    YDAdMotionAttitudeOptionPitch = 1 << 0,
    /// 绕 y 轴旋转
    YDAdMotionAttitudeOptionRoll  = 1 << 1,
    /// 绕 z 轴旋转
    YDAdMotionAttitudeOptionYaw   = 1 << 2,
};

@interface YDAdMotionManager : NSObject

/// 在摇一摇检测周期内，加速度传感器x轴峰值
@property (nonatomic, assign) double maxAccX;

@property (nonatomic, assign) double maxAccY;   ///y轴峰值

@property (nonatomic, assign) double maxAccZ;   ///z轴峰值

+ (YDAdMotionManager *)sharedManager;

//- (void)startMotionUpdatesWithShakedHandler:(void(^)(void))handler;

- (void)startMotionUpdatesWithShakedHandler:(void(^)(void))handler rotate:(double)rotateAngle acc:(double)configAcc;

- (void)startMotionUpdates:(BOOL)acceleration
                   options:(YDAdMotionAttitudeOptions)options
             shakedHandler:(void (^)(void))handler
                    rotate:(double)rotateAngle acc:(double)configAcc;

- (void)stopMotionUpdates;

@end

NS_ASSUME_NONNULL_END
