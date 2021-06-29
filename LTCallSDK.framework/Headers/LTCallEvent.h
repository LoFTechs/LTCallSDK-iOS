//
//  LTCallEvent.h
//  LTCallSDK
//
//  Created by shanezhang on 2021/6/10.
//  Copyright © 2021 Sheng-Tsang Uou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LTCallSDK/LTCallEnum.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTCallEvent : NSObject
@property (assign, nonatomic) LTCallEventType callEventType;
@property (strong, nonatomic) NSDictionary *event;
@end

NS_ASSUME_NONNULL_END
