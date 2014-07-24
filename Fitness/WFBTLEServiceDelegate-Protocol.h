//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, WFBTLECommonData, WFBTLEServiceProcessor;

@protocol WFBTLEServiceDelegate <NSObject>
- (NSString *)btleServiceWantsSerialNumber:(WFBTLEServiceProcessor *)arg1;
- (NSString *)btleServiceWantsFirmwareRevision:(WFBTLEServiceProcessor *)arg1;
- (NSString *)btleServiceWantsDeviceName:(WFBTLEServiceProcessor *)arg1;
- (void)btleService:(WFBTLEServiceProcessor *)arg1 requestsCommonDataConfiguration:(WFBTLECommonData *)arg2;
- (void)btleService:(WFBTLEServiceProcessor *)arg1 didReceiveDeviceInfoResponse:(BOOL)arg2;
- (void)btleService:(WFBTLEServiceProcessor *)arg1 didReceiveFirmwareRevision:(NSString *)arg2;
- (void)btleService:(WFBTLEServiceProcessor *)arg1 didReceiveConnectionRefusedEvent:(NSError *)arg2;
@end

