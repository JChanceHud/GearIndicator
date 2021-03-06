//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, UIColor, UIFont;

@interface SChartCrosshairStyle : NSObject <NSCopying>
{
    NSNumber *lineWidth;
    UIColor *lineColor;
    UIFont *defaultFont;
    UIColor *defaultTextColor;
    UIColor *defaultLabelBackgroundColor;
    UIColor *defaultBackgroundColor;
    NSNumber *defaultCornerRadius;
    NSNumber *defaultBorderWidth;
    UIColor *defaultBorderColor;
    NSNumber *defaultKeyValuesPerRow;
}

@property(retain, nonatomic) NSNumber *defaultKeyValuesPerRow; // @synthesize defaultKeyValuesPerRow;
@property(retain, nonatomic) UIColor *defaultBorderColor; // @synthesize defaultBorderColor;
@property(retain, nonatomic) NSNumber *defaultBorderWidth; // @synthesize defaultBorderWidth;
@property(retain, nonatomic) NSNumber *defaultCornerRadius; // @synthesize defaultCornerRadius;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor;
@property(retain, nonatomic) UIColor *defaultLabelBackgroundColor; // @synthesize defaultLabelBackgroundColor;
@property(retain, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor;
@property(retain, nonatomic) UIFont *defaultFont; // @synthesize defaultFont;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor;
@property(retain, nonatomic) NSNumber *lineWidth; // @synthesize lineWidth;
- (void)supplementStyleFromStyle:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

