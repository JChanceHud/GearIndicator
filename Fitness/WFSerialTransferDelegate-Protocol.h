//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol WFSerialTransferDelegate <NSObject>
- (void)didEstablishSerialConnectionWithANTChannelStart:(unsigned char)arg1;
- (void)didDisconnectSerialConnection;
- (void)didEstablishSerialConnection;
- (void)didReceiveSerialPacket:(NSData *)arg1;
@end

