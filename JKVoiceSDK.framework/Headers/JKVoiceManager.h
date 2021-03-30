//
//  JKVoiceManager.h
//  JKSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/30.
//  Copyright © 2020 Sheng-Tsang Uou. All rights reserved.
//

#import <JKVoiceSDK/JKVoiceCall.h>
#import <JKVoiceSDK/JKVoiceNotificationMessage.h>
#import <JKVoiceSDK/JKVoiceResponse.h>

NS_ASSUME_NONNULL_BEGIN


@protocol JKVoiceManagerDelegate<NSObject>
@optional
- (void)JKVoiceCallNotification:(JKVoiceNotificationMessage *_Nonnull)notificationMessage;
- (void)JKVoiceCDRNotification:(JKVoiceCDRNotificationMessage *_Nonnull)notificationMessage;
@end

@interface JKVoiceManager : NSObject

- (JKVoiceManager * _Nonnull)init NS_UNAVAILABLE;
+ (JKVoiceManager * _Nonnull)new NS_UNAVAILABLE;
@property (weak, nonatomic) id<JKVoiceManagerDelegate> delegate;

#pragma mark - Call account

- (JKVoiceCall *)startCallWithUserID:(NSString *)userID options:(JKVoiceCallOptions *)options setDelegate:(id<JKVoiceCallDelegate>)delegate;
- (JKVoiceCall *)startCallWithNotificationMessage:(JKVoiceNotificationMessage *)notificationMessage setDelegate:(id<JKVoiceCallDelegate>)delegate;
- (JKVoiceCall *)getVoiceCallWithCallID:(NSString *)callID;
- (void)queryCDRWithUserID:(NSString *)userID markTS:(long)markTS afterN:(int)afterN completion:(void (^)(JKUserCDRResponse *response))result;
- (int)getActiveCallCount;

- (void)blockCallWithUserID:(NSString *)userID blockUserIDs:(NSArray<NSString *> *)blockUserIDs completion:(void (^)(JKResponse * _Nonnull response))result;
- (void)unBlockCallWithUserID:(NSString *)userID blockUserIDs:(NSArray<NSString *> *)blockUserIDs completion:(void (^)(JKResponse * _Nonnull response))result;
- (void)getBlockCallListWithUserID:(NSString *)userID completion:(void (^)(JKBlockListResponse *response))result;
@end

NS_ASSUME_NONNULL_END
