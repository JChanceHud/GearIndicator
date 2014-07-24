//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSNumberFormatter;

@interface WFCadenceFormatter : NSFormatter
{
    unsigned int _unitStyle;
    unsigned int _units;
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) unsigned int units; // @synthesize units=_units;
@property(nonatomic) unsigned int unitStyle; // @synthesize unitStyle=_unitStyle;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (double)cadenceFromString:(id)arg1;
- (id)unitStringFromCadence:(double)arg1;
- (id)stringFromCadence:(double)arg1;
- (unsigned int)formatterUnits;
- (unsigned int)formatterUnitStyle;

@end

