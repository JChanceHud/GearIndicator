//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFJSONCoding.h"

@class NSArray, NSMutableDictionary, NSString, NSUUID, UBERSensorOptions, UBERUser;

@interface UBERSensor : NSObject <WFJSONCoding>
{
    NSUUID *_UUID;
    NSString *_deviceIdentifier;
    NSString *_displayName;
    NSString *_defaultDisplayName;
    NSString *_manufacturerName;
    NSString *_productKey;
    NSMutableDictionary *_sensorCapabilities;
    UBERSensorOptions *_options;
    int _networkType;
    NSArray *_supportedSensorTypes;
    NSArray *_allConnectionParams;
    unsigned int _workoutCount;
    UBERUser *_user;
}

+ (Class)childClassForArrayWithKey:(id)arg1;
+ (id)JSONValueTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)iconForSensorType:(int)arg1;
+ (id)localizedNameForSensorType:(int)arg1;
+ (id)deviceImageLookup;
+ (id)imageForProductKey:(id)arg1 smallSize:(BOOL)arg2;
+ (id)sensorWithDiscoveredDeviceInfo:(id)arg1;
+ (id)deviceIdentifierFromDeviceParams:(id)arg1;
@property(nonatomic) __weak UBERUser *user; // @synthesize user=_user;
@property(nonatomic) unsigned int workoutCount; // @synthesize workoutCount=_workoutCount;
@property(retain, nonatomic) NSArray *allConnectionParams; // @synthesize allConnectionParams=_allConnectionParams;
@property(retain, nonatomic) NSArray *supportedSensorTypes; // @synthesize supportedSensorTypes=_supportedSensorTypes;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) UBERSensorOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableDictionary *sensorCapabilities; // @synthesize sensorCapabilities=_sensorCapabilities;
@property(copy, nonatomic) NSString *productKey; // @synthesize productKey=_productKey;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(copy, nonatomic) NSString *defaultDisplayName; // @synthesize defaultDisplayName=_defaultDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)linkedWorkoutProfiles;
- (void)objectDidLoadWithJSONCoder;
- (id)defaultImages;
- (id)tutorialKey;
- (id)tutorialVC;
- (id)calibrationVC;
- (id)localizedNameForCalibrationButton;
- (id)sensorImageSmallSize:(BOOL)arg1;
- (id)sensorImageSmall;
- (id)sensorImage;
- (id)connectionParamsForSensorType:(int)arg1;
- (void)updateWithDiscoveredDeviceInfo:(id)arg1;
- (BOOL)isPresentInConnectionParams:(id)arg1;
- (BOOL)supportsSensorType:(int)arg1;
@property(nonatomic) BOOL supportsMotionAnalysis;
@property(nonatomic) BOOL supportsAltitude;
@property(nonatomic) BOOL supportsStride;
@property(nonatomic) BOOL supportsBikePower;
@property(nonatomic) BOOL supportsBikeCadence;
@property(nonatomic) BOOL supportsWheelSize;
@property(nonatomic) BOOL supportsSpeed;
@property(nonatomic) BOOL supportsHeartrate;
@property(nonatomic) BOOL supportsPageConfigurations;
@property(nonatomic) BOOL supportsFlywheel;
@property(nonatomic) BOOL supportsDebugLogging;
@property(nonatomic) BOOL supportsCalibrationFactor;
@property(nonatomic) BOOL supportsCalibration;
- (BOOL)supportsAnySensorType:(id)arg1;
- (BOOL)sensorCapabilityForKey:(id)arg1 defaultCapabilityCallback:(CDUnknownBlockType)arg2;

@end

