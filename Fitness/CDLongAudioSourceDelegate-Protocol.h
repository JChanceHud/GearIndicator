//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDLongAudioSource;

@protocol CDLongAudioSourceDelegate <NSObject>

@optional
- (void)cdAudioSourceFileDidChange:(CDLongAudioSource *)arg1;
- (void)cdAudioSourceDidFinishPlaying:(CDLongAudioSource *)arg1;
@end

