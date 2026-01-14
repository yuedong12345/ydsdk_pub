//
//  YDDislikeViewController.h
//  YDAdModule
//
//  Created by YueDong on 2023/12/31.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YDDislikeViewController : UIViewController

+ (void)showFrom:(UIViewController *)source
maskClickHandler:(void(^_Nullable)(void))maskHanlder
   selectHandler:(void(^_Nullable)(NSString *))selectHandler;
@end

NS_ASSUME_NONNULL_END
