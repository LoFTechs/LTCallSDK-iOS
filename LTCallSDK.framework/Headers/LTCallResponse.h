//
//  LTCallResponse.h
//  LTCallSDK
//
//  Created by shanezhang on 2021/2/3.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LTSDK/LTSDK.h>
#import <LTCallSDK/LTCallNotificationMessage.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTUserCDRResponse : NSObject
@property (nonatomic,assign) LTReturnCode returnCode;
@property (nonatomic,assign) long markTS;
@property (nonatomic,assign) int count;
@property (nonatomic,strong) NSArray<LTCallCDRNotificationMessage *> *cdrMessages;
@end

@interface LTBlockListResponse : NSObject
@property (nonatomic,assign) LTReturnCode returnCode;
@property (nonatomic,strong) NSArray<NSString *> *userIDs;
@end

NS_ASSUME_NONNULL_END
