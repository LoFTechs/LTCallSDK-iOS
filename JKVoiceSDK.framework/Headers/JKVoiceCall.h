//
//  JKVoiceCall.h
//  JuikerDev
//
//  Created by shanezhang on 2020/4/13.
//  Copyright © 2020 李承翰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JKSDK/JKCallKitProxy.h>
#import <JKVoiceSDK/JKVoiceEnum.h>
#import <JKVoiceSDK/JKVoiceCallOptions.h>

NS_ASSUME_NONNULL_BEGIN

@class JKVoiceCall;
@protocol JKVoiceCallDelegate <NSObject>
@optional
- (void)JKVoiceCallStateRegistered:(JKVoiceCall *_Nonnull)voiceCall;
- (void)JKVoiceCallStateConnected:(JKVoiceCall *_Nonnull)voiceCall;
- (void)JKVoiceCallStateWarning:(JKVoiceCall *_Nonnull)voiceCall statusCode:(JKVoiceStatusCode)statusCode;
- (void)JKVoiceCallStateTerminated:(JKVoiceCall *_Nullable)voiceCall statusCode:(JKVoiceStatusCode)statusCode;
- (void)JKVoiceCallMediaStateChanged:(JKVoiceCall *_Nonnull)voiceCall mediaType:(JKMediaType)mediaType;
- (void)JKVoiceCallConnectDuration:(JKVoiceCall *_Nonnull)voiceCall duration:(long)sec;
@end

@interface JKVoiceCall : NSObject<JKCallKitDelegate>
@property (strong, nonatomic,nullable) id<JKVoiceCallDelegate> delegate;
@property (strong, nonatomic) NSString *callID;
@property (strong, nonatomic) NSString *groupCallID;
@property (strong, nonatomic, readonly) NSString *accountUserID;
@property (assign, nonatomic, readonly) JKVoiceCallType voiceCallType;
@property (assign, nonatomic) JKVoiceCallState voiceCallState;
@property (strong, nonatomic, readonly) JKVoiceCallOptions *options;
@property (strong, nonatomic) NSString *debugMsg;

- (JKVoiceCall * _Nonnull)init NS_UNAVAILABLE;
+ (JKVoiceCall * _Nonnull)new NS_UNAVAILABLE;

#pragma mark - call operation

- (void)acceptCall;
- (void)hangUpCall;
- (void)busyCall;
- (void)reinviteGroupCall;
- (BOOL)sendMessage:(NSString *)message;

#pragma mark - audio session

- (void)activateAudioSession;
- (void)deactivateAudioSession;

#pragma mark - media

- (NSArray *)getAvailableAudioRoutes;
- (void)setAudioRoute:(JKAudioRoute)audioRoute;
- (JKAudioRoute)getCurrentAudioRoute;

- (void)setCallMuted:(BOOL)onMute;
- (BOOL)isCallMuted;

- (void)setCallHeld:(BOOL)onHold;
- (BOOL)isCallHeld;

- (void)sendDTMF:(NSString *)dtmfCode playTone:(BOOL)playTone;

@end

NS_ASSUME_NONNULL_END
