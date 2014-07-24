//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFCalculator.h"

@class WFDataSet, WFSlidingSet;

@interface WFSpeedCalculator : WFCalculator
{
    unsigned int sampleCount;
    BOOL isWorkoutActive;
    BOOL lastIsWorkoutActive;
    double lastDataTime;
    double lastTimestamp;
    unsigned long lastWheelCircumference;
    CDStruct_60d32b21 currentOffsets;
    CDStruct_60d32b21 offsets;
    CDStruct_60d32b21 pauseOffsets;
    BOOL isMetric;
    WFDataSet *dataSet;
    int avgDuration;
    WFSlidingSet *timeDistanceCalculator;
}

@property(nonatomic) BOOL isMetric; // @synthesize isMetric;
@property(readonly, nonatomic) WFSlidingSet *timeDistanceCalculator; // @synthesize timeDistanceCalculator;
- (int)avgDuration;
@property(readonly, nonatomic) WFDataSet *dataSet; // @synthesize dataSet;
- (void).cxx_destruct;
- (id)bikeSpeedForAveragingType:(int)arg1 distance:(int)arg2;
- (unsigned long)distanceMeters;
- (void)addBikeSpeedSample:(id)arg1;
- (void)addBikePowerSample:(id)arg1;
- (void)addSample:(id)arg1;
- (void)createTimeDistanceCalculator:(BOOL)arg1;
- (void)setAvgDuration:(int)arg1;
- (id)init;

@end

