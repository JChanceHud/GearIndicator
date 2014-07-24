//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPeripheralDelegate.h"
#import "WFRSSITimerDelegate.h"

@class CBPeripheral, NSArray, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSSet, NSString, WFDeviceInformation, WFRSSITimer;

@interface WFBTLEPeripheral : NSObject <CBPeripheralDelegate, WFRSSITimerDelegate>
{
    id <WFBTLEPeripheralDelegate> wfPeripheralDelegate;
    CBPeripheral *thePeripheral;
    int sensorTypes;
    NSString *deviceUUIDString;
    NSMutableSet *serviceUUIDStrings;
    NSMutableSet *advertisedUUIDStrings;
    NSMutableDictionary *discoveredServices;
    NSMutableSet *registeredDelegates;
    NSDictionary *theAdvertisementData;
    NSString *deviceName;
    WFDeviceInformation *deviceInformation;
    BOOL isServiceDiscoveryComplete;
    BOOL isServiceDiscoveryStarted;
    BOOL isKnownPeripheral;
    BOOL isConnectionInterrupted;
    BOOL isPeripheralDisconnectPending;
    BOOL doesAutoReconnect;
    BOOL doesDisconnectOnLastDelegateUnregister;
    double keepAliveDuration;
    double keepAlive;
    WFRSSITimer *rssiTimer;
    NSMutableSet *peripheralConnections;
    NSLock *peripheralConnectionLock;
}

+ (id)stringFromServiceUUID:(unsigned short)arg1;
+ (id)stringFromDescriptorUUID:(unsigned short)arg1;
+ (id)stringFromCharacteristicUUID:(unsigned short)arg1;
@property(readonly, nonatomic) BOOL isPeripheralDisconnectPending; // @synthesize isPeripheralDisconnectPending;
@property(nonatomic) double keepAliveDuration; // @synthesize keepAliveDuration;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName;
@property(readonly, nonatomic) NSDictionary *theAdvertisementData; // @synthesize theAdvertisementData;
@property(nonatomic) BOOL doesDisconnectOnLastDelegateUnregister; // @synthesize doesDisconnectOnLastDelegateUnregister;
@property(nonatomic) BOOL doesAutoReconnect; // @synthesize doesAutoReconnect;
@property(readonly, nonatomic) BOOL isKnownPeripheral; // @synthesize isKnownPeripheral;
@property(readonly, nonatomic) BOOL isServiceDiscoveryComplete; // @synthesize isServiceDiscoveryComplete;
@property(readonly, nonatomic) NSString *deviceUUIDString; // @synthesize deviceUUIDString;
@property(readonly, nonatomic) CBPeripheral *thePeripheral; // @synthesize thePeripheral;
@property(retain, nonatomic) id <WFBTLEPeripheralDelegate> wfPeripheralDelegate; // @synthesize wfPeripheralDelegate;
- (BOOL)unregisterConnection:(id)arg1;
- (BOOL)registerConnection:(id)arg1;
- (void)onHeartbeat;
- (void)touch;
- (void)prepareForDelete;
- (BOOL)cancelPeripheral;
- (id)initWithDelegate:(id)arg1 andPeripheral:(id)arg2;
- (void)stopRSSIMonitoring;
- (void)startRSSIMonitoring;
- (BOOL)unregisterPeripheralDelegate:(id)arg1;
- (BOOL)registerPeripheralDelegate:(id)arg1;
- (void)doDiscovery;
- (void)disconnectPeripheral;
- (BOOL)disconnectPeripheralForDelegate:(id)arg1;
- (BOOL)connectPeripheral;
@property(readonly, nonatomic) NSSet *allServiceUUIDStrings;
@property(readonly, nonatomic) NSSet *serviceUUIDStrings;
@property(readonly, nonatomic) BOOL isDiscoveryComplete;
@property(readonly, nonatomic) BOOL isCharacteristicDescriptorDiscoveryComplete;
@property(readonly, nonatomic) BOOL isCharacteristicDiscoveryComplete;
@property(readonly, nonatomic) NSArray *supportedSensorTypes;
@property(readonly, nonatomic) WFDeviceInformation *deviceInformation;
@property(readonly, nonatomic) BOOL hasConnections;
@property(readonly, nonatomic) NSSet *peripheralConnections;
@property(readonly, nonatomic) unsigned int peripheralDelegateCount;
- (void)processDisconnectedPeripheral:(id)arg1;
- (void)processFailedPeripheralConnection:(id)arg1;
- (void)processConnectedPeripheral:(id)arg1;
- (void)processDiscoveredPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3;
- (void)processPeripheralRetrievedByConnection:(id)arg1;
- (void)processPeripheralRetrievedByDeviceUUID:(id)arg1;
- (void)peripheral:(id)arg1 didWriteValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheralDidUpdateName:(id)arg1;
- (void)rssiTimerTick;
- (void)dealloc;
- (id)init;

@end

