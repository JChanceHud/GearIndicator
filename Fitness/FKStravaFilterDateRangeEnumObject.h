//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFEnumObject.h"

@class NSString;

@interface FKStravaFilterDateRangeEnumObject : WFEnumObject
{
    int _value;
}

+ (id)stringValueForEnumValue:(int)arg1;
+ (int)enumValueForCaseInsensitiveKey:(id)arg1;
+ (int)enumValueForKey:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) int value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *string;

@end

