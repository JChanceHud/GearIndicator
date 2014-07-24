//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SChartThemeDecorator.h"

@interface SChartThemeDecorator : NSObject <SChartThemeDecorator>
{
}

- (void)applyTheme:(id)arg1 toSeries:(id)arg2 atIndex:(int)arg3 preservingSetValues:(BOOL)arg4;
- (void)applyTheme:(id)arg1 toSeries:(id)arg2 preservingSetValues:(BOOL)arg3;
- (void)applyStyle:(id)arg1 toAxis:(id)arg2 preservingSetValues:(BOOL)arg3;
- (void)applyAxisStyle:(id)arg1 toAxes:(id)arg2 preservingSetValues:(BOOL)arg3;
- (void)applyTheme:(id)arg1 toAxesOnChart:(id)arg2 preservingSetValues:(BOOL)arg3;
- (void)applyChartStyleToChart:(id)arg1 fromTheme:(id)arg2 preservingSetValues:(BOOL)arg3;
- (void)applyTheme:(id)arg1 toChart:(id)arg2 preservingSetValues:(BOOL)arg3;

@end

