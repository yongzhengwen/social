//
//  SCPost.h
//  SocialProject
//
//  Created by Zhengwen YONG on 2017/11/15.
//  Copyright © 2017年 Zhengwen YONG. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface SCPost : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) NSDate *postDate;
@property (nonatomic, strong) CLLocation *location;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end



