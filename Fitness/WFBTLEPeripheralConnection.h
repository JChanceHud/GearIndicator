//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFBTLEDeviceDelegate.h"
#import "_WFSensorConnectionDelegate.h"

@class NSLock, NSMutableSet, NSSet, NSTimer, WFBTLEDevice, WFBTLEPeripheral, WFBTLEServiceUUIDInfo, WFConnectionParams, WFSensorConnection;

@interface WFBTLEPeripheralConnection : NSObject <_WFSensorConnectionDelegate, WFBTLEDeviceDelegate>
{
    id <WFBTLEPeripheralConnectionDelegate> delegate;
    WFSensorConnection *connectionInfo;
    WFBTLEPeripheral *peripheralWrapper;
    BOOL hasData;
    NSMutableSet *deviceUUIDStringsFromParams;
    int proximityRequirement;
    NSMutableSet *blacklistPeripheralInfo;
    WFBTLEServiceUUIDInfo *requiredServiceUUIDInfo;
    WFBTLEDevice *connectedDevice;
    WFConnectionParams *connectionParams;
    int currentState;
    BOOL hasClosed;
    BOOL bCloseWithProximityError;
    NSLock *theLock;
    NSLock *connectionLock;
    NSTimer *searchTimer;
    BOOL bHandleTimeout;
}

@property(retain, nonatomic) WFConnectionParams *connectionParams; // @synthesize connectionParams;
@property(retain, nonatomic) WFBTLEDevice *connectedDevice; // @synthesize connectedDevice;
@property(readonly, nonatomic) WFBTLEPeripheral *peripheralWrapper; // @synthesize peripheralWrapper;
@property(retain, nonatomic) WFSensorConnection *connectionInfo; // @synthesize connectionInfo;
@property(nonatomic) id <WFBTLEPeripheralConnectionDelegate> delegate; // @synthesize delegate;
- (void)setInterrupted;
- (id)requestSensorConnection:(id)arg1 withProximity:(int)arg2;
- (void)processConnectedPeripheral:(id)arg1;
- (void)processDisconnectedPeripheral:(id)arg1;
- (BOOL)isControllerForPerpheral:(id)arg1;
- (void)prepareForDelete;
- (void)closeConnection;
- (BOOL)checkPeripheralForMatch:(id)arg1;
@property(readonly, nonatomic) BOOL hasData;
@property(readonly, nonatomic) NSSet *deviceUUIDStringsFromPrarms;
@property(readonly, nonatomic) int connectMode;
- (id)traceInfo:(id)arg1;
- (id)stringFromConnectionState:(int)arg1;
- (void)stopSearchTimer;
- (void)stopSearchMode;
- (void)startSearchTimer:(double)arg1;
- (void)resetSearchMode;
- (BOOL)isPeripheralBlacklisted:(id)arg1;
- (BOOL)isConditionalConnectionSpecified;
- (void)handleSearchTimeout:(id)arg1;
- (void)endCloseAsync;
- (BOOL)doesRSSIPassProximityRequirement:(float)arg1;
- (BOOL)doesPeripheralUUIDMatchConnectionParams:(id)arg1;
- (void)cleanupResources;
- (BOOL)checkConditionalRequirements:(id)arg1 disconnectFlagPointer:(char *)arg2;
- (BOOL)checkConditionalByManufacturerData:(id)arg1 disconnectFlagPointer:(char *)arg2;
- (BOOL)checkConditionalByDeviceName:(id)arg1 disconnectFlagPointer:(char *)arg2;
- (void)beginSearchMode;
- (void)btleDeviceDidRejectConnection:(id)arg1 error:(id)arg2;
- (void)btleDeviceDidDiscoverBaseService:(int)arg1;
- (void)btleDeviceDidCompleteConnection:(id)arg1;
- (void)btleDevice:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (void)btleDevice:(id)arg1 didFailServiceDiscovery:(id)arg2;
- (id)connectionGetDevice;
- (float)connectionSignalEfficiency;
- (void)connectionDisconnectSensor;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

