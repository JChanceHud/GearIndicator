//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartDataPoint.h"

@class NSMutableDictionary;

@interface SChartMultiValueDataPoint : SChartDataPoint
{
    NSMutableDictionary *_values;
}

@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
- (void)dealloc;
- (id)sChartValueForKey:(id)arg1;
- (id)initWithInternal:(id)arg1 withXAxis:(id)arg2 andYAxis:(id)arg3;
- (id)initWithValues:(id)arg1 transformUsingAxis:(id)arg2;
- (void)setValues:(id)arg1 transformUsingAxis:(id)arg2;
- (id)init;

@end

