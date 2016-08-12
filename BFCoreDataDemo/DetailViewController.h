//
//  DetailViewController.h
//  BFCoreDataDemo
//
//  Created by Readboy_BFAlex on 16/8/12.
//  Copyright © 2016年 BF. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

