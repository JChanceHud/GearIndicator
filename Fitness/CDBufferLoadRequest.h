//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CDBufferLoadRequest : NSObject
{
    NSString *filePath;
    int soundId;
}

@property(readonly) int soundId; // @synthesize soundId;
@property(readonly) NSString *filePath; // @synthesize filePath;
- (void)dealloc;
- (id)init:(int)arg1 filePath:(id)arg2;

@end

