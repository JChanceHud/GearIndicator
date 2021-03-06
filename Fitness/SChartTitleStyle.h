//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SChartBackedUserSettable, UIColor, UIFont;

@interface SChartTitleStyle : NSObject <NSCopying>
{
    SChartBackedUserSettable *_textColorInternal;
    SChartBackedUserSettable *_fontInternal;
    SChartBackedUserSettable *_minimumScaleFactorInternal;
    SChartBackedUserSettable *_textAlignInternal;
    SChartBackedUserSettable *_backgroundColorInternal;
    SChartBackedUserSettable *_positionInternal;
}

@property(retain, nonatomic) SChartBackedUserSettable *positionInternal; // @synthesize positionInternal=_positionInternal;
@property(retain, nonatomic) SChartBackedUserSettable *backgroundColorInternal; // @synthesize backgroundColorInternal=_backgroundColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *textAlignInternal; // @synthesize textAlignInternal=_textAlignInternal;
@property(retain, nonatomic) SChartBackedUserSettable *minimumScaleFactorInternal; // @synthesize minimumScaleFactorInternal=_minimumScaleFactorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *fontInternal; // @synthesize fontInternal=_fontInternal;
@property(retain, nonatomic) SChartBackedUserSettable *textColorInternal; // @synthesize textColorInternal=_textColorInternal;
@property(nonatomic) int position; // @dynamic position;
@property(retain, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) int textAlign; // @dynamic textAlign;
@property(nonatomic) float minimumScaleFactor; // @dynamic minimumScaleFactor;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
- (void)supplementStyleFromStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

