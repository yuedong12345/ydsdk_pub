//
//  YDSwizzle.h
//  YueDong
//
//  Created by YueDong on 2023/12/26.
//  Copyright © 2023 YueDong. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 @brief 替换类的类方法
 @param cls 要修改的类的类对象
 @param originalSelector 要替换的方法
 @param swizzledSelector 新的方法实现
 */
extern void YDSwizzleClassMethod(Class cls, SEL originalSelector, SEL swizzledSelector);

/**
 @brief 替换类的对象方法
 @param cls 要修改的类的类对象
 @param originalSelector 要替换的方法
 @param swizzledSelector 新的方法实现
 */
extern void YDSwizzleInstanceMethod(Class cls, SEL originalSelector, SEL swizzledSelector);

/**
@brief 交换不同类中两个  对象方法    友好提示:自定义的方法可以写在任何的自定义类中 ）
@param originalCls 被交换的类的类对象
@param swizzledCls 用来交换的类的类对象
@param originalSelector 被交换的方法
@param swizzledSelector 用来交换的方法
  */
extern void YDSwizzleDifferentClassInstanceMethod(Class originalCls,Class swizzledCls,SEL originalSelector, SEL swizzledSelector);


/**
@brief 交换不同类中两个  类方法 （  友好提示:自定义的方法可以写在任何的自定义类中 ）
@param originalCls 被交换的类的类对象
@param swizzledCls 用来交换的类的类对象
@param originalSelector 被交换的方法
@param swizzledSelector 用来交换的方法
  */
extern void YDSwizzleDifferentClassClassMethod(Class originalCls,Class swizzledCls,SEL originalSelector, SEL swizzledSelector);

@interface YDSwizzle : NSObject

/**
 @brief 交换不同类中两个  对象方法    友好提示:自定义的方法可以写在任何的自定义类中 ）
 @param originalCls 被交换的类的类对象
 @param swizzledCls 用来交换的类的类对象
 @param originalSelector 被交换的方法
 @param swizzledSelector 用来交换的方法
 */
+ (void)swizzleDifferentClassInstanceMethod:(Class)originalCls swizzledClas:(Class)swizzledCls originalSelector:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;

@end
