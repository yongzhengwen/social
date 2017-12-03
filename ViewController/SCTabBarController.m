//
//  SCTabBarViewController.m
//  SocialProject
//
//  Created by Zhengwen YONG on 2017/11/16.
//  Copyright © 2017年 Zhengwen YONG. All rights reserved.
//


#import "SCTabBarController.h"
#import "SCHomeViewController.h"
#import "SCExploreViewController.h"

@interface SCTabBarController ()

@end

@implementation SCTabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    //Users/zhengwenyong/Work/xcodeWorkSpace/SocialProject/Pods/Pods.xcodeproj
    self.viewControllers = [self viewControllerArray];
    self.selectedIndex = 0;
}

- (NSArray <UIViewController *> *)viewControllerArray
{
    UIViewController *homeController = [self homeViewController];
    UIViewController *exploreController = [self exploreViewController];
    NSArray<UIViewController *> *array = @[homeController, exploreController];
    return array;
}

- (UIViewController *)homeViewController
{
    SCHomeViewController *homeController = [[SCHomeViewController alloc] init];
    homeController.view.backgroundColor = [UIColor whiteColor];
    homeController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Home" image:[UIImage imageNamed:@"Events"] selectedImage:[UIImage imageNamed:@"Events_elected"]];
    homeController.tabBarItem.tag = 0;
    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:homeController];
    return navigationController;
}

- (UIViewController *)exploreViewController
{
    SCExploreViewController *exploreController = [[SCExploreViewController alloc] init];
    exploreController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Explore" image:[UIImage imageNamed:@"Explore"] selectedImage:[UIImage imageNamed:@"Explore_elected"]];
    exploreController.tabBarItem.tag = 1;
    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:exploreController];
    return navigationController;
}

@end


