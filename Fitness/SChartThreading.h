//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SChartThreading : NSObject
{
}

+ (id)warnedSelectors;
+ (void)clearWarnedSelectors;
+ (void)executeOnMainThread:(CDUnknownBlockType)arg1;
+ (void)issueMainThreadWarningForSelector:(SEL)arg1 description:(id)arg2 errorHandler:(id)arg3;
+ (BOOL)isOnMainThread;

@end

