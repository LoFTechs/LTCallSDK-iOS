//
//  LTCallNotificationMessage.h
//  LTCallSDK
//
//  Created by shanezhang on 2020/9/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LTSDK/LTSDK.h>
#import <LTCallSDK/LTCallOptions.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTCallUserInfo : NSObject
@property (strong, nonatomic) NSString *userID;
@property (strong, nonatomic) NSString *phoneNumber;
@property (strong, nonatomic) NSString *semiUID;
@property (strong, nonatomic) NSString *deviceID;
@property (strong, nonatomic) NSString *nickName;
@property (strong, nonatomic) NSDictionary *extInfo;
@end

@interface LTCallNotificationMessage : LTBaseMessageResponse
@property (strong, nonatomic, readonly) NSString *receiver;
@property (strong, nonatomic, readonly, nullable) LTCallOptions *callOptions;
@property (strong, nonatomic, readonly) LTCallUserInfo *callerInfo;
@property (strong, nonatomic, readonly) LTCallUserInfo *calleeInfo;
@property (assign, nonatomic, readonly) NSTimeInterval sendTime;
- (LTCallNotificationMessage * _Nonnull)init NS_UNAVAILABLE;
+ (LTCallNotificationMessage * _Nonnull)new NS_UNAVAILABLE;
@end

@interface LTCallCDRNotificationMessage : LTBaseMessageResponse
@property (strong, nonatomic, readonly) NSString *receiver;
@property (strong, nonatomic, readonly) NSString *senderID;
@property (assign, nonatomic, readonly) NSTimeInterval sendTime;
@property (strong, nonatomic, readonly) LTCallUserInfo *callerInfo;
@property (strong, nonatomic, readonly) LTCallUserInfo *calleeInfo;
@property (strong, nonatomic, readonly) NSString *caller;
@property (strong, nonatomic, readonly) NSString *callee;
@property (strong, nonatomic, readonly) NSString *callID;
@property (assign, nonatomic, readonly) NSTimeInterval callStartTime;
@property (assign, nonatomic, readonly) NSTimeInterval callEndTime;
@property (strong, nonatomic, readonly) NSString *isrCode;
@property (assign, nonatomic, readonly) int billingSecond;
@property (strong, nonatomic, readonly) NSString *forwarder;
@property (strong, nonatomic, readonly) NSString *msgID;
- (LTCallCDRNotificationMessage * _Nonnull)init NS_UNAVAILABLE;
+ (LTCallCDRNotificationMessage * _Nonnull)new NS_UNAVAILABLE;
@end
NS_ASSUME_NONNULL_END
