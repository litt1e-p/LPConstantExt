//
//  LPSystemVersionConstant.h
//
//  Created by litt1e-p on 15/12/23.
//  Copyright © 2015年 litt1e-p. All rights reserved.
//

#ifndef LPSystemVersionConstant_h
#define LPSystemVersionConstant_h

#define IOS9_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"9.0"] != NSOrderedAscending )
#define IOS8_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"8.0"] != NSOrderedAscending )
#define IOS7_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )
#define IOS6_OR_LATER	( [[[UIDevice currentDevice] systemVersion] compare:@"6.0"] != NSOrderedAscending )

#endif /* LPSystemVersionConstant_h */
