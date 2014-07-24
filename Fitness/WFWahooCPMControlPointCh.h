//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFControlPointDecoder.h"

@interface WFWahooCPMControlPointCh : WFControlPointDecoder
{
    unsigned short usStrainTicks;
    BOOL scTemperature;
    CDStruct_10f6bed7 stAcceleration;
    float strainGaugeSlope;
    float temperatureSlope;
    unsigned char ucDpot;
    unsigned long ulSerialNumber;
    unsigned short usAntId;
    unsigned short usDeviceCapabilities;
    int eTrainerMode;
    int eReportedTrainerMode;
    int eReportedTrainerModeParam;
    int reportedLevel;
    unsigned short reportedTargetWatts;
    unsigned short reportedSpeedSimEnabled;
    float reportedWeight;
    float reportedWindResistance;
    float reportedRollingResistance;
    float reportedWindSpeed;
    float reportedGrade;
    float reportedResistance;
    unsigned short reportedFtpPercentage;
    unsigned short reportedFtpPower;
    BOOL bKurtSpindownResult;
    unsigned long ulKurtSpindownPeriod;
    BOOL bTrainerSpindownResult;
    float trainerSpindownTime;
    float trainerSpindownTemp;
    unsigned short trainerSpindownOffset;
    BOOL bResponseSuccess;
    unsigned char ucResponseStatus;
    int eResponse;
}

@property(readonly, nonatomic) int eResponse; // @synthesize eResponse;
@property(readonly, nonatomic) unsigned char ucResponseStatus; // @synthesize ucResponseStatus;
@property(readonly, nonatomic) BOOL bResponseSuccess; // @synthesize bResponseSuccess;
@property(readonly, nonatomic) unsigned short reportedFtpPower; // @synthesize reportedFtpPower;
@property(readonly, nonatomic) unsigned short reportedFtpPercentage; // @synthesize reportedFtpPercentage;
@property(readonly, nonatomic) float reportedResistance; // @synthesize reportedResistance;
@property(readonly, nonatomic) float reportedGrade; // @synthesize reportedGrade;
@property(readonly, nonatomic) float reportedWindSpeed; // @synthesize reportedWindSpeed;
@property(readonly, nonatomic) float reportedRollingResistance; // @synthesize reportedRollingResistance;
@property(readonly, nonatomic) float reportedWindResistance; // @synthesize reportedWindResistance;
@property(readonly, nonatomic) float reportedWeight; // @synthesize reportedWeight;
@property(readonly, nonatomic) unsigned short reportedSpeedSimEnabled; // @synthesize reportedSpeedSimEnabled;
@property(readonly, nonatomic) unsigned short reportedTargetWatts; // @synthesize reportedTargetWatts;
@property(readonly, nonatomic) int reportedLevel; // @synthesize reportedLevel;
@property(readonly, nonatomic) int eReportedTrainerModeParam; // @synthesize eReportedTrainerModeParam;
@property(readonly, nonatomic) int eReportedTrainerMode; // @synthesize eReportedTrainerMode;
@property(readonly, nonatomic) int eTrainerMode; // @synthesize eTrainerMode;
@property(readonly, nonatomic) unsigned short usDeviceCapabilities; // @synthesize usDeviceCapabilities;
@property(readonly, nonatomic) unsigned short usAntId; // @synthesize usAntId;
@property(readonly, nonatomic) unsigned long ulSerialNumber; // @synthesize ulSerialNumber;
@property(readonly, nonatomic) unsigned char ucDpot; // @synthesize ucDpot;
@property(readonly, nonatomic) float temperatureSlope; // @synthesize temperatureSlope;
@property(readonly, nonatomic) float strainGaugeSlope; // @synthesize strainGaugeSlope;
@property(readonly, nonatomic) CDStruct_10f6bed7 stAcceleration; // @synthesize stAcceleration;
@property(readonly, nonatomic) BOOL scTemperature; // @synthesize scTemperature;
@property(readonly, nonatomic) unsigned short usStrainTicks; // @synthesize usStrainTicks;
@property(readonly, nonatomic) unsigned short trainerSpindownOffset; // @synthesize trainerSpindownOffset;
@property(readonly, nonatomic) float trainerSpindownTemp; // @synthesize trainerSpindownTemp;
@property(readonly, nonatomic) float trainerSpindownTime; // @synthesize trainerSpindownTime;
@property(readonly, nonatomic) BOOL bTrainerSpindownResult; // @synthesize bTrainerSpindownResult;
@property(readonly, nonatomic) unsigned long ulKurtSpindownPeriod; // @synthesize ulKurtSpindownPeriod;
@property(readonly, nonatomic) BOOL bKurtSpindownResult; // @synthesize bKurtSpindownResult;
- (BOOL)kurtSetMomentOfInertia:(float)arg1;
- (BOOL)kurtSetDragParams:(float)arg1 offsetYIntercept:(float)arg2;
- (BOOL)kurtSetSpindownParams:(unsigned short)arg1 startPeriod:(unsigned short)arg2 endPeriod:(unsigned short)arg3 debounceThreshold:(unsigned short)arg4;
- (BOOL)kurtSetDriveCircumference:(float)arg1 driveRatio:(unsigned char)arg2;
- (BOOL)trainerEnableControl:(BOOL)arg1 withPasscode:(unsigned long)arg2;
- (BOOL)trainerResetPasscode;
- (BOOL)trainerSetPasscode:(unsigned long)arg1 currentPasscode:(unsigned long)arg2;
- (BOOL)trainerTestOptical;
- (BOOL)trainerInitSpindown;
- (BOOL)trainerRequestAntConnection:(int)arg1 deviceId:(unsigned short)arg2 useForPower:(BOOL)arg3;
- (BOOL)trainerReadModeWithParams:(int)arg1;
- (BOOL)trainerReadMode;
- (BOOL)trainerSetWheelCircumference:(float)arg1;
- (BOOL)trainerSetWindSpeed:(float)arg1;
- (BOOL)trainerSetGrade:(float)arg1;
- (BOOL)trainerSetRollingResistance:(double)arg1;
- (BOOL)trainerSetWindResistance:(float)arg1;
- (BOOL)trainerSetSimMode:(float)arg1 rollingResistance:(float)arg2 windResistance:(float)arg3;
- (BOOL)trainerSetStandardMode:(int)arg1;
- (BOOL)trainerSetResistanceMode:(float)arg1;
- (BOOL)trainerSetFtpMode:(unsigned short)arg1 withPercent:(unsigned short)arg2;
- (BOOL)trainerSetErgMode:(unsigned short)arg1 enableSpeedSimulation:(BOOL)arg2;
- (BOOL)sendSetDeviceCapabilitiesRequest:(unsigned short)arg1;
- (BOOL)sendReadDeviceCapabilitiesRequest;
- (BOOL)sendReadDeviceInfoRequest;
- (BOOL)sendReadCalibrationRequest;
- (BOOL)sendSetTemperatureSlopeRequest:(float)arg1;
- (BOOL)sendSetSlopeRequest:(unsigned short)arg1;
- (BOOL)sendReadTemperatureRequest;
- (BOOL)sendReadAccelerometerRequest;
- (BOOL)sendFactoryCalibrateRequest:(unsigned char)arg1;
- (BOOL)sendEnableAntRadio:(BOOL)arg1;
- (BOOL)sendAssignDeviceInfo:(unsigned short)arg1 serialNumber:(unsigned long)arg2;
- (void)didReceivePacketACK;
- (void)processCPMCommandResponse;
- (void)reset;
- (BOOL)decodeCharacteristicData;
- (id)init;
- (void)dealloc;

@end

