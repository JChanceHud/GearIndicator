//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartSeriesStyle.h"

@class NSNumber, UIColor;

@interface SChartOHLCSeriesStyle : SChartSeriesStyle
{
    UIColor *risingColor;
    UIColor *fallingColor;
    UIColor *risingColorGradient;
    UIColor *fallingColorGradient;
    NSNumber *trunkWidth;
    NSNumber *armWidth;
}

@property(retain, nonatomic) NSNumber *armWidth; // @synthesize armWidth;
@property(retain, nonatomic) NSNumber *trunkWidth; // @synthesize trunkWidth;
@property(retain, nonatomic) UIColor *fallingColorGradient; // @synthesize fallingColorGradient;
@property(retain, nonatomic) UIColor *risingColorGradient; // @synthesize risingColorGradient;
@property(retain, nonatomic) UIColor *fallingColor; // @synthesize fallingColor;
@property(retain, nonatomic) UIColor *risingColor; // @synthesize risingColor;
- (void)dealloc;
- (void)supplementStyleFromStyle:(id)arg1;

@end

