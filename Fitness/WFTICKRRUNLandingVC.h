//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFStaticTableViewController.h"

#import "UIAlertViewDelegate.h"
#import "WFTICKRRunCalibrationVCProtocol.h"

@class UBERSensor, UIBarButtonItem, UILabel, UITableViewCell, WFBTLEFootpodService, WFIntervalTimer, WFSensorHeartrate;

@interface WFTICKRRUNLandingVC : WFStaticTableViewController <UIAlertViewDelegate, WFTICKRRunCalibrationVCProtocol>
{
    float filteredSpeed;
    UBERSensor *_sensor;
    int _calibrationType;
    UITableViewCell *_briefCalibrationCell;
    UITableViewCell *_extendedCalibrationCell;
    UITableViewCell *_resetToDefaultCell;
    UITableViewCell *_learnMoreCell;
    UIBarButtonItem *_cancelButton;
    UILabel *_descriptionLabel;
    UILabel *_briefCalibrationLabel;
    UILabel *_extendedCalibrationLabel;
    UILabel *_moreAccurateLabel;
    UILabel *_resetToDefaultLabel;
    WFIntervalTimer *_updateSensorDataReadoutsIntervalTimer;
    WFSensorHeartrate *_sensorHeartrate;
    UILabel *_heartRateLabel;
    UILabel *_cadenceLabel;
    UILabel *_speedLabel;
    WFBTLEFootpodService *_runningSpeedAndCadenceService;
}

@property(retain, nonatomic) WFBTLEFootpodService *runningSpeedAndCadenceService; // @synthesize runningSpeedAndCadenceService=_runningSpeedAndCadenceService;
@property(nonatomic) __weak UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(nonatomic) __weak UILabel *cadenceLabel; // @synthesize cadenceLabel=_cadenceLabel;
@property(nonatomic) __weak UILabel *heartRateLabel; // @synthesize heartRateLabel=_heartRateLabel;
@property(retain, nonatomic) WFSensorHeartrate *sensorHeartrate; // @synthesize sensorHeartrate=_sensorHeartrate;
@property(retain, nonatomic) WFIntervalTimer *updateSensorDataReadoutsIntervalTimer; // @synthesize updateSensorDataReadoutsIntervalTimer=_updateSensorDataReadoutsIntervalTimer;
@property(nonatomic) __weak UILabel *resetToDefaultLabel; // @synthesize resetToDefaultLabel=_resetToDefaultLabel;
@property(nonatomic) __weak UILabel *moreAccurateLabel; // @synthesize moreAccurateLabel=_moreAccurateLabel;
@property(nonatomic) __weak UILabel *extendedCalibrationLabel; // @synthesize extendedCalibrationLabel=_extendedCalibrationLabel;
@property(nonatomic) __weak UILabel *briefCalibrationLabel; // @synthesize briefCalibrationLabel=_briefCalibrationLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UITableViewCell *learnMoreCell; // @synthesize learnMoreCell=_learnMoreCell;
@property(nonatomic) __weak UITableViewCell *resetToDefaultCell; // @synthesize resetToDefaultCell=_resetToDefaultCell;
@property(nonatomic) __weak UITableViewCell *extendedCalibrationCell; // @synthesize extendedCalibrationCell=_extendedCalibrationCell;
@property(nonatomic) __weak UITableViewCell *briefCalibrationCell; // @synthesize briefCalibrationCell=_briefCalibrationCell;
@property(nonatomic) int calibrationType; // @synthesize calibrationType=_calibrationType;
@property(retain, nonatomic) UBERSensor *sensor; // @synthesize sensor=_sensor;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)resetToDefault;
- (void)cancelButtonTouched:(id)arg1;
- (void)viewDidUnload;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)filterSpeed:(double)arg1;
- (void)updateSensorDataReadouts;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tickrRunConnection;
- (id)makeLabelWithText:(id)arg1 fontSize:(float)arg2 color:(id)arg3 width:(float)arg4 height:(float)arg5 bold:(BOOL)arg6;

@end

