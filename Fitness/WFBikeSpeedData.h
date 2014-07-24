//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorData.h"

@interface WFBikeSpeedData : WFSensorData
{
    unsigned long accumWheelRevolutions;
    float accumSpeedTime;
    unsigned short instantWheelRPM;
    double timestamp;
    BOOL timestampOverflow;
}

@property(nonatomic) BOOL timestampOverflow; // @synthesize timestampOverflow;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(nonatomic) unsigned short instantWheelRPM; // @synthesize instantWheelRPM;
@property(nonatomic) float accumSpeedTime; // @synthesize accumSpeedTime;
@property(nonatomic) unsigned long accumWheelRevolutions; // @synthesize accumWheelRevolutions;
- (id)formattedSpeed:(BOOL)arg1;
- (id)formattedDistance:(BOOL)arg1;

@end
