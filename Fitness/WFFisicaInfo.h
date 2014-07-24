//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WFFisicaInfo : NSObject
{
    unsigned long serialNumber;
    unsigned long firmwareVersion;
    NSString *model;
    unsigned char maxAntConnections;
    BOOL supportsAntFSClient;
    BOOL supportsFitnessEquipment;
    BOOL supportsProximitySearch;
}

@property(nonatomic) BOOL supportsProximitySearch; // @synthesize supportsProximitySearch;
@property(nonatomic) BOOL supportsFitnessEquipment; // @synthesize supportsFitnessEquipment;
@property(nonatomic) BOOL supportsAntFSClient; // @synthesize supportsAntFSClient;
@property(nonatomic) unsigned char maxAntConnections; // @synthesize maxAntConnections;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(nonatomic) unsigned long firmwareVersion; // @synthesize firmwareVersion;
@property(nonatomic) unsigned long serialNumber; // @synthesize serialNumber;
- (id)initAsCopy:(id)arg1;
- (id)init;
- (void)dealloc;

@end
