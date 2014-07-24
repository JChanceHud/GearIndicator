//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorData.h"

@class WFBikePowerCTFData, WFBikePowerCrankTorqueData, WFBikePowerPowerOnlyData, WFBikePowerWheelTorqueData, WFCommonData;

@interface WFBikePowerRawData : WFSensorData
{
    int sensorType;
    WFCommonData *commonData;
    CDStruct_ead935ea calibrationData;
    WFBikePowerPowerOnlyData *powerOnlyData;
    WFBikePowerWheelTorqueData *wheelTorqueData;
    WFBikePowerCrankTorqueData *crankTorqueData;
    WFBikePowerCTFData *crankTorqueFreqData;
}

@property(retain, nonatomic) WFBikePowerCTFData *crankTorqueFreqData; // @synthesize crankTorqueFreqData;
@property(retain, nonatomic) WFBikePowerCrankTorqueData *crankTorqueData; // @synthesize crankTorqueData;
@property(retain, nonatomic) WFBikePowerWheelTorqueData *wheelTorqueData; // @synthesize wheelTorqueData;
@property(retain, nonatomic) WFBikePowerPowerOnlyData *powerOnlyData; // @synthesize powerOnlyData;
@property(nonatomic) CDStruct_a17356f7 calibrationData; // @synthesize calibrationData;
@property(readonly, nonatomic) WFCommonData *commonData; // @synthesize commonData;
@property(nonatomic) int sensorType; // @synthesize sensorType;
- (id)init;
- (void)dealloc;
- (CDStruct_a17356f7 *)calibrationDataPtr;

@end

