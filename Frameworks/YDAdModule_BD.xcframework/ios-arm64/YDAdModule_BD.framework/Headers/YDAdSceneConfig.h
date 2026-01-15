//
//  YDAdSceneConfig.h
//  Pods
//
//  Created by dfy on 2024/3/17.
//

#ifndef YDAdSceneConfig_h
#define YDAdSceneConfig_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YDAdSceneConfig : NSObject

@property (nonatomic, assign) CGSize adSize;

@property(nonatomic) NSInteger queueSize;

@property(nonatomic) NSInteger viewTemplate;

@property(nonatomic) NSInteger sceneType;

@property(nonatomic) NSInteger nextPv;

@property(nonatomic) NSInteger supplySize;

@property(nonatomic) NSInteger fallRate;

@property(nonatomic) NSInteger maxTotalRequestTime;

@property(nonatomic) NSInteger maxSingleRequestTime;

@property (nonatomic, strong) NSString *cacheKey;

@property (nonatomic, strong) NSString *requestMode;

/// creative
@property (nonatomic, assign) NSInteger creative;

/// cr_rate
@property (nonatomic, assign) double crRate;

/// rotate_rate
@property (nonatomic, assign) double roRate;

@property (nonatomic, weak) NSDictionary *extParam;

- (instancetype)initWithScene:(NSString *)scene jsonData:(NSDictionary *)data;

- (NSString *)senceId;

- (NSInteger)getRequestCount;

- (void)incRequestCount;

@end

#endif /* YDAdSceneConfig_h */
