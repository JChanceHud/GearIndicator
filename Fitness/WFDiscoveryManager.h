//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFDiscoveryManagerDelegate.h"

@class WFANTDiscovery, WFBTLEDiscovery;

@interface WFDiscoveryManager : NSObject <WFDiscoveryManagerDelegate>
{
    id <WFDiscoveryManagerDelegate> _delegate;
    WFBTLEDiscovery *_btleDiscoveryManager;
    WFANTDiscovery *_antDiscoveryManager;
}

@property(retain, nonatomic) WFANTDiscovery *antDiscoveryManager; // @synthesize antDiscoveryManager=_antDiscoveryManager;
@property(retain, nonatomic) WFBTLEDiscovery *btleDiscoveryManager; // @synthesize btleDiscoveryManager=_btleDiscoveryManager;
@property(nonatomic) id <WFDiscoveryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)discoveryManager:(id)arg1 didLooseDevice:(id)arg2;
- (void)discoveryManager:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)cancelDiscovery;
- (void)discoverSensorTypes:(id)arg1 onNetwork:(int)arg2;
- (void)dealloc;

@end

