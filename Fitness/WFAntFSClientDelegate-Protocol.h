//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntFSDeviceDelegate.h"

@class WFAntFSClientBase;

@protocol WFAntFSClientDelegate <WFAntFSDeviceDelegate>

@optional
- (void)antFSClient:(WFAntFSClientBase *)arg1 receivedResponse:(int)arg2;
- (void)antFSClient:(WFAntFSClientBase *)arg1 encounteredError:(int)arg2;
- (void)antFSClient:(WFAntFSClientBase *)arg1 connectedDevice:(BOOL)arg2;
@end

