//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntFSClientBase.h"

@interface WFAntFSClientFEWatch : WFAntFSClientBase
{
}

@property(readonly, nonatomic) unsigned short deviceNumber;
- (unsigned short)getBeaconPeriod;
- (BOOL)configureClient:(CDStruct_b30d3dab *)arg1;
- (void)antFS:(id)arg1 receivedResponse:(int)arg2;

@end

