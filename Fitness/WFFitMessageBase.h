//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface WFFitMessageBase : NSObject
{
    NSDate *timestamp;
}

- (id)stringFromTime:(id)arg1;
- (id)stringFromTimestamp;
- (id)initWithRecord:(void *)arg1;
- (unsigned long)getTimestampFromStructure;
@property(readonly, nonatomic) NSDate *timestamp;
- (id)init;
- (void)dealloc;

@end

