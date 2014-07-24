//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WF35SensorInfo : NSObject
{
    int sensorType;
    NSString *name;
    NSString *value;
    unsigned short deviceId;
    NSString *deviceUUIDString;
    int networkType;
    unsigned char transmissionType;
    BOOL usesIntelligentRecording;
    BOOL usesZeroAveraging;
}

+ (id)stringFromSensorId:(CDStruct_391ccd70)arg1;
+ (BOOL)sensorTypeRequiresPairing:(int)arg1;
+ (id)sensorInfoFromDeviceParams:(id)arg1 forSensorType:(int)arg2;
+ (CDStruct_391ccd70)sensorIdFromDeviceParams:(id)arg1;
@property(nonatomic) BOOL usesZeroAveraging; // @synthesize usesZeroAveraging;
@property(nonatomic) BOOL usesIntelligentRecording; // @synthesize usesIntelligentRecording;
@property(nonatomic) unsigned char transmissionType; // @synthesize transmissionType;
@property(nonatomic) int networkType; // @synthesize networkType;
@property(retain, nonatomic) NSString *deviceUUIDString; // @synthesize deviceUUIDString;
@property(nonatomic) unsigned short deviceId; // @synthesize deviceId;
@property(retain, nonatomic) NSString *value; // @synthesize value;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int sensorType; // @synthesize sensorType;
- (void).cxx_destruct;
- (CDStruct_391ccd70)toSensorId;
- (id)toDeviceParams;
- (BOOL)isWildcard;
- (BOOL)isValid;
- (BOOL)isPresentInParams:(id)arg1;
- (BOOL)infoMatchesSensorInfo:(id)arg1;
- (BOOL)infoMatchesSensorId:(CDStruct_391ccd70)arg1;
- (BOOL)infoMatchesParams:(id)arg1;
- (id)init;

@end
