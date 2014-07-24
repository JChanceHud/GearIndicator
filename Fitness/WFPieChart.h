//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFChart.h"

#import "SChartDatasource.h"
#import "SChartDelegate.h"

@class ShinobiChart;

@interface WFPieChart : WFChart <SChartDatasource, SChartDelegate>
{
    id <WFPieChartDataSource> _dataSource;
    ShinobiChart *_chart;
}

@property(retain, nonatomic) ShinobiChart *chart; // @synthesize chart=_chart;
@property(nonatomic) __weak id <WFPieChartDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)sChart:(id)arg1 dataPointAtIndex:(int)arg2 forSeriesAtIndex:(int)arg3;
- (int)sChart:(id)arg1 numberOfDataPointsForSeriesAtIndex:(int)arg2;
- (id)sChart:(id)arg1 seriesAtIndex:(int)arg2;
- (int)numberOfSeriesInSChart:(id)arg1;
- (void)sChart:(id)arg1 toggledSelectionForRadialPoint:(id)arg2 inSeries:(id)arg3 atPixelCoordinate:(struct CGPoint)arg4;
- (void)didReceiveMemoryWarning;
- (void)buildChart;

@end

