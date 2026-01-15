//
//  YDAdSplashWebViewController.h
//  YDAdModule
//
//  Created by YueDong on 2024/7/28.
//

#import <UIKit/UIKit.h>
#import "YDADXAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface YDAdWebViewController : UIViewController

@property (nonatomic, strong) NSString *url;

@property (nonatomic, weak) NSArray<YDADXHeader *> *landingHeader;

/// dismiss
@property (nonatomic, copy) void(^dismissHandler)(void);
@end

NS_ASSUME_NONNULL_END
