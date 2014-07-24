//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFBurnBurstTestBaseVC.h"

@class UIButton, UILabel, WFSensorHeartrate;

@interface WFHRBurnBurstFieldTestVC : WFBurnBurstTestBaseVC
{
    BOOL _testStarted;
    CDStruct_e25eb2d1 _formatOptions;
    UILabel *_heartRateHeadingLabel;
    UILabel *_heartRateLabel;
    UILabel *_workoutStateLabel;
    UILabel *_timerLabel;
    UIButton *_startButton;
    int _startAccumBeats;
    int _seconds;
    int _phase;
    WFSensorHeartrate *_heartRateSensor;
}

@property(nonatomic) CDStruct_e25eb2d1 formatOptions; // @synthesize formatOptions=_formatOptions;
@property(nonatomic) BOOL testStarted; // @synthesize testStarted=_testStarted;
@property(retain, nonatomic) WFSensorHeartrate *heartRateSensor; // @synthesize heartRateSensor=_heartRateSensor;
@property(nonatomic) int phase; // @synthesize phase=_phase;
@property(nonatomic) int seconds; // @synthesize seconds=_seconds;
@property(nonatomic) int startAccumBeats; // @synthesize startAccumBeats=_startAccumBeats;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UILabel *workoutStateLabel; // @synthesize workoutStateLabel=_workoutStateLabel;
@property(retain, nonatomic) UILabel *heartRateLabel; // @synthesize heartRateLabel=_heartRateLabel;
@property(retain, nonatomic) UILabel *heartRateHeadingLabel; // @synthesize heartRateHeadingLabel=_heartRateHeadingLabel;
- (void).cxx_destruct;
- (void)endMeasurement;
- (void)startWalkPhase;
- (void)startFastPhase;
- (void)startModeratePhase;
- (void)countdown;
- (void)startTest;
- (void)resetTest;
- (void)updateHeartRate;
- (void)startButtonTouched:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

