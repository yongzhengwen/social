//
//  SCUser.h
//  SocialProject
//
//  Created by Zhengwen YONG on 12/2/17.
//  Copyright © 2017 Zhengwen YONG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;

+ (BOOL)isUserLogin;
+ (void)userLogInSuccess;
+ (NSString *)defaultUserName;
+ (void)saveDefaultUserName:(NSString *)username;

@end
