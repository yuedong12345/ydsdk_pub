//
//  YDADXVideoView.h
//  YDAdModule
//
//  Created by dfy on 2024/11/12.
//

#ifndef YDADXVideoView_h
#define YDADXVideoView_h

#import <UIKit/UIKit.h>
#import "YDCommon.h"
#import "YDADXAd.h"

@protocol YDADXVideoViewStateDelegate <NSObject>

@optional
- (void)YDADXVideoViewStateLoadSuccess;

- (void)YDADXVideoViewStateLoadFail;

- (void)YDADXVideoViewStateVideoStart;

- (void)YDADXVideoViewStateProgress25;

- (void)YDADXVideoViewStateProgress50;

- (void)YDADXVideoViewStateProgress75;

- (void)YDADXVideoViewStateVideoComplete;

- (void)YDADXVideoViewStateProgressTime3;

- (void)YDADXVideoViewStateProgressTime5;
@end

@interface YDADXVideoView : UIView

@property (nonatomic, weak, nullable) id<YDADXVideoViewStateDelegate> stateDelegate;

@property (nonatomic, assign) BOOL isMulted;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)setVideoData:(YDADXVideo *)video;

- (void)startVideo;

- (void)removeVideo;
@end
#endif /* YDADXVideoView_h */
