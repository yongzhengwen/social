//
//  SCPostDetailViewController.h
//  SocialProject
//
//  Created by Zhengwen YONG on 12/2/17.
//  Copyright © 2017 Zhengwen YONG. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end

