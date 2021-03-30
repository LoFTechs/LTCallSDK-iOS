//
//  JKVoiceNotificationMessage.h
//  JKVoiceSDK
//
//  Created by shanezhang on 2020/9/21.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JKSDK/JKSDK.h>
#import <JKVoiceSDK/JKVoiceCallOptions.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKCallUserInfo : NSObject
@property (strong, nonatomic) NSString *userID;
@property (strong, nonatomic) NSString *phoneNumber;
@property (strong, nonatomic) NSString *semiUID;
@property (strong, nonatomic) NSString *deviceID;
@property (strong, nonatomic) NSString *nickName;
@property (strong, nonatomic) NSDictionary *extInfo;
@end

@interface JKVoiceNotificationMessage : JKBaseMessageResponse
@property (strong, nonatomic, readonly) NSString *receiver;
@property (strong, nonatomic, readonly, nullable) JKVoiceCallOptions *voiceCallOptions;
@property (strong, nonatomic, readonly) JKCallUserInfo *callerInfo;
@property (strong, nonatomic, readonly) JKCallUserInfo *calleeInfo;
@property (assign, nonatomic, readonly) NSTimeInterval sendTime;
- (JKVoiceNotificationMessage * _Nonnull)init NS_UNAVAILABLE;
+ (JKVoiceNotificationMessage * _Nonnull)new NS_UNAVAILABLE;
@end

@interface JKVoiceCDRNotificationMessage : JKBaseMessageResponse
@property (strong, nonatomic, readonly) NSString *receiver;
@property (strong, nonatomic, readonly) NSString *senderID;
@property (assign, nonatomic, readonly) NSTimeInterval sendTime;
@property (strong, nonatomic, readonly) JKCallUserInfo *callerInfo;
@property (strong, nonatomic, readonly) JKCallUserInfo *calleeInfo;
@property (strong, nonatomic, readonly) NSString *caller;
@property (strong, nonatomic, readonly) NSString *callee;
@property (strong, nonatomic, readonly) NSString *callID;
@property (assign, nonatomic, readonly) NSTimeInterval callStartTime;
@property (assign, nonatomic, readonly) NSTimeInterval callEndTime;
@property (strong, nonatomic, readonly) NSString *isrCode;
@property (assign, nonatomic, readonly) int billingSecond;
@property (strong, nonatomic, readonly) NSString *forwarder;
@property (strong, nonatomic, readonly) NSString *msgID;
- (JKVoiceCDRNotificationMessage * _Nonnull)init NS_UNAVAILABLE;
+ (JKVoiceCDRNotificationMessage * _Nonnull)new NS_UNAVAILABLE;
@end
NS_ASSUME_NONNULL_END
