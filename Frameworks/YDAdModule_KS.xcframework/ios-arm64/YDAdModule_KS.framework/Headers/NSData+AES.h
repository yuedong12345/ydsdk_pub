//
//  NSData+AES.h
//  YDAdModule
//
//  Created by YueDong on 2023/12/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData(Encryption)

- (NSData *)AES128EncryptWithKey:(NSString *)key ivKey:(NSString *)ivkey;//加密
- (NSString *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES128DecryptWithKey:(NSString *)key ivkey:(NSString * )ivkey;//解密
- (NSData *)AES256DecryptWithKey:(NSString *) key;
@end

NS_ASSUME_NONNULL_END
