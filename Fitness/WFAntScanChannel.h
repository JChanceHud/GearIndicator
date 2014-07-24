//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSTimer, WFANTLib;

@interface WFAntScanChannel : NSObject
{
    id <WFAntChannelDelegate> delegate;
    WFANTLib *antLib;
    unsigned char channelNumber;
    unsigned char networkNumber;
    NSTimer *searchTimer;
    BOOL bHandleTimeout;
    NSMutableSet *discoveredDevices;
    BOOL _bClosingChannel;
    id <WFAntScanChannelDelegate> _scanChannelDelegate;
}

@property(nonatomic) BOOL bClosingChannel; // @synthesize bClosingChannel=_bClosingChannel;
@property id <WFAntScanChannelDelegate> scanChannelDelegate; // @synthesize scanChannelDelegate=_scanChannelDelegate;
@property(readonly, nonatomic) unsigned char networkNumber; // @synthesize networkNumber;
@property(readonly, nonatomic) unsigned char channelNumber; // @synthesize channelNumber;
@property(retain, nonatomic) WFANTLib *antLib; // @synthesize antLib;
@property(nonatomic) id <WFAntChannelDelegate> delegate; // @synthesize delegate;
- (BOOL)processResponse:(char *)arg1;
- (BOOL)processMessage:(char *)arg1;
- (BOOL)processEvent:(unsigned char)arg1 messageBuffer:(char *)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)cancelSearch;
- (BOOL)beginSearchForDevices:(double)arg1;
- (void)stopSearchTimer;
- (void)startSearchTimer:(double)arg1;
- (void)handleSearchTimeout:(id)arg1;
- (void)endCloseMode;
- (BOOL)closeChannel;
- (void)dealloc;

@end

