//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartCartesianSeries.h"

@interface SChartBarColumnSeries : SChartCartesianSeries
{
    int orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation;
- (id)heightOfDataPointAtIndex:(int)arg1 onChart:(id)arg2;
- (id)widthOfDataPointAtIndex:(int)arg1 onChart:(id)arg2;
- (id)centreYOfDataPointAtIndex:(int)arg1 onChart:(id)arg2;
- (id)centreXOfDataPointAtIndex:(int)arg1 onChart:(id)arg2;
- (id)visibleRangeOnAxis:(id)arg1;
- (double)dataValueAdjustForAxis:(id)arg1;
- (void)drawBin:(id)arg1 withDrawer:(id)arg2 withGLBaseline:(float)arg3 andGLTranslation:(const CDStruct_265c7ca9 *)arg4 currentRenderIndexDict:(id)arg5;
- (id)emptyRenderIndexDict;
- (void)mapStackedDataPoint:(id)arg1 changedAxis:(id)arg2 measuredAxis:(id)arg3 offsetValue:(double)arg4;
- (id)lowDataPointToMatchDataPoint:(id)arg1 offsetValue:(double)arg2 changedAxis:(id)arg3 measuredAxis:(id)arg4;
- (void)mapDataPoint:(id)arg1 onXAxis:(id)arg2 andYAxis:(id)arg3;

@end

