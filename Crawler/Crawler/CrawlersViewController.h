//
//  CrawlersViewController.h
//  Qing
//
//  Created by Maka on 15/11/18.
//  Copyright © 2015年 maka. All rights reserved.
//

#import "RootViewController.h"

@interface CrawlersViewController : RootViewController

-(instancetype)initWithUrlStartString:(NSString*)startString endString:(NSString*)endString XPathString:(NSString*)XPathString;

@end
