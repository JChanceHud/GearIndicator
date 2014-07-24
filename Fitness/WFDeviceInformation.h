//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSString, NSUUID;

@interface WFDeviceInformation : NSObject
{
    BOOL _connected;
    BOOL _dummyDevice;
    NSDate *_lastUpdate;
    NSUUID *_UUID;
    NSString *_deviceIdentifier;
    int _networkType;
    NSString *_name;
    NSString *_manufacturer;
    NSArray *_supportedSensorTypes;
    NSString *_firmwareVersion;
    NSString *_serialNumber;
    NSString *_productKey;
    NSDate *_lastlastUpdate;
    NSString *_rawName;
    NSMutableArray *_updateDeltas;
    double _signalStrenth;
    double _batteryLevel;
}

+ (id)deviceInformations;
+ (id)deviceInformationForPeripheralNamed:(id)arg1;
+ (id)deviceInfoWithWFBTLEPeripherial:(id)arg1;
+ (id)deviceInfoWithPeripherial:(id)arg1 advertisementData:(id)arg2;
+ (id)antManufacturerIdLookup;
+ (id)deviceInformationForANTDeviceWithDeviceType:(unsigned char)arg1 transmissionType:(unsigned char)arg2 deviceId:(unsigned short)arg3;
+ (id)deviceInformationForANTDeviceWithSensorType:(int)arg1 transmissionType:(unsigned char)arg2 deviceId:(unsigned short)arg3;
+ (id)discoveryDeviceInfoWithSensorConnection:(id)arg1;
@property(retain, nonatomic) NSMutableArray *updateDeltas; // @synthesize updateDeltas=_updateDeltas;
@property(nonatomic) BOOL dummyDevice; // @synthesize dummyDevice=_dummyDevice;
@property(copy, nonatomic) NSString *rawName; // @synthesize rawName=_rawName;
@property(retain) NSDate *lastlastUpdate; // @synthesize lastlastUpdate=_lastlastUpdate;
@property(copy, nonatomic) NSString *productKey; // @synthesize productKey=_productKey;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(retain, nonatomic) NSArray *supportedSensorTypes; // @synthesize supportedSensorTypes=_supportedSensorTypes;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property double signalStrenth; // @synthesize signalStrenth=_signalStrenth;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (BOOL)isBatteryLevelSupported;
- (BOOL)isStale;
- (id)connecitonParamsForAllSupportSensorTypes;
- (id)connectionParamsForSensorType:(int)arg1;
- (id)debugDescription;
- (id)init;
- (id)supportedSensorTypesArrayFromSensorTypesMask:(int)arg1;
- (void)updateWithBTLECommonData:(id)arg1;
- (void)updateBTLESignalStrengthWithRSSI:(id)arg1;
- (void)updateWithANTCommonData:(id)arg1;
- (void)updateANTSignalStrengthFromUpdateDeltas;
- (void)updateWithSensorConnection:(id)arg1;

@end

