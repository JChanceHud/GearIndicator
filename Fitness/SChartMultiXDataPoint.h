//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartDataPoint.h"

#import "SChartData.h"

@class NSMutableDictionary, SChartMultiValueDataPoint;

@interface SChartMultiXDataPoint : SChartDataPoint <SChartData>
{
    SChartMultiValueDataPoint *_internalMultiValueDP;
}

- (void)dealloc;
- (id)sChartXValueForKey:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *xValues; // @dynamic xValues;
- (id)sChartXValue;
- (id)initWithInternal:(id)arg1 withXAxis:(id)arg2 andYAxis:(id)arg3;
- (id)init;

// Remaining properties
@property(nonatomic) int sChartDataPointIndex;

@end

