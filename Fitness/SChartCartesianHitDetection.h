//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartPointHitDetection.h"

@class SChartCartesianSeries;

@interface SChartCartesianHitDetection : SChartPointHitDetection
{
}

- (double)distanceToCoord:(struct SChartPoint)arg1 fromCoord:(struct SChartPoint)arg2 withScalars:(struct SChartPoint)arg3 inChart:(id)arg4 withDistanceMode:(int)arg5;
- (struct SChartSeriesDistanceInfo)distanceInfoToPoint:(struct SChartPoint)arg1 isOnlySeries:(BOOL)arg2 chart:(id)arg3;
- (struct SChartPoint)distanceScalarsInChart:(id)arg1;
- (void)dealloc;
- (id)initWithSeries:(id)arg1;

// Remaining properties
@property(nonatomic) SChartCartesianSeries *series;

@end

