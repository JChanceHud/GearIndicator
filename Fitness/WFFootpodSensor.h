//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntDevice.h"

@class WFTimestamp;

@interface WFFootpodSensor : WFAntDevice
{
    struct {
        unsigned char ucLastTime;
        unsigned char ucLastTime200;
        unsigned char ucDistance;
        unsigned char ucDistance16;
        unsigned char ucInstSpeed;
        unsigned char ucInstSpeed256;
        unsigned char ucStrideCount;
        unsigned char ucLatency;
    } stPage1Data;
    struct {
        unsigned char ucCadence;
        unsigned char ucCadence16;
        unsigned char ucInstSpeed;
        unsigned char ucInstSpeed256;
        unsigned char ucModuleLocation;
        unsigned char ucBatteryStatus;
        unsigned char ucUnitHealth;
        unsigned char ucUseState;
    } stPage2to13Data;
    struct {
        unsigned int ulAccumDistance;
        unsigned int ulAccumStride;
    } stAccumulatedData;
    union {
        unsigned char ucAccumInit;
        struct {
            unsigned int bDistanceInit:1;
            unsigned int bStridesInit:1;
        } flags;
    } uFlags;
    unsigned short usPrevDistance;
    unsigned char ucPrevStride;
    WFTimestamp *timestamp;
}

- (void)reset;
- (BOOL)processMessage:(char *)arg1;
- (id)getRawData;
- (id)getData;
- (void)dealloc;
- (id)init;

@end

