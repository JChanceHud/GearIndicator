//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFCharacteristicDecoder.h"

@interface WFWahooEnvironmentalCh : WFCharacteristicDecoder
{
    float pressure;
    float temperature;
}

@property(readonly, nonatomic) float pressure; // @synthesize pressure;
@property(readonly, nonatomic) float temperature; // @synthesize temperature;
- (void)reset;
- (BOOL)decodeCharacteristicData;
- (id)init;

@end

