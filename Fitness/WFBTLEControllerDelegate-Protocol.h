//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, WFBTLEController, WFSensorConnection;

@protocol WFBTLEControllerDelegate <NSObject>
- (void)btleController:(WFBTLEController *)arg1 didDiscoverPeripherals:(NSSet *)arg2 searchCompleted:(BOOL)arg3;
- (void)btleController:(WFBTLEController *)arg1 disconnectedDevice:(WFSensorConnection *)arg2;
- (void)btleController:(WFBTLEController *)arg1 connectedDevice:(WFSensorConnection *)arg2;
@end
