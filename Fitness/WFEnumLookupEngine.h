//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WFEnumLookupEngine : NSObject
{
    NSMutableDictionary *_lookups;
    NSMutableDictionary *_lowerCaseLookups;
    NSMutableDictionary *_invertedLookups;
}

+ (void)clearLookupForKey:(id)arg1;
+ (void)clearLookups;
+ (id)lowerCaseLookupForKey:(id)arg1;
+ (id)invertedLookupForKey:(id)arg1;
+ (id)lookupForKey:(id)arg1;
+ (void)setLowerCaseLookup:(id)arg1 forKey:(id)arg2;
+ (void)setInvertedLookup:(id)arg1 forKey:(id)arg2;
+ (void)setLookup:(id)arg1 forKey:(id)arg2;
+ (id)sharedEngine;
@property(retain, nonatomic) NSMutableDictionary *invertedLookups; // @synthesize invertedLookups=_invertedLookups;
@property(retain, nonatomic) NSMutableDictionary *lowerCaseLookups; // @synthesize lowerCaseLookups=_lowerCaseLookups;
@property(retain, nonatomic) NSMutableDictionary *lookups; // @synthesize lookups=_lookups;

@end
