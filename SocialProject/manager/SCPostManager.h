//
//  SCPostManager.h
//  SocialProject
//
//  Created by Zhengwen YONG on 12/2/17.
//  Copyright © 2017 Zhengwen YONG. All rights reserved.
//

#import <Foundation/Foundation.h>
@class SCPost;
@class CLLocation;

@interface SCPostManager : NSObject

/*
 * Create posts with message
 */
+ (void)createPostWithMessage:(NSString *)message andCompletion:(void(^)(NSError *error))completionBlock;

/*
 * load all posts within a givin location and range
 */
+ (void)getPostsWithLocation:(CLLocation *)location range:(NSInteger)range andCompletion:(void(^)(NSArray <SCPost *>* posts, NSError *error))completionBlock;

@end
