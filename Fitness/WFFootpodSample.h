//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSample.h"

@class NSNumber;

@interface WFFootpodSample : WFSample
{
}

+ (id)sampleFromSensor:(id)arg1;
- (void)exportCSV:(id)arg1 forSegmentNumber:(int)arg2 workoutStart:(double)arg3;

// Remaining properties
@property(retain, nonatomic) NSNumber *totalDistance; // @dynamic totalDistance;
@property(retain, nonatomic) NSNumber *totalStrides; // @dynamic totalStrides;

@end
