//
//  LTSDK+Call.h
//  LTCallSDK
//
//  Created by Sheng-Tsang Uou on 2020/6/30.
//  Copyright © 2020 LoFTech. All rights reserved.
//

#import <LTCallSDK/LTCallSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface LTSDK(Call)

+ (LTCallCenterManager * _Nullable)getCallCenterManager;

+ (void)cleanCallSDK;
@end

NS_ASSUME_NONNULL_END
