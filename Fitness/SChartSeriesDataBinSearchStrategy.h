//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SChartOrderedDictionary, SChartSeries;

@interface SChartSeriesDataBinSearchStrategy : NSObject
{
    SChartOrderedDictionary *_dataBins;
    SChartSeries *_parentSeries;
}

@property(nonatomic) SChartSeries *parentSeries; // @synthesize parentSeries=_parentSeries;
@property(nonatomic) SChartOrderedDictionary *dataBins; // @synthesize dataBins=_dataBins;
- (struct SChartSeriesDataBinInfo)dataBinContainingChangedValue:(id)arg1;
- (id)initWithSeries:(id)arg1 dataBins:(id)arg2;

@end

