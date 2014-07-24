//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SChartSeriesGroup.h"

@class NSMutableArray, SChartAxis;

@interface SChartMappedSeriesGroup : NSObject <SChartSeriesGroup>
{
    Class class;
    int orientation;
    NSMutableArray *groupedSeries;
    BOOL _aSeriesIsEntering;
    BOOL _aSeriesIsExiting;
    id <SChartErrorHandler> _errorHandler;
    SChartAxis *_xAxis;
    SChartAxis *_yAxis;
}

@property(nonatomic) BOOL aSeriesIsExiting; // @synthesize aSeriesIsExiting=_aSeriesIsExiting;
@property(nonatomic) BOOL aSeriesIsEntering; // @synthesize aSeriesIsEntering=_aSeriesIsEntering;
@property(retain, nonatomic) SChartAxis *yAxis; // @synthesize yAxis=_yAxis;
@property(retain, nonatomic) SChartAxis *xAxis; // @synthesize xAxis=_xAxis;
@property(retain, nonatomic) id <SChartErrorHandler> errorHandler; // @synthesize errorHandler=_errorHandler;
- (void)configure;
- (id)visibleRangeForAxis:(id)arg1;
- (BOOL)requiresRecalculation;
- (BOOL)drawSeriesOnChart:(id)arg1;
- (BOOL)drawSingleSeries:(id)arg1 onChart:(id)arg2;
- (double)baselineForSeries:(id)arg1;
- (CDStruct_265c7ca9)translationForChart:(id)arg1;
- (void)mapDataPoints:(id)arg1 inSingleSeries:(id)arg2;
- (void)mapSingleSeries:(id)arg1;
- (void)mapSeries;
- (void)mapDataPoints:(id)arg1 inSeries:(id)arg2;
- (id)groupedSeries;
- (void)addSeries:(id)arg1;
- (int)seriesOrientation;
- (Class)seriesClass;
- (void)dealloc;
- (id)initWithSeries:(id)arg1 andXAxis:(id)arg2 andYAxis:(id)arg3 errorHandler:(id)arg4;
- (id)initWithXAxis:(id)arg1 andYAxis:(id)arg2 errorHandler:(id)arg3;

@end

