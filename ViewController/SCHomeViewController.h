//
//  SCHomeViewController.h
//  SocialProject
//
//  Created by Zhengwen YONG on 2017/11/18.
//  Copyright © 2017年 Zhengwen YONG. All rights reserved.
//


#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end
