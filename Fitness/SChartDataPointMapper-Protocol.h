//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SChartRange;

@protocol SChartDataPointMapper <NSObject>
- (struct CGPoint)coordinateForDataValues:(CDStruct_c3b9c2ee)arg1 glViewFrame:(struct CGRect)arg2 xAxisRange:(SChartRange *)arg3 yAxisRange:(SChartRange *)arg4;
- (CDStruct_c3b9c2ee)dataValuesForCoordinate:(struct CGPoint)arg1 glViewFrame:(struct CGRect)arg2 xAxisRange:(SChartRange *)arg3 yAxisRange:(SChartRange *)arg4;
- (double)pixelValueForDataValue:(id)arg1 glViewFrame:(struct CGRect)arg2 internalAxisRange:(SChartRange *)arg3 axisOrientation:(int)arg4;
- (double)scaleDataValueForPixelValue:(double)arg1 glViewFrame:(struct CGRect)arg2 internalAxisRange:(SChartRange *)arg3 axisOrientation:(int)arg4;
- (double)mapDataValueForPixelValue:(double)arg1 glViewFrame:(struct CGRect)arg2 internalAxisRange:(SChartRange *)arg3 axisOrientation:(int)arg4;
@end

