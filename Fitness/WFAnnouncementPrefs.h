//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WFAnnouncementPrefs : NSObject
{
    BOOL enabled;
    BOOL fadeBackgroundMusic;
    float volume;
    NSArray *announcements;
    int voice;
    BOOL _metric;
}

@property(nonatomic, getter=isMetric) BOOL metric; // @synthesize metric=_metric;
@property(copy, nonatomic) NSArray *announcements; // @synthesize announcements;
@property(nonatomic) int voice; // @synthesize voice;
@property(nonatomic) BOOL fadeBackgroundMusic; // @synthesize fadeBackgroundMusic;
@property(nonatomic) float volume; // @synthesize volume;
@property(nonatomic) BOOL enabled; // @synthesize enabled;
- (void).cxx_destruct;
- (void)setVoiceNumber:(id)arg1;
- (id)voiceNumber;
- (id)debugDescription;
- (void)encodeToDictionary:(id)arg1;
- (void)removeAnnouncement:(id)arg1;
- (void)addAnnouncements:(id)arg1;
- (void)addAnnouncement:(id)arg1;
- (void)clearAnnouncements;
- (id)initWithDefaultsDictionary:(id)arg1;
- (id)init;

@end
