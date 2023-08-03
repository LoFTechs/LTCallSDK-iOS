//
//  LTCallCenterManager.h
//  LTCallSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/30.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <LTCallSDK/LTCall.h>
#import <LTCallSDK/LTCallNotificationMessage.h>
#import <LTCallSDK/LTCallResponse.h>

NS_ASSUME_NONNULL_BEGIN


@protocol LTCallCenterDelegate<NSObject>
@optional
- (void)LTCallNotification:(LTCallNotificationMessage *_Nonnull)notificationMessage;
- (void)LTCallCDRNotification:(LTCallCDRNotificationMessage *_Nonnull)notificationMessage;
@end

@interface LTCallCenterManager : NSObject

- (LTCallCenterManager * _Nonnull)init NS_UNAVAILABLE;
+ (LTCallCenterManager * _Nonnull)new NS_UNAVAILABLE;
@property (strong, nonatomic) id<LTCallCenterDelegate> delegate;

#pragma mark - Call account

- (LTCall * _Nullable)startCallWithUserID:(NSString *)userID options:(LTCallOptions *)options setDelegate:(id<LTCallDelegate>)delegate;
- (LTCall * _Nullable)startCallWithNotificationMessage:(LTCallNotificationMessage *)notificationMessage setDelegate:(id<LTCallDelegate>)delegate;
- (LTCall * _Nullable)getCallWithCallID:(NSString *)callID;
- (void)queryCDRWithUserID:(NSString *)userID markTS:(long)markTS afterN:(int)afterN completion:(void (^)(LTUserCDRResponse *response))result;
- (int)getActiveCallCount;

- (void)blockCallWithUserID:(NSString *)userID blockUserIDs:(NSArray<NSString *> *)blockUserIDs completion:(void (^)(LTResponse * _Nonnull response))result;
- (void)unBlockCallWithUserID:(NSString *)userID blockUserIDs:(NSArray<NSString *> *)blockUserIDs completion:(void (^)(LTResponse * _Nonnull response))result;
- (void)getBlockCallListWithUserID:(NSString *)userID completion:(void (^)(LTBlockListResponse *response))result;
@end

NS_ASSUME_NONNULL_END
