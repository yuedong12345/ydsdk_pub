//
//  UIImageView+YDAdCache.h
//  YueDong
//
//  Created by YueDong on 2024/7/24.
//  Copyright © 2024 YueDong. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (YDAdCache)

- (void)ad_setImageWithURL:(NSURL *)url;

- (void)ad_setImageWithURL:(NSURL *)url completed:(void(^ _Nullable)(UIImage * _Nullable image,NSError * _Nullable error, NSURL * _Nullable imageURL))completedBlock;

@end

NS_ASSUME_NONNULL_END
