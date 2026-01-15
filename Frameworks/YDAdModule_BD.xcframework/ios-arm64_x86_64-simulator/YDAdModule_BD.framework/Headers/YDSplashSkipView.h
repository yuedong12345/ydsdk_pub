//
//  YDSplashSkipView.h
//  YDAdModule
//
//  Created by YDAdModule on 2024/7/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YDSplashSkipView : UIView

@property (nonatomic, copy) void(^clickBlock)(void);

/// 更新剩余的秒数
- (void)setLeftSeconds:(NSInteger)seconds percent:(CGFloat)percent;
@end

NS_ASSUME_NONNULL_END
