//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFControlPointDecoder.h"

@class NSData;

@interface WFWahooSerialTransferControlPointCh : WFControlPointDecoder
{
    BOOL isAntEnabled;
    BOOL didEnableANT;
    BOOL didDisableANT;
    BOOL didReceiveSerialPacket;
    NSData *serialPacket;
    unsigned char ucBridgeVersion;
    unsigned char ucANTChannelStart;
}

@property(readonly, nonatomic) unsigned char ucANTChannelStart; // @synthesize ucANTChannelStart;
@property(readonly, nonatomic) NSData *serialPacket; // @synthesize serialPacket;
@property(readonly, nonatomic) BOOL didReceiveSerialPacket; // @synthesize didReceiveSerialPacket;
@property(readonly, nonatomic) BOOL didDisableANT; // @synthesize didDisableANT;
@property(readonly, nonatomic) BOOL didEnableANT; // @synthesize didEnableANT;
@property(readonly, nonatomic) BOOL isAntEnabled; // @synthesize isAntEnabled;
- (BOOL)transmitSerialPacket:(id)arg1;
- (BOOL)sendRequestBridgeVersion;
- (BOOL)sendDisableAntRequest;
- (BOOL)sendEnableAntRequest;
- (void)processSerialTransferCommandResponse;
- (void)reset;
- (BOOL)decodeCharacteristicData;
- (id)init;
- (void)dealloc;

@end

