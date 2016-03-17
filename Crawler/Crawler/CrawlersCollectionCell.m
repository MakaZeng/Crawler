//
//  CrawlersCollectionCell.m
//  Qing
//
//  Created by Maka on 15/11/18.
//  Copyright © 2015年 maka. All rights reserved.
//

#import "CrawlersCollectionCell.h"

@implementation CrawlersCollectionCell

- (void)awakeFromNib {
    // Initialization code
    [super awakeFromNib];
}

-(void)setInfo:(id)info
{
    if (self.info == info) {
        return;
    }
    [super setInfo:info];
}

+(CGFloat)heightForInfo:(id)info
{
    return 50;
}

@end
