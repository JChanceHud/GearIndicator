//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFCharacteristicDecoder.h"

@interface WFTemperatureTypeCh : WFCharacteristicDecoder
{
    int eTemperatureType;
}

@property(readonly, nonatomic) int eTemperatureType; // @synthesize eTemperatureType;
- (void)reset;
- (BOOL)decodeCharacteristicData;
- (id)init;

@end

