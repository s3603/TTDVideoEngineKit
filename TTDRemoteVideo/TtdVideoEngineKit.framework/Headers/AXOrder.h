//
//  AXOrder.h
//  GTFundD
//
//  Created by MATRIX on 01/12/2017.
//  Copyright © 2017 com.ttd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AXOrder : NSObject

@property (nonatomic, copy) NSString *orderNo;
@property (nonatomic, copy) NSString *orderAmount;
@property (nonatomic, copy) NSString *customerName;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *productNo;
@property (nonatomic, copy) NSString *managerName;
@property (nonatomic, copy) NSString *recordingDate;
@property (nonatomic, copy) NSString *followText;

@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *videoLocalPath;
@property (assign, nonatomic) NSInteger duration;

-(NSString *)videoFullName;
-(NSString *)watermarkString;

@end
