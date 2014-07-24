//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFBTLEServiceProcessor.h"

#import "WFConnectionControlPointChDelegate.h"
#import "WFWBFirmwareDelegate.h"

@class WFConnectionControlPointCh, WFWahooDebugCh, WFWahooFirmwareControlPointCh;

@interface WFBTLEFirmwareUpdateService : WFBTLEServiceProcessor <WFWBFirmwareDelegate, WFConnectionControlPointChDelegate>
{
    id <WFDebugDelegate> debugDelegate;
    id <WFWBFirmwareDelegate> firmwareDelegate;
    id <WFConnectionControlPointChDelegate> connectionDelegate;
    WFWahooFirmwareControlPointCh *firmwareCh;
    WFWahooDebugCh *debugCh;
    WFConnectionControlPointCh *connectionControlPointCh;
}

@property(retain, nonatomic) id <WFConnectionControlPointChDelegate> connectionDelegate; // @synthesize connectionDelegate;
@property(retain, nonatomic) id <WFWBFirmwareDelegate> firmwareDelegate; // @synthesize firmwareDelegate;
@property(retain, nonatomic) id <WFDebugDelegate> debugDelegate; // @synthesize debugDelegate;
- (BOOL)sendSoftwareReset;
- (BOOL)sendConnectionConfirmForRole:(int)arg1 deviceName:(id)arg2 appUUID:(id)arg3 appName:(id)arg4;
- (BOOL)sendStartNordicDFURequest;
- (BOOL)sendSelfTestCommandWithPayloadData:(id)arg1;
- (BOOL)sendDeviceInfoRequest;
- (BOOL)sendEnableJtagRequest;
- (BOOL)sendDisableJtagRequest;
- (BOOL)sendGetBootloaderVersion;
- (BOOL)updateFirmware:(id)arg1 isFirmwareA:(BOOL)arg2;
- (BOOL)updateFirmwareWithPackagePath:(id)arg1 isCurrentFirmwareA:(BOOL)arg2;
- (BOOL)sendRebootRequest;
- (BOOL)sendDisableDebugRequest;
- (BOOL)sendEnableDebugRequestWithParameter0:(unsigned int)arg1;
- (BOOL)sendEnableDebugRequest;
- (void)checkFirmwareUpdateStatus:(id)arg1;
- (void)clearCharacteristicProcessors;
- (void)delegateDebugData:(id)arg1;
@property(readonly, nonatomic) CDStruct_e7e103e4 *pstDeviceInfo;
@property(readonly, nonatomic) BOOL isDeviceInfoReady;
@property(readonly, nonatomic) BOOL isFirmwareCharacteristicAvailable;
- (BOOL)startUpdatingForService:(id)arg1 onPeripheral:(id)arg2;
- (void)peripheralConnectionInterrupted;
- (void)prepareForDelete;
- (void)connectionControlPointDidRespondWithResult:(int)arg1 userInfo:(id)arg2;
- (void)firmwareUpdateDidReceiveStartNordicDFUResponse:(BOOL)arg1;
- (void)firmwareSelfTestInfoWasReceived:(id)arg1;
- (void)firmwareSelfTestCommandResponseWasReceivedWithSuccess:(BOOL)arg1 responseData:(id)arg2;
- (void)firmwareUpdateDidReceiveEnableJtagResponse:(BOOL)arg1 valueBefore:(unsigned long)arg2 valueAfter:(unsigned long)arg3;
- (void)firmwareUpdateDidReceiveDisableJtagResponse:(BOOL)arg1;
- (void)firmwareBootloaderVersionResponse:(char *)arg1 success:(BOOL)arg2;
- (void)firmwareUpdateStopDebugModeResponse:(BOOL)arg1;
- (void)firmwareUpdateDebugModeResponse:(BOOL)arg1;
- (void)firmwareUpdateTransferStarted:(int)arg1;
- (void)firmwareUpdateTransferFinished:(BOOL)arg1;
- (void)firmwareUpdatePacketSent:(int)arg1;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)init;

@end

