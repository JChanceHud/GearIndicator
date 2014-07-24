//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, SChartAxisTitleStyle, SChartBackedUserSettable, SChartGridStripeStyle, SChartMajorGridlineStyle, SChartTickStyle, UIColor;

@interface SChartAxisStyle : NSObject <NSCopying>
{
    SChartTickStyle *_majorTickStyle;
    SChartTickStyle *_minorTickStyle;
    SChartMajorGridlineStyle *_majorGridLineStyle;
    SChartGridStripeStyle *_gridStripeStyle;
    SChartAxisTitleStyle *_titleStyle;
    SChartBackedUserSettable *_lineColorInternal;
    SChartBackedUserSettable *_lineWidthInternal;
    SChartBackedUserSettable *_interSeriesPaddingInternal;
    SChartBackedUserSettable *_interSeriesSetPaddingInternal;
}

@property(retain, nonatomic) SChartBackedUserSettable *interSeriesSetPaddingInternal; // @synthesize interSeriesSetPaddingInternal=_interSeriesSetPaddingInternal;
@property(retain, nonatomic) SChartBackedUserSettable *interSeriesPaddingInternal; // @synthesize interSeriesPaddingInternal=_interSeriesPaddingInternal;
@property(retain, nonatomic) SChartBackedUserSettable *lineWidthInternal; // @synthesize lineWidthInternal=_lineWidthInternal;
@property(retain, nonatomic) SChartBackedUserSettable *lineColorInternal; // @synthesize lineColorInternal=_lineColorInternal;
@property(retain, nonatomic) SChartAxisTitleStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(retain, nonatomic) SChartGridStripeStyle *gridStripeStyle; // @synthesize gridStripeStyle=_gridStripeStyle;
@property(retain, nonatomic) SChartMajorGridlineStyle *majorGridLineStyle; // @synthesize majorGridLineStyle=_majorGridLineStyle;
@property(retain, nonatomic) SChartTickStyle *minorTickStyle; // @synthesize minorTickStyle=_minorTickStyle;
@property(retain, nonatomic) SChartTickStyle *majorTickStyle; // @synthesize majorTickStyle=_majorTickStyle;
@property(retain, nonatomic) NSNumber *lineWidth; // @dynamic lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @dynamic lineColor;
- (void)supplementStyleFromStyle:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSNumber *interSeriesPadding; // @dynamic interSeriesPadding;
@property(retain, nonatomic) NSNumber *interSeriesSetPadding; // @dynamic interSeriesSetPadding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

