//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, SChartBackedUserSettable, UIColor, UIFont;

@interface SChartTickStyle : NSObject <NSCopying>
{
    SChartBackedUserSettable *_showTicksInternal;
    SChartBackedUserSettable *_showLabelsInternal;
    SChartBackedUserSettable *_tickLabelOrientationInternal;
    SChartBackedUserSettable *_lineColorInternal;
    SChartBackedUserSettable *_lineWidthInternal;
    SChartBackedUserSettable *_lineLengthInternal;
    SChartBackedUserSettable *_labelColorInternal;
    SChartBackedUserSettable *_labelFontInternal;
    SChartBackedUserSettable *_textAlignmentInternal;
    SChartBackedUserSettable *_labelTextShadowColorInternal;
    SChartBackedUserSettable *_tickGapInternal;
}

@property(retain, nonatomic) SChartBackedUserSettable *tickGapInternal; // @synthesize tickGapInternal=_tickGapInternal;
@property(retain, nonatomic) SChartBackedUserSettable *labelTextShadowColorInternal; // @synthesize labelTextShadowColorInternal=_labelTextShadowColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *textAlignmentInternal; // @synthesize textAlignmentInternal=_textAlignmentInternal;
@property(retain, nonatomic) SChartBackedUserSettable *labelFontInternal; // @synthesize labelFontInternal=_labelFontInternal;
@property(retain, nonatomic) SChartBackedUserSettable *labelColorInternal; // @synthesize labelColorInternal=_labelColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *lineLengthInternal; // @synthesize lineLengthInternal=_lineLengthInternal;
@property(retain, nonatomic) SChartBackedUserSettable *lineWidthInternal; // @synthesize lineWidthInternal=_lineWidthInternal;
@property(retain, nonatomic) SChartBackedUserSettable *lineColorInternal; // @synthesize lineColorInternal=_lineColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *tickLabelOrientationInternal; // @synthesize tickLabelOrientationInternal=_tickLabelOrientationInternal;
@property(retain, nonatomic) SChartBackedUserSettable *showLabelsInternal; // @synthesize showLabelsInternal=_showLabelsInternal;
@property(retain, nonatomic) SChartBackedUserSettable *showTicksInternal; // @synthesize showTicksInternal=_showTicksInternal;
- (void)setTextAlignmentSet:(BOOL)arg1;
- (BOOL)textAlignmentSet;
@property(nonatomic) BOOL tickLabelOrientationSet; // @dynamic tickLabelOrientationSet;
@property(nonatomic) BOOL showLabelsSet; // @dynamic showLabelsSet;
@property(nonatomic) BOOL showTicksSet; // @dynamic showTicksSet;
@property(nonatomic) int tickLabelOrientation; // @dynamic tickLabelOrientation;
@property(retain, nonatomic) NSNumber *tickGap; // @dynamic tickGap;
@property(retain, nonatomic) UIColor *labelTextShadowColor; // @dynamic labelTextShadowColor;
@property(retain, nonatomic) UIFont *labelFont; // @dynamic labelFont;
@property(retain, nonatomic) UIColor *labelColor; // @dynamic labelColor;
@property(retain, nonatomic) NSNumber *lineLength; // @dynamic lineLength;
@property(retain, nonatomic) NSNumber *lineWidth; // @dynamic lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @dynamic lineColor;
@property(nonatomic) BOOL showLabels; // @dynamic showLabels;
@property(nonatomic) BOOL showTicks; // @dynamic showTicks;
@property(nonatomic) int textAlignment; // @dynamic textAlignment;
- (void)supplementStyleFromStyle:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

