//
//  TtdVideoEngineKit.h
//  TtdVideoEngineKit
//
//  Created by 林英彬 on 2018/3/12.
//  Copyright © 2018年 linyingbin. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for TtdVideoEngineKit.
FOUNDATION_EXPORT double TtdVideoEngineKitVersionNumber;

//! Project version string for TtdVideoEngineKit.
FOUNDATION_EXPORT const unsigned char TtdVideoEngineKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TtdVideoEngineKit/PublicHeader.h>
#import <Foundation/Foundation.h>
#import "TTDEnumerates.h"
#import "AXOrder.h"

@class TtdVideoEngineKit;
@protocol TtdVideoEngineKitDelegate <NSObject>
@optional


/**
 稍后上传回调

 @param engine TtdVideoEngineKit 单例
 @param filepath 视频本地保存路径
 @param orderNo 预约订单号
 */
- (void) ttdEngineDidUploadLater:(TtdVideoEngineKit *)engine Path:(NSString *)filepath OrderNo:(NSString *)orderNo;


/**
 上传成功回调

 @param engine TtdVideoEngineKit 单例
 @param orderNo 预约订单号
 */
- (void) ttdEngineDidUploadSuccess:(TtdVideoEngineKit *)engine OrderNo:(NSString *)orderNo;

@end


@interface TtdVideoEngineKit : NSObject


/**
 稍后上传回调
 */
@property (copy) void(^uploadLaterBlock)(NSString* orderNo, NSString* filepath) ;

/**
 上传成功回调
 */
@property (copy) void(^uploadSuccessBlock)(NSString* orderNo) ;

/**
 远程客服双录结束回调
 */
@property (copy) void(^remoteRecordEndBlock)(NSString* orderNo, BOOL success) ;

/**
 初始化 TtdVideoEngineKit
    注：sdk会弱引用delegate，重复设置delegate，上一个会失效

 @param delegate TtdVideoEngineKitDelegate 的实例
 @return TtdVideoEngineKit 的单例
 */
+ (instancetype)sharedTtdEngineWithDelegate:(id<TtdVideoEngineKitDelegate>)delegate;


/**
 配置上传服务器地址

 @param serviceAddr 服务器地址
 @return 成功返回0
 */
- (int) setUploadServerAddr:(NSString *)serviceAddr;

/**
 配置妥妥递服务地址

 @param serviceAddr 服务地址
 @return 成功返回0
 */
-(int) setServerAddr:(NSString *)serviceAddr;

/**
 设置视频质量，默认TTDVideoProfile240P_2

 @param profile TTDVideoProfile 枚举
 @return 成功返回0
 */
- (int) setVideoProfile:(TTDVideoProfile)profile;


/**
 开始本地录制方法
    注：开始前请确认该orderNo没有本地视频数据，如果有会覆盖保存

 @param order AXOrder对象
 @return 成功返回0
 */
- (int) startRecordLocalWithOrder:(AXOrder *)order;


/**
 开始自助双录
    注：开始前请确认该orderNo没有本地视频数据，如果有会覆盖保存

 @param order AXOrder对象 followText必传
 @return 成功返回0
 */
- (int) startRecordSelfWithOrder:(AXOrder *)order;


/**
 开始远程双录，进入排队页面

 @param order AXOrder对象
 @return 成功返回0
 */
- (int)startRecordRemoteWithOrder:(AXOrder *)order;

/**
 根据订单进入本地双录预览页面

 @param orderNo 预约订单号
 @return 成功返回0
 */
- (int) playLocalVideoWithOrderNo:(NSString *) orderNo;


/**
 根据预约号查询本地双录信息

 @param orderNo 预约订单号
 @return 订单信息
 */
- (AXOrder *) queryLocalVideoWithOrderNo:(NSString *) orderNo;

/**
 查询SDK版本号

 @return SDK版本号字符串
 */
+ (NSString *)getSdkVersion;

@end
