//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray;

@interface WFAbstractWahooSensorDebugDataProcessor : NSObject
{
    unsigned int currentDebugPacketUnpackOffset;
    NSData *_currentDebugPacket;
    NSMutableArray *_currentDebugPacketOutputLogLines;
    unsigned int _currentDebugPacketNumUnpacked;
    double _currentDebugPacketTimestamp;
}

@property(nonatomic) double currentDebugPacketTimestamp; // @synthesize currentDebugPacketTimestamp=_currentDebugPacketTimestamp;
@property(nonatomic) unsigned int currentDebugPacketNumUnpacked; // @synthesize currentDebugPacketNumUnpacked=_currentDebugPacketNumUnpacked;
@property(retain, nonatomic) NSMutableArray *currentDebugPacketOutputLogLines; // @synthesize currentDebugPacketOutputLogLines=_currentDebugPacketOutputLogLines;
@property(retain, nonatomic) NSData *currentDebugPacket; // @synthesize currentDebugPacket=_currentDebugPacket;
- (void).cxx_destruct;
- (unsigned int)debugModeRequestParamterToUse;
- (id)logFileExtension;
- (unsigned short)firstSupportedWfFwVersionBuild;
- (unsigned short)firstSupportedWfFwVersionMinor;
- (unsigned short)firstSupportedWfFwVersionMajor;
- (_Bool)doesSupportWfFwProductID:(unsigned short)arg1;
- (id)finaliseLogInformation;
- (id)getLogHeaderInformation;
- (unsigned int)processDebugMessageWithLogTimestamp:(double)arg1 data:(id)arg2 outputLogLines:(id)arg3;
- (unsigned long)firstSupportedWfFwVersionAsABigNumber;
- (void)unpack;
- (double)currentLogTimestamp;
- (void)incrementNumUnpacked;
- (void)logWriteLine:(id)arg1;
- (unsigned int)numBytesLeftInDebugPacket;
- (float)getFloatAsIEEE754FromDebugPacket;
- (unsigned long)getUInt32FromDebugPacket;
- (unsigned short)getUInt16FromDebugPacket;
- (unsigned char)getUInt8FromDebugPacket;

@end

