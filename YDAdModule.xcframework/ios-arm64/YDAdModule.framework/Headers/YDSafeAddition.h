//
//  YDSafeAddition.h
//  Yuedong
//
//  Created by Yuedong  on 2020/2/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - NSNull
@interface NSNull (AdsSafeAddition)

- (float)ad_safeFloatValue;
- (double)ad_safeDoubleValue;
- (BOOL)ad_safeBoolValue;
- (NSInteger)ad_safeIntegerValue;
- (int)ad_safeIntValue;

- (id _Nullable)ad_safeObjectForKey:(id)aKey;
- (NSString * _Nullable)ad_safeStringValue;
- (NSArray * _Nullable)ad_safeArrayValue;
- (NSNumber * _Nullable)ad_safeNumberValue;
- (NSDictionary * _Nullable)ad_safeDictionaryValue;

@end

#pragma mark - NSNumber
@interface NSNumber (AdsSafeAddition)

- (float)ad_safeFloatValue;
- (double)ad_safeDoubleValue;
- (BOOL)ad_safeBoolValue;
- (NSInteger)ad_safeIntegerValue;
- (int)ad_safeIntValue;

- (id _Nullable)ad_safeObjectForKey:(id)aKey;
- (NSString * _Nullable)ad_safeStringValue;
- (NSArray * _Nullable)ad_safeArrayValue;
- (NSNumber * _Nullable)ad_safeNumberValue;
- (NSDictionary * _Nullable)ad_safeDictionaryValue;

@end

#pragma mark - NSString
@interface NSString (AdsSafeAddition)

- (float)ad_safeFloatValue;
- (double)ad_safeDoubleValue;
- (BOOL)ad_safeBoolValue;
- (NSInteger)ad_safeIntegerValue;
- (int)ad_safeIntValue;

- (id _Nullable)ad_safeObjectForKey:(id)aKey;
- (NSString * _Nullable)ad_safeStringValue;
- (NSArray * _Nullable)ad_safeArrayValue;
- (NSNumber * _Nullable)ad_safeNumberValue;
- (NSDictionary * _Nullable)ad_safeDictionaryValue;

@end

#pragma mark - NSArray
@interface NSArray (AdsSafeAddition)

- (float)ad_safeFloatValue;
- (double)ad_safeDoubleValue;
- (BOOL)ad_safeBoolValue;
- (NSInteger)ad_safeIntegerValue;
- (int)ad_safeIntValue;

- (id _Nullable)ad_safeObjectForKey:(id)aKey;
- (NSString * _Nullable)ad_safeStringValue;
- (NSArray * _Nullable)ad_safeArrayValue;
- (NSNumber * _Nullable)ad_safeNumberValue;
- (NSDictionary * _Nullable)ad_safeDictionaryValue;

@end

#pragma mark - NSDictionary
@interface NSDictionary (AdsSafeAddition)

- (float)ad_safeFloatValue;
- (double)ad_safeDoubleValue;
- (BOOL)ad_safeBoolValue;
- (NSInteger)ad_safeIntegerValue;
- (int)ad_safeIntValue;

- (id _Nullable)ad_safeObjectForKey:(id)aKey;
- (NSString * _Nullable)ad_safeStringValue;
- (NSArray * _Nullable)ad_safeArrayValue;
- (NSNumber * _Nullable)ad_safeNumberValue;
- (NSDictionary * _Nullable)ad_safeDictionaryValue;

@end

NS_ASSUME_NONNULL_END
