//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber;

@interface WFMKTileSources : NSObject
{
    NSNumber *_version;
    NSArray *_tileSources;
    NSDictionary *_tileSourcesLookup;
}

@property(retain, nonatomic) NSDictionary *tileSourcesLookup; // @synthesize tileSourcesLookup=_tileSourcesLookup;
@property(retain, nonatomic) NSArray *tileSources; // @synthesize tileSources=_tileSources;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)defaultTileSourceSettings;
- (id)initWithContentionOfFile:(id)arg1;

@end

