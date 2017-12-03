//
//  SCHomeTableViewCell.m
//  SocialProject
//
//  Created by Zhengwen YONG on 2017/11/18.
//  Copyright © 2017年 Zhengwen YONG. All rights reserved.
//

#import "SCHomeTableViewCell.h"
#import "SCPost.h"

@interface SCHomeTableViewCell ()

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;

@property (strong, nonatomic) SCPost *post;

@end

@implementation SCHomeTableViewCell


- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}

- (void)loadCellWithPost:(SCPost *)post
{
    self.post = post;
    self.titleLabel.text = post.name;
    self.messageLabel.text = post.message;
}

+ (CGFloat)cellHeight
{
    return 80.0;
}


@end
