//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFCharacteristicDecoder.h"

@class NSString;

@interface WFCasioDestinationOfKeyCommanderCh : WFCharacteristicDecoder
{
    NSString *_destinationOfKeyCommandOnFirstUpdate;
}

@property(copy, nonatomic) NSString *destinationOfKeyCommandOnFirstUpdate; // @synthesize destinationOfKeyCommandOnFirstUpdate=_destinationOfKeyCommandOnFirstUpdate;
- (id)appName;
- (void)disconnectKeyCommander;
- (void)sendDisableControlMode;
- (void)sendAppName:(id)arg1;
- (BOOL)decodeCharacteristicData;
- (void)reinitializeWithCharacteristic:(id)arg1 peripheral:(id)arg2 updateType:(int)arg3;

@end

