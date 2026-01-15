//
//  YDDeviceUtils.h
//  YDAdModule
//
//  Created by dfy on 2024/11/1.
//

#ifndef YDDeviceUtils_h
#define YDDeviceUtils_h

@interface YDDeviceUtils : NSObject

+ (NSDictionary *)getInfo:(NSString *)platform;

+ (NSString* )carrierInfo;

+ (NSString *)countryCode;

+ (NSString *)language;

+ (NSString *)timeZone;

@end
#endif /* YDDeviceUtils_h */
