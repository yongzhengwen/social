//
//  SCCreatePostViewController.h
//  SocialProject
//
//  Created by Zhengwen YONG on 12/2/17.
//  Copyright © 2017 Zhengwen YONG. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end



@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

