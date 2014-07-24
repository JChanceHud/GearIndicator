//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntFSDevice.h"

#import "WFAntFSClientChannelDelegate.h"

@class WFAntFSClientChannel;

@interface WFAntFSClientBase : WFAntFSDevice <WFAntFSClientChannelDelegate>
{
    CDStruct_b30d3dab stParams;
    unsigned long ulClientSerial;
    unsigned short usBeaconPeriod;
}

- (BOOL)startAntFSClient;
- (BOOL)specifySettings:(CDStruct_7219084a *)arg1;
- (BOOL)openBeacon;
- (BOOL)closeBeacon;
- (BOOL)addFITFile:(id)arg1;
- (unsigned short)getBeaconPeriod;
- (BOOL)configureClient:(CDStruct_b30d3dab *)arg1;
- (void)setAntFSChannel:(id)arg1;
@property(readonly, nonatomic) id <WFAntFSClientDelegate> clientDelegate;
@property(readonly, nonatomic) WFAntFSClientChannel *clientChannel;
- (void)delegateReceivedResponse:(int)arg1;
- (void)delegateEncounteredError:(int)arg1;
- (void)delegateConnectedDevice:(BOOL)arg1;
- (void)antFS:(id)arg1 receivedResponse:(int)arg2;
- (id)init;
- (void)dealloc;

@end

