//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WFFirmwareUpdaterDelegate.h"
#import "WFHardwareConnectorDelegate.h"

@class UIButton, UILabel, UIProgressView, UIView, WFFirmwareUpdater, WFHardwareConnector;

@interface WFFirmwareUtilityController : UIViewController <WFHardwareConnectorDelegate, WFFirmwareUpdaterDelegate>
{
    WFHardwareConnector *hardwareConnector;
    WFFirmwareUpdater *firmwareUpdater;
    UILabel *devFirmwareLabel;
    UILabel *devBootLoaderLabel;
    UILabel *devHardwareLabel;
    UILabel *hexFirmwareLabel;
    UIProgressView *transferProgress;
    UILabel *statusLabel;
    UIButton *buttonUpload;
    UIView *statusView;
    UILabel *exitStatusLabel;
    BOOL transferStarted;
    CDStruct_5b38a99e deviceVersionInfo;
    UILabel *_softwareUpdateTitleLabel;
}

+ (void)checkAndUpdateFirmwareForce:(BOOL)arg1;
+ (void)checkAndUpdateFirmware;
+ (void)showFirmwareUtilityModel;
+ (BOOL)isFirmwareUtilityControllerVisable;
@property(retain, nonatomic) UILabel *softwareUpdateTitleLabel; // @synthesize softwareUpdateTitleLabel=_softwareUpdateTitleLabel;
@property(retain, nonatomic) UILabel *exitStatusLabel; // @synthesize exitStatusLabel;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView;
@property(retain, nonatomic) UIButton *buttonUpload; // @synthesize buttonUpload;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel;
@property(retain, nonatomic) UIProgressView *transferProgress; // @synthesize transferProgress;
@property(retain, nonatomic) WFHardwareConnector *hardwareConnector; // @synthesize hardwareConnector;
@property(retain, nonatomic) UILabel *hexFirmwareLabel; // @synthesize hexFirmwareLabel;
@property(retain, nonatomic) UILabel *devHardwareLabel; // @synthesize devHardwareLabel;
@property(retain, nonatomic) UILabel *devBootLoaderLabel; // @synthesize devBootLoaderLabel;
@property(retain, nonatomic) UILabel *devFirmwareLabel; // @synthesize devFirmwareLabel;
- (void).cxx_destruct;
- (void)showStatusView:(id)arg1 hadError:(BOOL)arg2;
- (id)getHexFilePath;
- (void)updateClicked:(id)arg1;
- (void)updateAvailableHex;
- (void)firmwareUpdater:(id)arg1 transferError:(unsigned char)arg2;
- (void)firmwareUpdater:(id)arg1 transferComplete:(unsigned char)arg2;
- (void)firmwareUpdater:(id)arg1 transferProgress:(float)arg2;
- (void)firmwareUpdater:(id)arg1 receivedDeviceInfo:(CDStruct_5b38a99e)arg2;
- (void)hardwareConnector:(id)arg1 stateChanged:(int)arg2;
- (void)hardwareConnectorHasData;
- (void)hardwareConnector:(id)arg1 disconnectedSensor:(id)arg2;
- (void)hardwareConnector:(id)arg1 connectedSensor:(id)arg2;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end

