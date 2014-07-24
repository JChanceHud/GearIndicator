//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorData.h"

@interface WFCommonData : WFSensorData
{
    unsigned char hardwareVersion;
    unsigned short manufacturerId;
    unsigned short modelNumber;
    unsigned char softwareVersion;
    unsigned short serialNumberLower;
    unsigned short serialNumberUpper;
    unsigned long operatingTime;
    float batteryVoltage;
    int batteryStatus;
}

@property(nonatomic) int batteryStatus; // @synthesize batteryStatus;
@property(nonatomic) float batteryVoltage; // @synthesize batteryVoltage;
@property(nonatomic) unsigned short serialNumberUpper; // @synthesize serialNumberUpper;
@property(nonatomic) unsigned short serialNumberLower; // @synthesize serialNumberLower;
@property(nonatomic) unsigned char softwareVersion; // @synthesize softwareVersion;
@property(nonatomic) unsigned char hardwareVersion; // @synthesize hardwareVersion;
@property(nonatomic) unsigned short modelNumber; // @synthesize modelNumber;
@property(nonatomic) unsigned short manufacturerId; // @synthesize manufacturerId;
@property(nonatomic) unsigned long operatingTime; // @synthesize operatingTime;
@property(readonly, nonatomic) unsigned long serialNumber;
- (id)stringFromBatteryStatus:(int)arg1;
- (id)debugDescription;
- (id)init;

@end
