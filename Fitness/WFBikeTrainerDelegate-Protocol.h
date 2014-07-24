//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_WFBikeTrainerDelegate.h"

@class NSDictionary, WFBikePowerConnection;

@protocol WFBikeTrainerDelegate <_WFBikeTrainerDelegate>

@optional
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didReceiveKurtSetProFlywheelEnabled:(BOOL)arg2 spindownEnabled:(BOOL)arg3 response:(BOOL)arg4;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didReceiveKurtSpindownResult:(unsigned long)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didReceiveTrainerSpindownResult:(float)arg2 temperature:(float)arg3 offset:(unsigned short)arg4;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didReceiveTrainerInitSpindownResponse:(unsigned char)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didReceiveTrainerRequestAntConnectionResponse:(unsigned char)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didReceiveTrainerReadModeResponse:(unsigned char)arg2 mode:(int)arg3 params:(NSDictionary *)arg4;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didSetTrainerWheelCircumference:(unsigned char)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didSetTrainerWindSpeed:(unsigned char)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didSetTrainerWindResistance:(unsigned char)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didSetTrainerRollingResistance:(unsigned char)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didSetTrainerGrade:(unsigned char)arg2;
- (void)cpmConnection:(WFBikePowerConnection *)arg1 didSetTrainerMode:(int)arg2 status:(unsigned char)arg3;
@end

