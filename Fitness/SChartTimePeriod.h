//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDate, SChartDateFrequency;

@interface SChartTimePeriod : NSObject
{
    NSDate *_start;
    SChartDateFrequency *_length;
    NSCalendar *_cal;
}

- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (id)description;
- (id)periodEnd;
- (id)periodLength;
- (id)periodStart;
- (void)dealloc;
- (id)initWithStart:(id)arg1 andLength:(id)arg2;

@end
