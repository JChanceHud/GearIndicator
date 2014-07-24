//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, UIImage, WFMKMapSnapshotter;

@interface WFMKMapSnapshotOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    WFMKMapSnapshotter *_snapshotter;
    UIImage *_snapshot;
    NSError *_error;
    CDUnknownBlockType _snapshotterConstructionBlock;
    CDUnknownBlockType _snapshotterCompletitionBlock;
}

+ (id)operationWithConstructorBlock:(CDUnknownBlockType)arg1 completition:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType snapshotterCompletitionBlock; // @synthesize snapshotterCompletitionBlock=_snapshotterCompletitionBlock;
@property(copy, nonatomic) CDUnknownBlockType snapshotterConstructionBlock; // @synthesize snapshotterConstructionBlock=_snapshotterConstructionBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) WFMKMapSnapshotter *snapshotter; // @synthesize snapshotter=_snapshotter;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;

@end
