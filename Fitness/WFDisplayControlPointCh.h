//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFCharacteristicDecoder.h"

@class NSArray, NSDate, NSTimeZone;

@interface WFDisplayControlPointCh : WFCharacteristicDecoder
{
    unsigned short _buttonState;
    unsigned char _pageIndex;
    id <WFDisplayControlPointChDelegate> _delegate;
    BOOL _backlight;
    BOOL _inverted;
    BOOL _sleepOnDisconnect;
    unsigned short _timestamp;
    NSArray *_supportedConfigVersions;
    NSDate *_date;
    NSTimeZone *_timeZone;
    int _dateFormat;
    int _timeFormat;
    int _startDayOfWeek;
    int _watchfaceStyle;
}

@property(nonatomic) int watchfaceStyle; // @synthesize watchfaceStyle=_watchfaceStyle;
@property(nonatomic) int startDayOfWeek; // @synthesize startDayOfWeek=_startDayOfWeek;
@property(nonatomic) int timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) int dateFormat; // @synthesize dateFormat=_dateFormat;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL sleepOnDisconnect; // @synthesize sleepOnDisconnect=_sleepOnDisconnect;
@property(nonatomic) BOOL inverted; // @synthesize inverted=_inverted;
@property(nonatomic) BOOL backlight; // @synthesize backlight=_backlight;
@property(readonly, retain, nonatomic) NSArray *supportedConfigVersions; // @synthesize supportedConfigVersions=_supportedConfigVersions;
@property(nonatomic) unsigned short timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned char pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) unsigned short buttonState; // @synthesize buttonState=_buttonState;
@property(nonatomic) id <WFDisplayControlPointChDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)playSoundWithBinaryKey:(unsigned char)arg1 source:(unsigned char)arg2 repeat:(unsigned char)arg3;
- (BOOL)setShouldSleepOnDisconnect:(BOOL)arg1;
- (BOOL)getDateTimeFormats;
- (BOOL)setDateFormat:(int)arg1 timeFormat:(int)arg2 startDayOfWeek:(int)arg3 watchfaceStyle:(int)arg4;
- (BOOL)setAutoPageScrollWithDelay:(double)arg1;
- (BOOL)getSupportedConfigVersions;
- (BOOL)getDeviceDate;
- (BOOL)setDeviceDate:(id)arg1 timeZone:(id)arg2;
- (BOOL)getDisplayInverted;
- (BOOL)setDisplayInverted:(BOOL)arg1;
- (BOOL)getVisablePage;
- (BOOL)showPageWithBinaryKey:(unsigned char)arg1 timeout:(unsigned char)arg2;
- (BOOL)getBacklightState;
- (BOOL)setBacklightOn:(unsigned char)arg1;
- (BOOL)decodeOpcodeSupportedConfigVersions:(char *)arg1;
- (BOOL)decodeOpcodeDateOptions:(char *)arg1;
- (BOOL)decodeOpcodeDate:(char *)arg1;
- (BOOL)decodeOpcodeDisplayState:(char *)arg1;
- (BOOL)decodeOpcodeResponse:(char *)arg1;
- (BOOL)decodeCharacteristicData;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
