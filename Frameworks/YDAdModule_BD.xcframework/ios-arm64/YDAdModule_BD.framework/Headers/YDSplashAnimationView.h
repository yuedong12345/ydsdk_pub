//
//  YDSplashAnimationView.h
//  YDAdModule
//
//  Created by YDAdModule on 2024/7/27.
//

#import <UIKit/UIKit.h>
#import "YDCommon.h"
#import "YDAdSlot.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, YDAdSplashAnimation) {
    // 点击
    YDAdSplashAnimation_Tap = 0,
    // 摇一摇
    YDAdSplashAnimation_Shake = 1,
};

@interface YDSplashAnimationView : UIView

@property (nonatomic, copy, nullable) void(^actionHandler)(CGPoint, CGPoint, CGPoint, BOOL);

- (void)exposed;

- (void)startAnimation;

- (void)stopAnimation;

//+ (YDSplashAnimationView *)animation:(NSInteger)style size:(CGSize)superViewSize;

+ (YDSplashAnimationView *)tapAnimation:(NSInteger)style size:(CGSize)superViewSize;

+ (YDSplashAnimationView *)shakeAnimation:(NSInteger)style size:(CGSize)superViewSize rotate:(double)rotateAngle acc:(double)configAcc;

/// animation
@property (nonatomic, assign) YDAdSplashAnimation animation;

@property (nonatomic, strong) YDAdSlot *slot;

@end

NS_ASSUME_NONNULL_END
