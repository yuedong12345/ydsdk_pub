//
//  AdProfMacro.h
//  AdProfSDK
//
//  Created by coderqi on 2025/11/13.
//

#ifndef AdProfMacro_h
#define AdProfMacro_h

#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...)
#endif

/// 广告类型
typedef NS_OPTIONS(NSUInteger, AdProfAdType) {
    /// 信息流
    APAdTypeNative          = 1,
    /// 开屏
    APAdTypeSplash          = 2,
    /// banner
    APAdTypeBanner          = 3,
    /// 插屏
    APAdTypeInterstitial    = 4,
    /// 激励
    APAdTypeRewardVideo    = 5,
    /// 信息流自渲染
    APAdTypeFeedCustom      = 6,
};

/// 广告渲染类型
typedef NS_OPTIONS(NSInteger, AdProfAdRenderType) {
    /// 默认值
    AdProfAdRenderTypeDefault = -9999,
    /// sdk模版渲染
    AdProfAdRenderTypeTemplate = 1,
    /// 媒体自渲染
    AdProfAdRenderTypeCustom   = 2,
};

/// 广告数据请求回调
typedef void(^AdProfAdDataCallBackHandler)(NSArray * _Nullable array, NSError * _Nullable error);

/**
 * 视频播放器状态枚举
 */
typedef NS_ENUM(NSInteger, AdProfVideoPlayerState) {
    AdProfVideoPlayerStateUnknown = 0,  // 未知状态
    AdProfVideoPlayerStateBuffering,    // 正在缓冲
    AdProfVideoPlayerStatePlaying,      // 正在播放
    AdProfVideoPlayerStatePaused,       // 已暂停
    AdProfVideoPlayerStateStopped,      // 已停止
    AdProfVideoPlayerStateCompleted,    // 播放完成
    AdProfVideoPlayerStateFailed        // 播放失败
};

/**
 * 视频播放状态回调
 * @param state 当前视频播放状态
 * @param error 如果出现错误，包含错误信息
 */
typedef void(^AdProfVideoPlayerStateCallback)(AdProfVideoPlayerState state, NSError * _Nullable error);

/**
 * 视频播放进度回调
 * @param currentTime 当前播放时间（秒）
 * @param duration 视频总时长（秒）
 */
typedef void(^AdProfVideoPlayerProgressCallback)(NSTimeInterval currentTime, NSTimeInterval duration);

/// 广告打开类
typedef NS_OPTIONS(NSUInteger, AdProfAdOpenType) {
    /// push
    AdProfAdOpenTypePush    = 1,
    /// Present
    AdProfAdOpenTypePresent = 2,
};

/// 交互类型
typedef NS_ENUM(NSInteger, AdProfAdInteractionType) {
    AdProfAdInteractionTypeUnknown,        //unknown type
    AdProfAdInteractionTypeApp,            //open download page in-app
    AdProfAdInteractionTypeWeb,            //open webpage in-app
    AdProfAdInteractionTypeDeepLink,       //open deeplink
    AdProfAdInteractionTypeAppStore,       //open appstore
    AdProfAdInteractionTypeSafari,         //open safari
    AdProfAdInteractionTypeError           //can`t open landing page
};

/**以下为C2S bidding上报参数key**/
//竞胜方价格 单位：分
#define kAPAdMediaWinPrice   @"win_price"
//最大竞败方出价 单位：分
#define kAPAdMediaLossPrice  @"sec_price"
//竞败原因 0 未知 100价格低失败 200 超时失败
#define kAPAdMediaLossReason @"loss_reason"

#endif /* AdProfMacro_h */
