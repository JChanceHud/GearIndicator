//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface WFColorPalette : NSObject
{
    int _predefinedColorPalette;
    UIColor *_mainTintColor;
    UIColor *_secondaryTintColor;
    UIColor *_highContrastContentColor;
    UIColor *_midContrastContentColor;
    UIColor *_backgroundColor;
    UIColor *_transluscentPanelColor;
    int _barStyle;
    UIColor *_barColor;
    UIColor *_barItemsTintColor;
}

@property(retain, nonatomic) UIColor *barItemsTintColor; // @synthesize barItemsTintColor=_barItemsTintColor;
@property(retain, nonatomic) UIColor *barColor; // @synthesize barColor=_barColor;
@property(nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) UIColor *transluscentPanelColor; // @synthesize transluscentPanelColor=_transluscentPanelColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *midContrastContentColor; // @synthesize midContrastContentColor=_midContrastContentColor;
@property(retain, nonatomic) UIColor *highContrastContentColor; // @synthesize highContrastContentColor=_highContrastContentColor;
@property(retain, nonatomic) UIColor *secondaryTintColor; // @synthesize secondaryTintColor=_secondaryTintColor;
@property(retain, nonatomic) UIColor *mainTintColor; // @synthesize mainTintColor=_mainTintColor;
@property(nonatomic) int predefinedColorPalette; // @synthesize predefinedColorPalette=_predefinedColorPalette;
- (void).cxx_destruct;

@end

