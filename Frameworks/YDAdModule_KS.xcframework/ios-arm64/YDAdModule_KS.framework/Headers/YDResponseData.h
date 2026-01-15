//
//  YDResponseData.h
//  YDAdModule
//
//  Created by dfy on 2025/4/16.
//

#ifndef YDResponseData_h
#define YDResponseData_h

@interface YDResponseData : NSObject

- (instancetype)init:(NSData *)data;

- (BOOL)success;

- (NSDictionary *)getData;

- (NSArray *)getArrayData;

@end
#endif /* YDResponseData_h */
