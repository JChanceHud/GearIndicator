//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFStaticTableViewController.h"

#import "UIAlertViewDelegate.h"
#import "WFHeartrateConnectionTICKRXCalibrationDelegate.h"
#import "WFTICKRRunCalibrationVCProtocol.h"

@class NSArray, NSTimer, UBERSensor, UIActivityIndicatorView, UIBarButtonItem, UILabel, WFBasicTableViewCell, WFSensorHeartrate;

@interface WFTICKRRunUploadCalibrationViewController : WFStaticTableViewController <WFHeartrateConnectionTICKRXCalibrationDelegate, UIAlertViewDelegate, WFTICKRRunCalibrationVCProtocol>
{
    UBERSensor *_sensor;
    NSArray *_xValues;
    NSArray *_yValues;
    int _calibrationType;
    UILabel *_uploadResultLabel;
    WFBasicTableViewCell *_buttonCell;
    UIActivityIndicatorView *_activityIndicatorView;
    UIBarButtonItem *_cancelButton;
    WFSensorHeartrate *_sensorHeartrate;
    int _calibrationUploadStatus;
    NSTimer *_watchdogTimer;
    UILabel *_calibrateRegularlyLabel;
}

@property(nonatomic) __weak UILabel *calibrateRegularlyLabel; // @synthesize calibrateRegularlyLabel=_calibrateRegularlyLabel;
@property(retain, nonatomic) NSTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(nonatomic) int calibrationUploadStatus; // @synthesize calibrationUploadStatus=_calibrationUploadStatus;
@property(retain, nonatomic) WFSensorHeartrate *sensorHeartrate; // @synthesize sensorHeartrate=_sensorHeartrate;
@property(nonatomic) __weak UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak WFBasicTableViewCell *buttonCell; // @synthesize buttonCell=_buttonCell;
@property(nonatomic) __weak UILabel *uploadResultLabel; // @synthesize uploadResultLabel=_uploadResultLabel;
@property(nonatomic) int calibrationType; // @synthesize calibrationType=_calibrationType;
@property(retain, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
@property(retain, nonatomic) NSArray *xValues; // @synthesize xValues=_xValues;
@property(retain, nonatomic) UBERSensor *sensor; // @synthesize sensor=_sensor;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)heartrateSensor:(id)arg1 didCompleteGetCalibrationOperation:(id)arg2;
- (void)heartrateSensor:(id)arg1 didCompleteSetCalibrationOperation:(BOOL)arg2;
- (void)updateCalibrationObject:(id)arg1 withXValue:(id)arg2 andYvalue:(id)arg3;
- (void)startWatchDogTimer;
- (void)dismissCalibrationViewsPromptOnExit:(BOOL)arg1;
- (void)onNavBarCancelPressed:(id)arg1;
- (void)actionButtonTouched:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showSensorNotConnectedMessage;
- (void)setDeviceCalibrationFailed;
- (void)setDeviceCalibrationSucces;
- (void)showUploadingBusyStatus;
- (void)sendMotionAnalysisCalibrationToDevice:(id)arg1;
- (void)updateCalibrationValuesWithXValues:(id)arg1 andYValues:(id)arg2 andCalibrationType:(int)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tickrRunConnection;

@end

