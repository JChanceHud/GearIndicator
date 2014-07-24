//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFSoundEffectPlayer : NSObject
{
}

+ (BOOL)isInitalised;
+ (void)end;
+ (id)alloc;
+ (id)sharedPlayer;
- (void)resume;
- (void)suspend;
- (BOOL)isEffectPlaying:(unsigned int)arg1;
- (void)unloadEffect:(id)arg1;
- (void)preloadEffect:(id)arg1;
- (void)stopEffect:(unsigned int)arg1;
- (unsigned int)playEffect:(id)arg1 pitch:(float)arg2 pan:(float)arg3 gain:(float)arg4;
- (unsigned int)playEffect:(id)arg1;
- (id)init;

@end
