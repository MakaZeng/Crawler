//
//  CrawlersCollectionCell.h
//  Qing
//
//  Created by Maka on 15/11/18.
//  Copyright © 2015年 maka. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FLAnimatedImage.h>
#import "RootCollectionViewCell.h"

@interface CrawlersCollectionCell : RootCollectionViewCell

@property (weak, nonatomic) IBOutlet FLAnimatedImageView *cImageView;

@property (weak, nonatomic) IBOutlet UILabel *cLabel;

@end
