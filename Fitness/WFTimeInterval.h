//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSNumber, WFWorkoutSegment;

@interface WFTimeInterval : NSManagedObject
{
}

- (double)totalDuration;
- (void)setWorkoutActive:(BOOL)arg1;
- (void)endInterval;
- (int)compareStartTime:(id)arg1;
- (void)beginInterval;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NSNumber *endTime; // @dynamic endTime;
@property(retain, nonatomic) NSNumber *isWorkoutActive; // @dynamic isWorkoutActive;
@property(retain, nonatomic) NSNumber *startTime; // @dynamic startTime;
@property(retain, nonatomic) WFWorkoutSegment *workoutSegment; // @dynamic workoutSegment;

@end

