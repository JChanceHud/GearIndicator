//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SChartTickFrequencyCalculator.h"

@class SChartAxis;

@interface SChartDateTimeTickFrequencyCalculator : NSObject <SChartTickFrequencyCalculator>
{
    SChartAxis *_axis;
}

- (void)increaseMajorTickFrequency:(id)arg1 andMinorTickFrequency:(id)arg2 numYears:(int *)arg3;
- (void)setTickFrequencyForSeconds:(double)arg1 onDateFrequency:(id)arg2;
- (BOOL)enoughSpaceOnPresenter:(id)arg1 span:(double)arg2 tickFrequency:(id)arg3;
- (id)calculateMajorTickFrequencyFromRange:(id)arg1 labelPresenter:(id)arg2;
- (id)initWithAxis:(id)arg1;

@end
