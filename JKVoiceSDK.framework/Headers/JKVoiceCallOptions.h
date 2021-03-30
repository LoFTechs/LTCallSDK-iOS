//
//  JKVoiceCallOptions.h
//  JuikerDev
//
//  Created by shanezhang on 2020/5/7.
//  Copyright © 2020 李承翰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JKVoiceSDK/JKVoiceEnum.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKVoiceCallBuilder : NSObject
@property (copy, nonatomic, nullable) NSString *domain;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (assign, nonatomic) JKVoiceCallType voiceCallType;
@end

@interface JKVoiceCallPhoneNumberBuilder : JKVoiceCallBuilder
@property (copy, nonatomic, nonnull) NSString *phoneNumber;
@property (copy, nonatomic, nullable) NSString *userID;
@property (copy, nonatomic, nullable) NSString *isrCode;
@end

@interface JKVoiceCallUserIDBuilder : JKVoiceCallBuilder
@property (copy, nonatomic, nonnull) NSString *userID;
@end

@interface JKVoiceCallSemiUIDBuilder : JKVoiceCallBuilder
@property (copy, nonatomic, nonnull) NSString *semiUID;
@end

@interface JKVoiceCallDeviceIDBuilder : JKVoiceCallBuilder
@property (copy, nonatomic, nonnull) NSString *deviceID;
@end

@interface JKGroupCallBuilder : NSObject
@property (copy, nonatomic, nonnull) NSString *groupCallChID;
@property (copy, nonatomic, nonnull) NSArray *groupCallMembers;
@property (copy, nonatomic, nullable) NSString *isrCode;
@end

@interface JKVoiceCallOptions : NSObject
@property (strong, nonatomic) NSString *callID;
@property (strong, nonatomic) NSString *groupCallID;
@property (strong, nonatomic, readonly) NSString *userID;
@property (strong, nonatomic, readonly) NSString *phoneNumber;
@property (strong, nonatomic, readonly) NSString *semiUID;
@property (strong, nonatomic, readonly) NSString *deviceID;
@property (strong, nonatomic, readonly) NSString *isrCode;
@property (strong, nonatomic, readonly) NSDictionary *extInfo;
@property (assign, nonatomic, readonly) JKVoiceAccountType voiceAccountType;
@property (assign, nonatomic, readonly) JKVoiceCallType voiceCallType;

- (JKVoiceCallOptions * _Nonnull)init NS_UNAVAILABLE;
+ (JKVoiceCallOptions * _Nonnull)new NS_UNAVAILABLE;

+ (JKVoiceCallOptions *)initWithPhoneNumberBuilder:(void (^_Nonnull)(JKVoiceCallPhoneNumberBuilder *_Nonnull))initBlock;
+ (JKVoiceCallOptions *)initWithUserIDBuilder:(void (^_Nonnull)(JKVoiceCallUserIDBuilder *_Nonnull))initBlock;
+ (JKVoiceCallOptions *)initWithSemiUIDBuilder:(void (^_Nonnull)(JKVoiceCallSemiUIDBuilder *_Nonnull))initBlock;
+ (JKVoiceCallOptions *)initWithDeviceIDBuilder:(void (^_Nonnull)(JKVoiceCallDeviceIDBuilder *_Nonnull))initBlock;
+ (JKVoiceCallOptions *)initWithGroupCallBuilder:(void (^_Nonnull)(JKGroupCallBuilder *_Nonnull))initBlock;
+ (JKVoiceCallOptions *)initWithGroupCallPhoneNumberBuilder:(void (^_Nonnull)(JKGroupCallBuilder *_Nonnull))initBlock;

@end

NS_ASSUME_NONNULL_END
