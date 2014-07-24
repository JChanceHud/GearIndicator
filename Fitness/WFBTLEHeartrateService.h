//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFBTLEServiceProcessor.h"

#import "WFWahooTICKRXControlPointChDelegate.h"

@class WFBodySensorLocationCh, WFHeartrateMeasurementCh, WFMIOGlobal, WFWahooMotionAnalysisCh, WFWahooTICKRXControlPointCh;

@interface WFBTLEHeartrateService : WFBTLEServiceProcessor <WFWahooTICKRXControlPointChDelegate>
{
    WFHeartrateMeasurementCh *hrMeasurementCh;
    WFBodySensorLocationCh *bodySensorLocationCh;
    WFWahooTICKRXControlPointCh *wahooTICKRXControlPointCh;
    WFWahooMotionAnalysisCh *wahooMotionAnalysisCh;
    id <TICKRXSensorDelegate> _tickrxSensorDelegate;
    WFMIOGlobal *_MIOGlobal;
}

@property(retain, nonatomic) WFMIOGlobal *MIOGlobal; // @synthesize MIOGlobal=_MIOGlobal;
@property(retain, nonatomic) id <TICKRXSensorDelegate> tickrxSensorDelegate; // @synthesize tickrxSensorDelegate=_tickrxSensorDelegate;
- (void)tickrxControlPointDidCompleteSetTapTapVibrationPattern:(BOOL)arg1;
- (void)tickrxControlPointDidCompleteFinishCalibrationModeRequest:(BOOL)arg1 activityTypeInEffect:(int)arg2 results:(id)arg3;
- (void)tickrxControlPointDidCompleteBeginCalibrationModeRequest:(BOOL)arg1 activityTypeInEffect:(int)arg2;
- (void)tickrxControlPointDidCompleteSetCalibrationOperation:(BOOL)arg1;
- (void)tickrxControlPointDidCompleteGetCalibrationOperation:(id)arg1;
- (void)tickrxControlPointDidReceiveCurrentSessionTimestamp:(id)arg1;
- (void)tickrxControlPointSetTimeCommandDidComplete:(BOOL)arg1;
- (void)tickrxControlPointDidReceiveCurrentActivityTypeSetting:(int)arg1;
- (void)tickrxControlPointDidDetectDeviceIsNewerThanSupported;
- (void)tickrxControlPointSessionDownloadOperationWasAborted;
- (void)tickrxControlPointSessionDownloadOperationDidComplete:(id)arg1;
- (void)tickrxControlPointSessionDownloadOperationDidProgressToPercent:(double)arg1;
- (void)tickrxControlPointSessionListOperationWasAborted;
- (void)tickrxControlPointSessionListOperationDidComplete:(id)arg1;
- (void)tickrxControlPointSessionListOperationDidProgressToCount:(unsigned short)arg1 ofTotal:(unsigned short)arg2;
- (BOOL)setTapTapVibrationPatternWithOnPulseDuration:(double)arg1 offPulseDuration:(double)arg2 onPulseCount:(unsigned char)arg3;
- (BOOL)performVibrationWithPattern:(id)arg1;
- (BOOL)requestFinishMotionAnalysisCalibrationMode;
- (BOOL)requestBeginMotionAnalysisCalibrationMode;
- (BOOL)setMotionAnalysisCalibration:(id)arg1;
- (BOOL)getMotionAnalysisCalibrationForActivityType:(int)arg1;
- (BOOL)changeDeviceActivityModeSetting:(int)arg1;
- (BOOL)requestDeviceActivityModeSetting;
- (BOOL)eraseAllActivitySessions;
- (BOOL)downloadSessionMatchingSummary:(id)arg1;
- (BOOL)requestActivitySessionList;
- (BOOL)abortCurrentDownloadOperation;
- (id)getMotionAnalysisData;
- (double)motionAnalysisLastDataTime;
- (void)clearRRIntervalCache;
- (id)getRawData;
- (id)getData;
- (BOOL)startUpdatingForService:(id)arg1 onPeripheral:(id)arg2;
- (void)reset;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)init;

@end

