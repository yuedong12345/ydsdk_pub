//
//  YDADXAd.h
//  YDAdModule
//
//  Created by Yuedong on 2024/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class YDADXApp;
@class YDADXBanner;
@class YDADXFeed;
@class YDADXVideo;
@class YDADXEvents;
@class YDADXUrlVisit;
@class YDADXHeader;
@class YDADXExt;
@class YDADXPatternType;

@interface YDADXAd : NSObject

/// 广告 id
@property (nonatomic, readonly, copy, nullable) NSString *adId;

/// landing
@property (nonatomic, readonly, copy, nullable) NSString *landingURL;

/// donwload
@property (nonatomic, readonly, copy, nullable) NSString *downloadURL;

/// downloadType
@property (nonatomic, readonly, assign) NSInteger downloadType;

/// deeplink
@property (nonatomic, readonly, copy, nullable) NSString *deeplink;

/// iOS App id
@property (nonatomic, readonly, copy, nullable) NSString *iOSAppId;

/// app
@property (nonatomic, readonly, strong) YDADXApp *app;

/// banner
@property (nonatomic, readonly, strong, nullable) YDADXBanner *banner;

/// feed
@property (nonatomic, readonly, strong, nullable) YDADXFeed *feed;

/// video
@property (nonatomic, readonly, strong, nullable) YDADXVideo *video;

/// events
@property (nonatomic, readonly, strong, nullable) YDADXEvents *events;

/// ext
@property (nonatomic, readonly, strong, nullable) YDADXExt *ext;

/// universallink
@property (nonatomic, readonly, copy, nullable) NSString *universalLink;

/// price
@property (nonatomic, readonly, assign) NSInteger price;

@property (nonatomic, readonly, strong) NSArray<YDADXHeader *> *landingHeader;

@property (nonatomic, readonly, assign) float shake;

@property (nonatomic, readonly, assign) float rotate;

- (instancetype)initWithDictionary:(NSDictionary *)dic;

- (BOOL)canHandleDownload;

- (NSString *_Nullable)appIdentifier;

@end


@interface YDADXApp : NSObject

/// name
@property (nonatomic, readonly, copy) NSString *name;

/// icon
@property (nonatomic, readonly, copy) NSString *icon;

/// iTunesID
@property (nonatomic, readonly, copy) NSString *iTunesID;

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@end

@interface YDADXBanner : NSObject

/// w
@property (nonatomic, assign) NSInteger width;

/// h
@property (nonatomic, assign) NSInteger height;

/// mimes
@property (nonatomic, readonly, copy, nullable) NSString *mimes;

/// imageURL
@property (nonatomic, readonly, copy) NSString *imageURL;

@property (nonatomic, nullable) NSData *imageData;

- (instancetype)initWithDictionary:(NSDictionary *)dic;

- (BOOL)hasImageSize;
@end

@interface YDADXFeed : NSObject

/// title
@property (nonatomic, readonly, copy) NSString *title;

/// desc
@property (nonatomic, readonly, copy) NSString *desc;

/// banner
@property (nonatomic, readonly, strong) NSArray<YDADXBanner *> *images;

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@end

@interface YDADXVideo : NSObject

@property (nonatomic, assign) NSInteger w;

@property (nonatomic, assign) NSInteger h;

@property (nonatomic, readonly, copy) NSString *iurl;

@property (nonatomic, readonly, assign) NSInteger size;

@property (nonatomic, readonly, copy) NSString *ad_text;

@property (nonatomic, readonly, copy) NSString *ad_description;

@property (nonatomic, readonly, copy) NSString *ad_icon;

@property (nonatomic, readonly, copy) NSString *cover_url;

@property (nonatomic, readonly, assign) NSInteger cover_w;

@property (nonatomic, readonly, assign) NSInteger cover_h;

@property (nonatomic, readonly, copy) NSString *end_url;

@property (nonatomic, readonly, copy) NSString *end_html;

@property (nonatomic, readonly, copy) NSString *button_text;

@property (nonatomic, readonly, assign) NSInteger full_screen;

@property (nonatomic, readonly, assign) NSInteger clickable;

@property (nonatomic, readonly, assign) NSInteger is_auto_langding;

@property (nonatomic, readonly, assign) NSInteger duration;

@property (nonatomic, readonly, assign) NSInteger keep_duration;

@property (nonatomic, readonly, assign) NSInteger reward_duration;

@property (nonatomic, readonly, assign) NSInteger kippable_duration;

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@end

@interface YDADXEvents : NSObject

/// 曝光上报地址
@property (nonatomic, readonly, strong) NSArray<NSString *> *els;

/// 广告（包括视频广告）点击上报地址
@property (nonatomic, readonly, strong) NSArray<NSString *> *cls;

/// 非视屏类广告关闭上报地址
@property (nonatomic, readonly, strong) NSArray<NSString *> *clo;

/// Deeplink 尝试调起上报地址, 需宏替换
@property (nonatomic, readonly, strong) NSArray<NSString *> *dclst;

/// Deeplink 调起成功上报地址, 需宏替换
@property (nonatomic, readonly, strong) NSArray<NSString *> *dcls;

/// Deeplink 调起失败上报地址, 需宏替换
@property (nonatomic, readonly, strong) NSArray<NSString *> *dclsf;

/// 视频类广告，点击封面图播放视频上报，可能为空,为空时,使用cls上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_click;

/// 视频类广告，视频开始播放上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_start;

/// 视频类广告，视频播放至 25%时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_first_quartile;

/// 视频类广告，视频播放至 50%时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_midpoint;

/// 视频类广告，视频播放至 75%时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_third_quartile;

/// 视频类广告，视频播放完成上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_complete;

/// 视频类广告，视频静音时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_mute;

/// 视频类广告，取消视频静音时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_unmute;

/// 视频类广告，跳过视频时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_skip;

/// 视频类广告，关闭视频时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_close;

/// 视频类广告，视频播放暂停上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_suspend;

/// 视频类广告，视频全屏播放上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_full;

/// 视频类广告，视频退出全屏播放上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_cancelfull;

/// 视频类广告，视频预览图播放上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_cardplay;

/// 视频类广告，播放 3s（第一遍）上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_play3s;

/// 视频类广告，播放 5s（第一遍）上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_play5s;

/// 视频类广告，视频重播时上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_replay;

/// 视频类广告，视频上滑时上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_upscroll;

/// 视频类广告，视频下滑时上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_downscroll;

/// 视频类广告，视频继续播放上报
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_continue_play;

/// 视频类广告，加载成功
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_load_success;

/// 视频类广告，加载失败
@property (nonatomic, readonly, strong) NSArray<NSString *> *v_load_fail;

/// 汇川预算 点击坐标上报 url。详情参考注意事项6
@property (nonatomic, readonly, strong) NSArray<NSString *> *click_area_report_url;

/// 曝光上报地址, 需宏替换
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *els_urls;

/// 广告（包括视频广告）点击上报地址, 需宏替换,
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *cls_urls;

/// 非视屏类广告关闭上报地址，需宏替换
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *clo_urls;

/// Deeplink尝试调起上报地址, 需宏替换
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *dclst_urls;

/// Deeplink调起成功上报地址, 需宏替换
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *dcls_urls;

/// Deeplink调起失败上报地址, 需宏替换
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *dclsf_urls;

/// 视频类广告，跳过视频时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *v_skip_urls;

/// 视频类广告，视频开始播放上报，可能为空
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *v_start_urls;

/// 视频类广告，视频播放至 25%时上报，可能为空,
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *v_first_quartile_urls;

/// 视频类广告，视频播放至 50%时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *v_midpoint_urls;

/// 视频类广告，视频播放至 75%时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *v_third_quartile_urls;

/// 视频类广告，视频播放完成上报，可能为空
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *v_complete_urls;

/// 视频类广告，视频静音时上报，可能为空
@property (nonatomic, readonly, strong) NSArray<YDADXUrlVisit *> *v_mute_url;

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@end

@interface YDADXUrlVisit : NSObject

@property (nonatomic, readonly, strong) NSArray<YDADXHeader *> *headers;

@property (nonatomic, readonly, copy) NSString *url;

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@end

@interface YDADXHeader : NSObject

@property (nonatomic, readonly, copy) NSString *key;

@property (nonatomic, readonly, copy) NSString *value;

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@end

@interface YDADXExt : NSObject

@property (nonatomic, readonly, strong) YDADXPatternType *pattern_type;

@property (nonatomic, readonly, copy) NSString *render_type;

- (instancetype)initWithDictionary:(NSDictionary *)dic;
@end

@interface YDADXPatternType : NSObject

@property (nonatomic, readonly, strong) NSArray<NSNumber *> *types;

- (instancetype)initWithDictionary:(NSArray *)dic;
@end
NS_ASSUME_NONNULL_END
