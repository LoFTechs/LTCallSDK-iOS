//
//  LTCallEnum.h
//  LTCallSDK
//
//  Created by shanezhang on 2020/5/4.
//  Copyright © 2020 李承翰. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,LTCallMode) {
    LTCallModeVoice = 0,
    LTCallModeVideo = 1
};

typedef NS_ENUM(NSInteger, LTCallAccountType) {
    LTCallAccountTypeNull,
    LTCallAccountTypeDeviceID,
    LTCallAccountTypeUserID,
    LTCallAccountTypeSemiUID,
    LTCallAccountTypePhoneNumber
};


typedef NS_ENUM(NSInteger, LTCallType) {
    LTCallTypeOutgoingCall,
    LTCallTypeIncomingCall,
    LTCallTypeGroupCall
};

typedef NS_ENUM(NSInteger, LTCallState) {
    LTCallStateInit,
    LTCallStateRegistered,
    LTCallStateConnected,
    LTCallStateTerminated
};

typedef NS_ENUM(NSInteger, LTCallStatusCode) {
    LTCallStatusCodeOK = 0,
    LTCallStatusCodeHangUp = 1,
    LTCallStatusCodeMiss = 2,
    LTCallStatusCodeDecline = 4,
    LTCallStatusCodeBusy = 5,
    LTCallStatusCodeAnsweredElsewhere = 6,
    LTCallStatusCodeDeclinedElsewhere = 7,
    LTCallStatusCodeCalleeNotFound = 8,
    LTCallStatusCodeBlockCall = 9,
    LTCallStatusCodeNoRecordPermission = 101,
    LTCallStatusCodeRegisterForbidden = 102,
    LTCallStatusCodeNetworkDisconnect = 103,
    LTCallStatusCodeUnreachtable = 104,
    LTCallStatusCodeOperationNotAvailable = 105,
    LTCallStatusCodeOnlySupportVideoMode = 106,
    LTCallStatusCodeNoCameraPermission = 107,
    LTCallStatusCodeCalleeAtCallerDevice = 111,
    LTCallStatusCodeGroupCallMemberAtAdminDevice = 112,
    LTCallStatusCodeErrorOptions = 201,
    LTCallStatusCodeErrorRegisterFailed = 202,
    LTCallStatusCodeErrorConnection = 203,
    LTCallStatusCodeErrorNoVoicePacket = 204,
    LTCallStatusCodeErrorExtInfoLength = 205,
    LTCallStatusCodeErrorCalleeNotSupportVideo = 206,
    LTCallStatusCodeErrorNoSDKPermission = 210,
    LTCallStatusCodeErrorNoValidUser = 211,
    LTCallStatusCodeErrorGroupCallNoChannel = 216,
    LTCallStatusCodeErrorGroupCallInsufficientBalance = 217,
    LTCallStatusCodeErrorGroupCallTooManyInvitee = 218
};

typedef NS_ENUM(NSInteger, LTMediaType) {
    LTMediaTypeAudioRoute,
    LTMediaTypeCallMuted,
    LTMediaTypeCallHeld,
    LTMediaTypeCameraEnable,
    LTMediaTypeCameraSwitched
};

typedef NS_ENUM(NSInteger, LTCallEventType) {
    LTCallEventTypeMute,
    LTCallEventTypeCameraDisable
};

typedef NS_ENUM(NSInteger, LTAudioRoute) {
    LTAudioRouteBuiltin,
    LTAudioRouteSpeaker,
    LTAudioRouteHeadphones,
    LTAudioRouteBluetooth
};

typedef NS_ENUM(NSInteger, LTCameraType) {
    LTCameraTypeFront,
    LTCameraTypeBack
};

NS_ASSUME_NONNULL_END
