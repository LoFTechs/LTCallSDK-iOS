//
//  LTCall.h
//  LTCallSDK
//
//  Created by shanezhang on 2020/4/13.
//  Copyright © 2020 李承翰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LTSDK/LTCallKitProxy.h>
#import <LTCallSDK/LTCallEnum.h>
#import <LTCallSDK/LTCallOptions.h>
#import <LTCallSDK/LTCallEvent.h>

NS_ASSUME_NONNULL_BEGIN

@class LTCall;
@protocol LTCallDelegate <NSObject>
@optional
- (void)LTCallStateRegistered:(LTCall *_Nonnull)call;
- (void)LTCallStateConnected:(LTCall *_Nonnull)call;
- (void)LTCallStateWarning:(LTCall *_Nonnull)call statusCode:(LTCallStatusCode)statusCode;
- (void)LTCallStateTerminated:(LTCall *_Nullable)call statusCode:(LTCallStatusCode)statusCode;
- (void)LTCallMediaStateChanged:(LTCall *_Nonnull)call mediaType:(LTMediaType)mediaType;
- (void)LTCallConnectDuration:(LTCall *_Nonnull)call duration:(long)sec;
- (void)LTCallEvent:(LTCall *_Nonnull)call callEvent:(LTCallEvent *)event;

@end

@interface LTCall : NSObject<LTCallKitDelegate>
@property (strong, nonatomic, nullable) id<LTCallDelegate> delegate;
@property (strong, nonatomic, nullable) NSString *callID;
@property (strong, nonatomic, nullable) NSString *groupCallID;
@property (strong, nonatomic, readonly) NSString *accountUserID;
@property (assign, nonatomic, readonly) LTCallType callType;
@property (assign, nonatomic) LTCallState callState;
@property (strong, nonatomic, readonly) LTCallOptions *options;
@property (strong, nonatomic) NSString *debugMsg;

- (LTCall * _Nonnull)init NS_UNAVAILABLE;
+ (LTCall * _Nonnull)new NS_UNAVAILABLE;

#pragma mark - call operation

- (void)acceptCall;
- (void)hangUpCall;
- (void)busyCall;
- (void)reinviteGroupCall;
- (BOOL)sendMessage:(NSString *)message;

#pragma mark - audio session

- (void)activateAudioSession;
- (void)deactivateAudioSession;

#pragma mark - video session

- (void)activateVideoSession;

#pragma mark - media

- (NSArray *)getAvailableAudioRoutes;
- (void)setAudioRoute:(LTAudioRoute)audioRoute;
- (LTAudioRoute)getCurrentAudioRoute;

- (void)setCallMuted:(BOOL)onMute;
- (BOOL)isCallMuted;

- (void)setCallHeld:(BOOL)onHold;
- (BOOL)isCallHeld;

- (void)sendDTMF:(NSString *)dtmfCode playTone:(BOOL)playTone;

#pragma mark - video

- (void)setRemoteVideoView:(UIView *)remoteVideoView;
- (void)setLocalVideoView:(UIView *)localVideoView;

- (void)switchCamera:(LTCameraType)cameraType;
- (LTCameraType)getCurrentCameraType;

- (void)disableCamera:(BOOL)disable;
- (BOOL)isCameraDisabled;

@end

NS_ASSUME_NONNULL_END
