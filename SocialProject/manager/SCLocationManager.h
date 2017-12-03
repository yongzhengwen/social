//
//  SCLocatioManager.h
//  SocialProject
//
//  Created by Zhengwen YONG on 2017/11/21.
//  Copyright © 2017年 Zhengwen YONG. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLLocation;

extern NSString * const SCLocationUpdateNotification;

@interface SCLocationManager : NSObject

+ (instancetype)sharedManager;
- (void)getUserPermission;
+ (BOOL)isLocationServicesEnabled;
- (void)startLoadUserLocation;
- (void)stopLoadUserLocation;
- (CLLocation *)getUserCurrentLocation;

@end

