//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface WFDisplayCellData : NSObject
{
    NSString *description;
    NSString *value;
    NSString *units;
    NSNumber *unformattedValue;
}

@property(retain, nonatomic) NSNumber *unformattedValue; // @synthesize unformattedValue;
@property(retain, nonatomic) NSString *units; // @synthesize units;
@property(retain, nonatomic) NSString *value; // @synthesize value;
@property(retain, nonatomic) NSString *description; // @synthesize description;
- (void).cxx_destruct;
- (id)init;

@end
