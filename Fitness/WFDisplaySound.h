//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFDisplayObject.h"

@class NSString;

@interface WFDisplaySound : WFDisplayObject
{
    NSString *_key;
    NSString *_value;
    unsigned char _binaryKey;
    int _source;
}

+ (id)instanceFromDictionary:(id)arg1;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) unsigned char binaryKey; // @synthesize binaryKey=_binaryKey;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)prettyBinaryDescriptionForVersionOld:(int)arg1;
- (id)prettyBinaryDescriptionForVersion:(int)arg1;
- (id)binaryRepresentationForVersion:(int)arg1;
- (id)tones;
- (id)tonesOld;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end

