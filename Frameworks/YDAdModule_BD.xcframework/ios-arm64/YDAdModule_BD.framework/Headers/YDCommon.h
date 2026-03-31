//
//  YDCommon.h
//  Pods
//
//  Created by Yuedong on 2023/12/27.
//

#ifndef YDCommon_h
#define YDCommon_h

//#define DEBUG_LOG
//#define DEBUG_MODE
//#define DEBUG_TEAM_REQUEST
//#define DEBUG_SINGLE_BIDDING_REQUEST

//#define PROD_FEATURE_AIQIYI         // 爱奇艺产品编译选项
//#define PROD_FEATURE_CHEXUETANG     // 车学堂的特殊处理功能，非车学堂版本关闭


#ifdef DEBUG_LOG
#define NSLog(fmt, ...) NSLog((@"[adsdk%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define NSLog(...)
#endif

static NSString * const YDAdSource = @"source";

#pragma mark ad providers
static NSString * const YDAdSourceNameCSJ = @"csj";

static NSString * const YDAdSourceNameCSJM = @"csjm";

static NSString * const YDAdSourceNameGDT = @"gdt";

static NSString * const YDAdSourceNameGDTM = @"gdtm";

static NSString * const YDAdSourceNameKS = @"ks";

static NSString * const YDAdSourceNameBD = @"baidu";

static NSString * const YDAdSourceNameYD = @"yd";

static NSString * const YDAdSourceNameFanwei = @"fanwei";

static NSString * const YDAdSourceNameYF = @"yf";

static NSString * const YDAdSourceNameUX = @"ux";

static NSString * const YDAdSourceNameBLK = @"blk";

static NSString * const YDAdSourceNameUnknown = @"unknown";

#pragma mark default app id

#ifdef PROD_FEATURE_AIQIYI
static NSString * const YD_DEFAULT_APPID_CSJ = @"5023363";
static NSString * const YD_DEFAULT_APPID_GDT = @"1206336324";
static NSString * const YD_DEFAULT_APPID_KS = @"1476800003";
static NSString * const YD_DEFAULT_APPID_BD = @"c4781e29";
#elif defined(PROD_FEATURE_CHEXUETANG)
static NSString * const YD_DEFAULT_APPID_CSJ = @"5088800";
static NSString * const YD_DEFAULT_APPID_GDT = @"1206434258";
static NSString * const YD_DEFAULT_APPID_KS = @"1476800007";
static NSString * const YD_DEFAULT_APPID_BD = @"c4f8b3da";
#else
static NSString * const YD_DEFAULT_APPID_CSJ = @"5088800";
static NSString * const YD_DEFAULT_APPID_GDT = @"1206434258";
static NSString * const YD_DEFAULT_APPID_KS = @"1476800007";
static NSString * const YD_DEFAULT_APPID_BD = @"c4f8b3da";
#endif


#pragma mark ad pos type
static NSString * const YD_AD_POS_TYPE_NATIVE_RENDER = @"0";    // 信息流自渲染：广点通、穿山甲

static NSString * const YD_AD_POS_TYPE_INFO_TEMPLATE = @"1";    // 信息流模板：穿山甲、广点通

static NSString * const YD_AD_POS_TYPE_FEED_RENDER = @"2";    // 信息流自渲染：快手、百度

static NSString * const YD_AD_POS_TYPE_INFO_TEMPLATE_3 = @"3";  // 信息流模板：穿山甲、快手、百度

static NSString * const YD_AD_POS_TYPE_SPLASH = @"4";

static NSString * const YD_AD_POS_TYPE_REWARD_VIDEO = @"5";

static NSString * const YD_AD_POS_TYPE_BANNER_TEMPLATE = @"6";

static NSString * const YD_AD_POS_TYPE_BANNER_RENDER = @"9";    // 广点通Banner自渲染

static NSString * const YD_AD_POS_TYPE_INTER = @"7";                // 插屏：半屏

static NSString * const YD_AD_POS_TYPE_INTER_FULL_VIDEO = @"105";   // 插屏：全屏 & 全屏视频

#pragma mark ad scene type
static NSInteger const YD_AD_SCENE_TYPE_INFO = 1;   // 信息流类型场景

static NSInteger const YD_AD_SCENE_TYPE_BANNER = 2; // Banner类型场景

typedef NS_ENUM(NSUInteger, YDAdLoadState) {
    YDAdLoadState_IDLE = 0,
    YDAdLoadState_LoadOnly = 1,
    YDAdLoadState_LoadAndShow = 2,
    YDAdLoadState_Preload = 3,
    YDAdLoadState_AutoRefresh = 4,
    YDAdLoadState_AutoLoad
};

@protocol YDAdNative <NSObject>

@required

//- (void)setDelegate:(id<YDSplashAdRequestDelegate>)delegate;

- (void)loadAd;

- (NSString *)getCodeId;

- (NSInteger)getECPM;

- (NSString *)getAdProvider;

- (NSString *)getProviderId;

- (NSString *)getAdType;

- (BOOL)isBidding;

- (NSString *)getAdProviderAndType;

- (dispatch_source_t)getTimer;

- (void)sendBiddingSuccess:(NSDictionary *)info;

- (void)sendBiddingFailed:(NSDictionary *)info;

@optional
- (void)dislikeClicked;
@end
#endif /* YDCommon_h */
