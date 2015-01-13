//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by Adam Dunn on 2015-01-13.
//  Copyright (c) 2015 Great Slave Helicopters. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) FailedBankInfo *info;

@end
