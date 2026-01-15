//
//  UIImageView+YDAdCache.h
//  YueDong
//
//  Created by YueDong on 2024/7/24.
//  Copyright © 2024 Yue Dong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YDAdImageCache.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^YDAdImageLoadFinishedBlock)(NSData * _Nullable imageData, NSError * _Nullable error, YDAdImageCacheType cacheType, BOOL finished, NSURL * _Nullable imageURL);

@interface YDAdImageLoader : NSObject

- (YDAdImageLoader *)loadImageWithURL:(NSURL *)url completed:(YDAdImageLoadFinishedBlock)completedBlock;

@end

NS_ASSUME_NONNULL_END
