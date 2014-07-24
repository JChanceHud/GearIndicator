//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WFWBCodeBlock, WFWBFirmwareInfo;

@interface WFWBFirmware : NSObject
{
    NSMutableArray *codeBlocks;
    WFWBCodeBlock *currentCodeBlock;
    int blockIndex;
    unsigned short usChecksumA;
    unsigned short usChecksumB;
    unsigned short usChecksumA_Encrypted;
    unsigned short usChecksumB_Encrypted;
    unsigned short usChecksumA_Full;
    unsigned short usChecksumB_Full;
    unsigned short usChecksumIVT;
    unsigned short usSizeA;
    unsigned short usSizeB;
    unsigned short usSizeA_Full;
    unsigned short usSizeB_Full;
    unsigned char ucVersionVendor;
    unsigned char ucVersionMajor;
    unsigned char ucVersionMinor;
    unsigned char ucVersionBuild;
    unsigned char ucSequence;
    BOOL bEndTransferSent;
    unsigned char bootloadCommandVersion;
    BOOL isEncyrpted;
}

@property(nonatomic) unsigned char bootloadCommandVersion; // @synthesize bootloadCommandVersion;
@property(readonly, nonatomic) BOOL isEncyrpted; // @synthesize isEncyrpted;
@property(readonly, nonatomic) unsigned short usSizeB; // @synthesize usSizeB;
@property(readonly, nonatomic) unsigned short usSizeA; // @synthesize usSizeA;
@property(readonly, nonatomic) unsigned short usChecksumIVT; // @synthesize usChecksumIVT;
@property(readonly, nonatomic) unsigned short usChecksumB; // @synthesize usChecksumB;
@property(readonly, nonatomic) unsigned short usChecksumA; // @synthesize usChecksumA;
- (BOOL)resetCodePointer;
- (BOOL)loadFromFile:(id)arg1;
- (BOOL)loadFromLineArray:(id)arg1;
- (unsigned char)encodeDataPacket:(id)arg1;
- (BOOL)parseVersion:(id)arg1;
- (BOOL)parseLine:(id)arg1;
- (BOOL)parseCode:(id)arg1;
- (BOOL)parseChecksum:(id)arg1;
- (unsigned long)parseAddress:(id)arg1;
- (unsigned char)byteFromHex:(id)arg1;
- (void)addCodeByte:(unsigned char)arg1;
- (id)addBlock:(unsigned long)arg1;
@property(readonly, nonatomic) unsigned long ulBaseAddress;
@property(readonly, nonatomic) BOOL hasDataToSend;
@property(readonly, nonatomic) WFWBFirmwareInfo *firmwareInfo;
@property(readonly, nonatomic) int codeSize;
@property(readonly, nonatomic) int codeBlockCount;
- (id)init;
- (void)dealloc;

@end
