//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCharacteristic, CBPeripheral;

@interface WFCharacteristicDecoder : NSObject
{
    CBCharacteristic *characteristic;
    int characteristicType;
    CBPeripheral *peripheral;
    BOOL hasData;
    BOOL shouldPerformInitalRead;
    char *characteristicDataParse_DataPtr;
    int characteristicDataParse_DataLength;
    int characteristicDataParse_ParseOffset;
}

+ (double)bytesToTimestamp:(char *)arg1;
+ (float)bytesToSFloat:(char *)arg1;
+ (float)bytesToFloat:(char *)arg1;
@property(nonatomic) BOOL shouldPerformInitalRead; // @synthesize shouldPerformInitalRead;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(readonly, nonatomic) int characteristicType; // @synthesize characteristicType;
@property(retain, nonatomic) CBCharacteristic *characteristic; // @synthesize characteristic;
- (unsigned long)characteristicDataParseUint32;
- (unsigned short)characteristicDataParseUint16;
- (unsigned char)characteristicDataParseUint8;
- (BOOL)characteristicDataParseBegin;
- (void)reinitializeWithCharacteristic:(id)arg1 peripheral:(id)arg2 updateType:(int)arg3;
- (BOOL)write:(unsigned char)arg1 string:(id)arg2;
- (BOOL)write:(unsigned char)arg1:(unsigned char)arg2:(unsigned char)arg3:(unsigned char)arg4;
- (BOOL)write:(unsigned char)arg1:(unsigned char)arg2:(unsigned char)arg3;
- (BOOL)write:(unsigned char)arg1:(unsigned char)arg2;
- (BOOL)write:(unsigned char)arg1;
- (BOOL)writeBytes:(const char *)arg1 length:(unsigned int)arg2;
- (BOOL)writeToCharacteristic:(id)arg1 withResponse:(_Bool)arg2;
- (BOOL)writeToCharacteristic:(id)arg1;
- (void)reset;
- (BOOL)readCharacteristic;
- (BOOL)decodeCharacteristicData;
@property(readonly, nonatomic) char *dataPtr;
@property(readonly, nonatomic) BOOL isCharacteristicDataAvailable;
@property(readonly, nonatomic) int characteristicDataLength;
- (id)initWithCharacteristic:(id)arg1 peripheral:(id)arg2 updateType:(int)arg3;
- (id)init;
- (void)dealloc;

@end

