//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFGenericDevice : NSObject
{
    double lastMessageTime;
    BOOL hasData;
    int sensorType;
    int sensorSubType;
}

@property(nonatomic) int sensorSubType; // @synthesize sensorSubType;
@property(readonly, nonatomic) int sensorType; // @synthesize sensorType;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
- (id)getRawData;
- (id)getData;
- (double)lastMessageTime;
- (id)init;

@end

