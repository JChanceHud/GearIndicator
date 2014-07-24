//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"

@class GCDAsyncUdpSocket, NSNetService, NSString, NSTimer;

@interface WFUDPBroadcastManager : NSObject <NSNetServiceDelegate>
{
    NSTimer *updateTimer;
    NSNetService *netService;
    GCDAsyncUdpSocket *udpSocket;
    int tag;
    BOOL serverConnected;
    BOOL isBroadcasting;
    id <WFUDPBroadcastManagerDelegate> delegate;
    NSString *broadcastAddress;
    double interval;
}

@property(nonatomic) double interval; // @synthesize interval;
@property(nonatomic) __weak NSString *broadcastAddress; // @synthesize broadcastAddress;
@property(nonatomic) BOOL isBroadcasting; // @synthesize isBroadcasting;
@property(nonatomic) __weak id <WFUDPBroadcastManagerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (BOOL)stopSendingUpdates;
- (BOOL)startSendingUpdates;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long)arg2;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)stopBonjourServer;
- (void)startBonjourServer;
- (int)broadcastPort;
- (id)deviceName;
- (void)stopUpdateTimer;
- (void)startUpdateTimer;
- (void)updateTimerTick;
- (id)init;
- (void)dealloc;

@end

