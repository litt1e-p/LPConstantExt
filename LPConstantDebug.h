//
//  LPConstantDebug.h
//
//  Created by litt1e-p on 15/12/18.
//  Copyright © 2015年 litt1e-p. All rights reserved.
//

#ifndef LPConstantDebug_h
#define LPConstantDebug_h

#if DEBUG
#define NSLog(FORMAT, ...) {\
NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];\
[dateFormatter setDateStyle:NSDateFormatterMediumStyle];\
[dateFormatter setTimeStyle:NSDateFormatterShortStyle];\
[dateFormatter setDateFormat:@"Y/m/d HH:mm:ss:SSSSSS"];\
NSString *str = [dateFormatter stringFromDate:[NSDate date]];\
fprintf(stderr,"\n%s 📌%s🎈%s\n", [str UTF8String], __FUNCTION__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);\
}
#else
#define NSLog(FORMAT, ...) nil
#endif


#endif /* LPConstantDebug_h */
