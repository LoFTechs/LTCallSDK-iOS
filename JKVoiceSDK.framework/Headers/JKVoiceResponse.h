//
//  JKVoiceResponse.h
//  JKVoiceSDK
//
//  Created by shanezhang on 2021/2/3.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JKSDK/JKSDK.h>
#import <JKVoiceSDK/JKVoiceNotificationMessage.h>

NS_ASSUME_NONNULL_BEGIN

@interface JKUserCDRResponse : NSObject
@property (nonatomic,assign) JKReturnCode returnCode;
@property (nonatomic,assign) long markTS;
@property (nonatomic,assign) int count;
@property (nonatomic,strong) NSArray<JKVoiceCDRNotificationMessage *> *cdrMessages;
@end

@interface JKBlockListResponse : NSObject
@property (nonatomic,assign) JKReturnCode returnCode;
@property (nonatomic,strong) NSArray<NSString *> *userIDs;
@end

NS_ASSUME_NONNULL_END
