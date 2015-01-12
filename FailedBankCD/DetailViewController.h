//
//  DetailViewController.h
//  FailedBankCD
//
//  Created by Adam Dunn on 2015-01-12.
//  Copyright (c) 2015 Great Slave Helicopters. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

