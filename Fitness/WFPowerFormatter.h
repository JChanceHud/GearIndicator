//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFFormatter.h"

@class NSNumberFormatter;

@interface WFPowerFormatter : WFFormatter
{
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (double)powerFromString:(id)arg1;
- (id)unitStringFromPower:(double)arg1;
- (id)stringFromPower:(double)arg1;

@end
