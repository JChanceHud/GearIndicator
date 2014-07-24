//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartCrosshairTooltip.h"

@class NSMutableArray;

@interface SChartCrosshairMultiValueTooltip : SChartCrosshairTooltip
{
    NSMutableArray *_labels;
    float _longestLabelTextWidth;
}

@property(nonatomic) float longestLabelTextWidth; // @synthesize longestLabelTextWidth=_longestLabelTextWidth;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
- (void)setResolvedDataPoint:(struct SChartPoint)arg1 fromSeries:(id)arg2 fromChart:(id)arg3;
- (id)mainLabelStringForDataPoint:(id)arg1 onSeries:(id)arg2 withXAxis:(id)arg3 withYAxis:(id)arg4;
- (void)setDataPoint:(id)arg1 fromSeries:(id)arg2 fromChart:(id)arg3;
- (void)updateLongestLabelWidth:(id)arg1;
- (id)createLabel;
- (id)keyValueDisplayPairsForDataPoint:(id)arg1 onSeries:(id)arg2 withXAxis:(id)arg3 withYAxis:(id)arg4;
- (void)collectKeyValPairsForDisplay:(id)arg1 forDataPoint:(id)arg2 axis:(id)arg3 series:(id)arg4;
- (void)layoutContents;
- (int)maxNumberOfLabelsPerTooltipRow;
- (void)setDefaults;
- (void)dealloc;

@end

