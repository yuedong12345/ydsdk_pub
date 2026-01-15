//
//  YDUtils.h
//  YDAdModule
//
//  Created by YueDong on 2023/12/31.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, YDAdFontWeight) {
    YDAdFontWeight_Regular,
    YDAdFontWeight_Medium,
    YDAdFontWeight_Bold
};

#ifndef dispatch_main_async_safe
#define dispatch_main_async_safe(block)\
    if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(dispatch_get_main_queue())) {\
        block();\
    } else {\
        dispatch_async(dispatch_get_main_queue(), block);\
    }
#endif

#define UIColorFromRGB(rgbValue)          [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define UIColorFromRGBA(rgbValue,__a)  [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:__a]

@interface YDUtils : NSObject

+ (NSBundle *)bundle;

+ (UIView *_Nullable)findTargetSubview:(NSString *)classString inView:(UIView *)view size:(CGSize)maxSize;

+ (UIFont *)pingfangRegularFontWithSize:(CGFloat)size;

+ (Boolean)isStrEmpty:(NSString *)str;

+ (NSString *)currentTimeInStrMs;

+ (NSString *)platform;

#pragma mark - AES加密
//将string转成带密码的data
+ (NSString *)encryptAESData:(NSString *)string withKey:(NSString *)key ivKey:(NSString *)ivKey;

+ (NSString *)encryptAES256Data:(NSString *)string withKey:(NSString *)key;

+ (NSString*)decryptAESData:(NSString *)data withKey:(NSString *)key ivKey:(NSString *)ivKey;

+ (NSString *)decryptAES256Data:(NSString *)string withKey:(NSString *)key;

+ (NSString *)dataToHexStr:(NSData *)data;

+ (UIViewController *)topControllerOfWindow:(UIWindow *)window;

+ (UIViewController *)topControllerOfVC:(UIViewController *)viewController;

+ (NSString *_Nonnull)appName;

+ (NSString *_Nonnull)bundleIdentifier;

+ (NSString *_Nonnull)appVer;

+ (NSString *_Nullable)getUserAgent;

+ (UIFont *)pingfangFont:(YDAdFontWeight)fontWeight size:(CGFloat)fontSize;

+ (NSString *)appIdentifier:(NSString *)url;

+ (NSString *)deviceModel;

+ (NSString *)systemUptimeInS;

+ (NSString *)systemUptime;

+ (NSString *)systemUptimeInNano;

+ (NSString *)language;

+ (NSString *)countryCode;

+ (unsigned long long)physicalMemory;

+ (unsigned long long)diskTotalSize;

+ (NSString *)systemSyUpTimeInKsFormat;

+ (NSTimeInterval)systemUpTime;

+ (NSString *_Nullable)systemSyUpTime;

+ (NSString *_Nullable)updateMark;

+ (NSString *_Nullable)bootTime;

+ (NSString *)getBirthTimeInNano;

+ (NSString *)getBirthTimeInMill;

+ (int)getCPUCores;

+ (long)getCPUFrequency;

+ (int)batteryStatus:(UIDevice *)device;
@end

NS_ASSUME_NONNULL_END
