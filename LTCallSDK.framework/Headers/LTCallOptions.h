//
//  LTCallOptions.h
//  LTCallSDK
//
//  Created by shanezhang on 2020/5/7.
//  Copyright © 2020 李承翰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LTCallSDK/LTCallEnum.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTCallBuilder : NSObject
@property (copy, nonatomic, nullable) NSString *domain;
@property (copy, nonatomic) NSDictionary *extInfo;
@property (assign, nonatomic) LTCallType callType;
@end

@interface LTCallPhoneNumberBuilder : LTCallBuilder
@property (copy, nonatomic, nonnull) NSString *phoneNumber;
@property (copy, nonatomic, nullable) NSString *userID;
@property (copy, nonatomic, nullable) NSString *isrCode;
@end

@interface LTCallUserIDBuilder : LTCallBuilder
@property (copy, nonatomic, nonnull) NSString *userID;
@end

@interface LTCallSemiUIDBuilder : LTCallBuilder
@property (copy, nonatomic, nonnull) NSString *semiUID;
@end

@interface LTCallDeviceIDBuilder : LTCallBuilder
@property (copy, nonatomic, nonnull) NSString *deviceID;
@end

@interface LTGroupCallBuilder : NSObject
@property (copy, nonatomic, nonnull) NSString *groupCallChID;
@property (copy, nonatomic, nonnull) NSArray *groupCallMembers;
@property (copy, nonatomic, nullable) NSString *isrCode;
@end

@interface LTCallOptions : NSObject
@property (strong, nonatomic, nullable) NSString *callID;
@property (strong, nonatomic, nullable) NSString *groupCallID;
@property (strong, nonatomic, readonly) NSString *userID;
@property (strong, nonatomic, readonly) NSString *phoneNumber;
@property (strong, nonatomic, readonly) NSString *semiUID;
@property (strong, nonatomic, readonly) NSString *deviceID;
@property (strong, nonatomic, readonly) NSString *isrCode;
@property (strong, nonatomic, readonly) NSDictionary *extInfo;
@property (assign, nonatomic, readonly) LTCallAccountType voiceAccountType;
@property (assign, nonatomic, readonly) LTCallType callType;

- (LTCallOptions * _Nonnull)init NS_UNAVAILABLE;
+ (LTCallOptions * _Nonnull)new NS_UNAVAILABLE;

+ (LTCallOptions *)initWithPhoneNumberBuilder:(void (^_Nonnull)(LTCallPhoneNumberBuilder *_Nonnull))initBlock;
+ (LTCallOptions *)initWithUserIDBuilder:(void (^_Nonnull)(LTCallUserIDBuilder *_Nonnull))initBlock;
+ (LTCallOptions *)initWithSemiUIDBuilder:(void (^_Nonnull)(LTCallSemiUIDBuilder *_Nonnull))initBlock;
+ (LTCallOptions *)initWithDeviceIDBuilder:(void (^_Nonnull)(LTCallDeviceIDBuilder *_Nonnull))initBlock;
+ (LTCallOptions *)initWithGroupCallBuilder:(void (^_Nonnull)(LTGroupCallBuilder *_Nonnull))initBlock;
+ (LTCallOptions *)initWithGroupCallPhoneNumberBuilder:(void (^_Nonnull)(LTGroupCallBuilder *_Nonnull))initBlock;

@end

NS_ASSUME_NONNULL_END
