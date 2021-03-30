//
//  JKVoiceEnum.h
//  JuikerDev
//
//  Created by shanezhang on 2020/5/4.
//  Copyright © 2020 李承翰. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,JuikerCallMode) {
    Juiker_Audio_Mode = 0,
    Juiker_Video_Mode = 1,
    Juiker_Audio_Group_Call_Mode = 2
};

typedef NS_ENUM(NSInteger, JKVoiceAccountType) {
    JKVoiceAccountTypeNull,
    JKVoiceAccountTypeDeviceID,
    JKVoiceAccountTypeUserID,
    JKVoiceAccountTypeSemiUID,
    JKVoiceAccountTypePhoneNumber
};

typedef NS_ENUM(NSInteger, JKVoiceCallType) {
    JKVoiceCallTypeOutgoingCall,
    JKVoiceCallTypeIncomingCall,
    JKVoiceCallTypeGroupCall
};

typedef NS_ENUM(NSInteger, JKVoiceCallState) {
    JKVoiceCallStateInit,
    JKVoiceCallStateRegistered,
    JKVoiceCallStateConnected,
    JKVoiceCallStateTerminated
};

typedef NS_ENUM(NSInteger, JKVoiceStatusCode) {
    JKVoiceStatusCodeOK = 0,
    JKVoiceStatusCodeHangUp = 1,
    JKVoiceStatusCodeMiss = 2,
    JKVoiceStatusCodeDecline = 4,
    JKVoiceStatusCodeBusy = 5,
    JKVoiceStatusCodeAnsweredElsewhere = 6,
    JKVoiceStatusCodeDeclinedElsewhere = 7,
    JKVoiceStatusCodeCalleeNotFound = 8,
    JKVoiceStatusCodeBlockCall = 9,
    JKVoiceStatusCodeNoRecordPermission = 101,
    JKVoiceStatusCodeRegisterForbidden = 102,
    JKVoiceStatusCodeNetworkDisconnect = 103,
    JKVoiceStatusCodeUnreachtable = 104,
    JKVoiceStatusCodeOperationNotAvailable = 105,
    JKVoiceStatusCodeCalleeAtCallerDevice = 111,
    JKVoiceStatusCodeGroupCallMemberAtAdminDevice = 112,
    JKVoiceStatusCodeErrorOptions = 201,
    JKVoiceStatusCodeErrorRegisterFailed = 202,
    JKVoiceStatusCodeErrorConnection = 203,
    JKVoiceStatusCodeErrorNoVoicePacket = 204,
    JKVoiceStatusCodeErrorExtInfoLength = 205,
    JKVoiceStatusCodeErrorNoSDKPermission = 210,
    JKVoiceStatusCodeErrorNoValidUser = 211,
    JKVoiceStatusCodeErrorGroupCallNoChannel = 216,
    JKVoiceStatusCodeErrorGroupCallInsufficientBalance = 217,
    JKVoiceStatusCodeErrorGroupCallTooManyInvitee = 218
};

typedef NS_ENUM(NSInteger, JKMediaType) {
    JKMediaTypeAudioRoute,
    JKMediaTypeCallMuted,
    JKMediaTypeCallHeld
};

typedef NS_ENUM(NSInteger, JKAudioRoute) {
    JKAudioRouteBuiltin,
    JKAudioRouteSpeaker,
    JKAudioRouteHeadphones,
    JKAudioRouteBluetooth
};


NS_ASSUME_NONNULL_END
