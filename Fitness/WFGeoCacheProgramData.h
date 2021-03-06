//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WFGeoCacheProgramData : NSObject
{
    NSString *geoCacheId;
    NSString *hint;
    unsigned long devicePIN;
    double latitude;
    double longitude;
}

@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
@property(nonatomic) unsigned long devicePIN; // @synthesize devicePIN;
@property(retain, nonatomic) NSString *hint; // @synthesize hint;
@property(retain, nonatomic) NSString *geoCacheId; // @synthesize geoCacheId;
- (id)init;
- (void)dealloc;

@end

