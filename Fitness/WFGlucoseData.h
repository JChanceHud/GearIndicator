//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorData.h"

@class NSDate, WFCommonData;

@interface WFGlucoseData : WFSensorData
{
    WFCommonData *commonData;
    CDUnion_76eb878e status;
    NSDate *timestamp;
    unsigned short usConcentration;
    int rateOfChange;
    NSDate *currentDeviceTime;
    unsigned long ulElapsedTime;
    int risingAlertLevel;
    int fallingAlertLevel;
    unsigned short usHighAlertLevel;
    unsigned short usLowAlertLevel;
}

@property(nonatomic) unsigned short usLowAlertLevel; // @synthesize usLowAlertLevel;
@property(nonatomic) unsigned short usHighAlertLevel; // @synthesize usHighAlertLevel;
@property(nonatomic) int fallingAlertLevel; // @synthesize fallingAlertLevel;
@property(nonatomic) int risingAlertLevel; // @synthesize risingAlertLevel;
@property(nonatomic) unsigned long ulElapsedTime; // @synthesize ulElapsedTime;
@property(retain, nonatomic) NSDate *currentDeviceTime; // @synthesize currentDeviceTime;
@property(nonatomic) int rateOfChange; // @synthesize rateOfChange;
@property(nonatomic) unsigned short usConcentration; // @synthesize usConcentration;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp;
@property(nonatomic) CDUnion_76eb878e status; // @synthesize status;
@property(readonly, nonatomic) WFCommonData *commonData; // @synthesize commonData;
- (id)init;
- (void)dealloc;

@end

