//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WFSensorConnection;

@protocol WFSensorConnectionDelegate <NSObject>

@optional
- (void)connection:(WFSensorConnection *)arg1 rejectedByDeviceNamed:(NSString *)arg2 appAlreadyConnected:(NSString *)arg3;
- (void)connection:(WFSensorConnection *)arg1 stateChanged:(int)arg2;
- (void)connectionDidTimeout:(WFSensorConnection *)arg1;
@end
