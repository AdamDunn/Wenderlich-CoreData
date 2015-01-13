//
//  MasterViewController.h
//  FailedBankCD
//
//  Created by Adam Dunn on 2015-01-12.
//  Copyright (c) 2015 Great Slave Helicopters. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController

@property (nonatomic, strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
