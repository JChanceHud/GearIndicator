//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SChartTickFrequencyCalculator.h"

@interface SChartAngularNumberTickFrequencyCalculator : NSObject <SChartTickFrequencyCalculator>
{
}

- (unsigned int)decimalsInNumber:(id)arg1;
- (id)numberInArray:(id)arg1 thatCreatesTheLeastDecimalsWhenDividingNumber:(id)arg2;
- (id)calculateMajorTickFrequencyFromRange:(id)arg1 labelPresenter:(id)arg2;

@end

