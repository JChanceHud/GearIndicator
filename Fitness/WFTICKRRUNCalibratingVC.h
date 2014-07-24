//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "WFTICKRRUNSpeedEntryVCDelegate.h"
#import "WFTICKRRunCalibrationVCProtocol.h"

@class NSMutableArray, UBERSensor, UIButton, UILabel, WFIntervalTimer, WFSensorHeartrate;

@interface WFTICKRRUNCalibratingVC : UIViewController <WFTICKRRUNSpeedEntryVCDelegate, UIAlertViewDelegate, WFTICKRRunCalibrationVCProtocol>
{
    BOOL _initialIdleTimerSetting;
    _Bool _phaseInProgress;
    _Bool _phaseDoesDataCollection;
    UBERSensor *_sensor;
    int _calibrationType;
    UILabel *_heartRateHeadingLabel;
    UILabel *_heartRateLabel;
    UILabel *_cadenceHeadingLabel;
    UILabel *_cadenceLabel;
    UILabel *_phaseLabel;
    UILabel *_timerLabel;
    UIButton *_button;
    WFIntervalTimer *_updateSensorDataReadoutsIntervalTimer;
    WFIntervalTimer *_countdownIntervalTimer;
    WFIntervalTimer *_sensorDataCaptureIntervalTimer;
    WFSensorHeartrate *_sensorHeartrate;
    int _phaseSecondsRemaining;
    int _phase;
    NSMutableArray *_phaseSpeedReadings;
    NSMutableArray *_phaseGctReadings;
    NSMutableArray *_phaseCadenceReadings;
    unsigned int _sensorDataCapture_Cadence_count;
    unsigned int _sensorDataCapture_GCT_count;
    double _phaseSpeedEntryPending;
    double _sensorDataCapture_BeginAtRemaining;
    double _sensorDataCapture_EndAtRemaining;
    double _lastMotionTimeStamp;
    double _sensorDataCapture_Cadence_sum;
    double _sensorDataCapture_GCT_sum;
}

@property(nonatomic) unsigned int sensorDataCapture_GCT_count; // @synthesize sensorDataCapture_GCT_count=_sensorDataCapture_GCT_count;
@property(nonatomic) double sensorDataCapture_GCT_sum; // @synthesize sensorDataCapture_GCT_sum=_sensorDataCapture_GCT_sum;
@property(nonatomic) unsigned int sensorDataCapture_Cadence_count; // @synthesize sensorDataCapture_Cadence_count=_sensorDataCapture_Cadence_count;
@property(nonatomic) double sensorDataCapture_Cadence_sum; // @synthesize sensorDataCapture_Cadence_sum=_sensorDataCapture_Cadence_sum;
@property(nonatomic) double lastMotionTimeStamp; // @synthesize lastMotionTimeStamp=_lastMotionTimeStamp;
@property(nonatomic) double sensorDataCapture_EndAtRemaining; // @synthesize sensorDataCapture_EndAtRemaining=_sensorDataCapture_EndAtRemaining;
@property(nonatomic) double sensorDataCapture_BeginAtRemaining; // @synthesize sensorDataCapture_BeginAtRemaining=_sensorDataCapture_BeginAtRemaining;
@property(retain, nonatomic) NSMutableArray *phaseCadenceReadings; // @synthesize phaseCadenceReadings=_phaseCadenceReadings;
@property(retain, nonatomic) NSMutableArray *phaseGctReadings; // @synthesize phaseGctReadings=_phaseGctReadings;
@property(retain, nonatomic) NSMutableArray *phaseSpeedReadings; // @synthesize phaseSpeedReadings=_phaseSpeedReadings;
@property(nonatomic) _Bool phaseDoesDataCollection; // @synthesize phaseDoesDataCollection=_phaseDoesDataCollection;
@property(nonatomic) _Bool phaseInProgress; // @synthesize phaseInProgress=_phaseInProgress;
@property(nonatomic) double phaseSpeedEntryPending; // @synthesize phaseSpeedEntryPending=_phaseSpeedEntryPending;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(nonatomic) int phaseSecondsRemaining; // @synthesize phaseSecondsRemaining=_phaseSecondsRemaining;
@property(retain, nonatomic) WFSensorHeartrate *sensorHeartrate; // @synthesize sensorHeartrate=_sensorHeartrate;
@property(retain, nonatomic) WFIntervalTimer *sensorDataCaptureIntervalTimer; // @synthesize sensorDataCaptureIntervalTimer=_sensorDataCaptureIntervalTimer;
@property(retain, nonatomic) WFIntervalTimer *countdownIntervalTimer; // @synthesize countdownIntervalTimer=_countdownIntervalTimer;
@property(retain, nonatomic) WFIntervalTimer *updateSensorDataReadoutsIntervalTimer; // @synthesize updateSensorDataReadoutsIntervalTimer=_updateSensorDataReadoutsIntervalTimer;
@property(nonatomic) BOOL initialIdleTimerSetting; // @synthesize initialIdleTimerSetting=_initialIdleTimerSetting;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(nonatomic) __weak UILabel *phaseLabel; // @synthesize phaseLabel=_phaseLabel;
@property(nonatomic) __weak UILabel *cadenceLabel; // @synthesize cadenceLabel=_cadenceLabel;
@property(nonatomic) __weak UILabel *cadenceHeadingLabel; // @synthesize cadenceHeadingLabel=_cadenceHeadingLabel;
@property(nonatomic) __weak UILabel *heartRateLabel; // @synthesize heartRateLabel=_heartRateLabel;
@property(nonatomic) __weak UILabel *heartRateHeadingLabel; // @synthesize heartRateHeadingLabel=_heartRateHeadingLabel;
@property(nonatomic) int calibrationType; // @synthesize calibrationType=_calibrationType;
@property(retain, nonatomic) UBERSensor *sensor; // @synthesize sensor=_sensor;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)dismissCalibrationPromptBeforeExit:(BOOL)arg1;
- (void)onNavCancelButtonPressed:(id)arg1;
- (void)startButtonTouched:(id)arg1;
- (void)wfTICKRRUNSpeedEntryVCDoneWithSpeed:(double)arg1;
- (void)sensorDataCapture;
- (void)updateCountdown;
- (void)updateTimerLabel;
- (void)endCurrentPhase;
- (void)startPhase;
- (void)setupPhase;
- (void)resetPhaseToStopped;
- (void)updateSensorDataReadouts;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showNoMotionDataMessage;
- (void)showSensorNotConnectedMessage;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tickrRunConnection;

@end

