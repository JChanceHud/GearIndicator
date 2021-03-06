//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSError, NSTimeZone;

@protocol WFDisplayControlPointChDelegate <NSObject>
- (void)displayControlPointDidReponsdPlaySoundWithBinaryKey:(unsigned char)arg1 source:(unsigned char)arg2 error:(NSError *)arg3;
- (void)displayControlPointDidRespondSleepOnDisconnect:(BOOL)arg1 error:(NSError *)arg2;
- (void)displayControlPointDidRespondDateFormat:(int)arg1 timeFormat:(int)arg2 startDayOfWeek:(int)arg3 watchfaceStyle:(int)arg4 error:(NSError *)arg5;
- (void)displayControlPointDidRespondAutoPageScrollWithDelay:(double)arg1 error:(NSError *)arg2;
- (void)displayControlPointDidRespondSupportedConfigVersions:(NSArray *)arg1 error:(NSError *)arg2;
- (void)displayControlPointDidRespondDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 error:(NSError *)arg3;
- (void)displayControlPointDidRespondPageVisableWithBinaryKey:(unsigned char)arg1 error:(NSError *)arg2;
- (void)displayControlPointDidRespondDisplayInverted:(BOOL)arg1 error:(NSError *)arg2;
- (void)displayControlPointDidRespondBacklightOn:(BOOL)arg1 error:(NSError *)arg2;
@end

