//
//  YDADXParams.h
//  YDAdModule
//
//  Created by dfy on 2024/6/6.
//

#ifndef YDADXParams_h
#define YDADXParams_h

#import "YDCommon.h"

@interface YDADXParams : NSObject

+ (YDADXParams *)sharedInstance;

- (NSDictionary *)getApp;

- (NSDictionary *)getDevice;

- (NSDictionary *)getUser;

- (NSString *)deviceID;

- (NSString *)getUA;
@end
#endif /* YDADXParams_h */
