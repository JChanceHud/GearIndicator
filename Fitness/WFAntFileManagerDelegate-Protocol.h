//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAntFSDeviceDelegate.h"

@class NSString, WFAntFSDirectory, WFAntFileManager;

@protocol WFAntFileManagerDelegate <WFAntFSDeviceDelegate>
- (void)antFileManager:(WFAntFileManager *)arg1 updatePasskey:(char *)arg2 length:(unsigned char)arg3;
- (void)antFileManager:(WFAntFileManager *)arg1 downloadFinished:(BOOL)arg2 filePath:(NSString *)arg3;

@optional
- (void)antFileManager:(WFAntFileManager *)arg1 parseFITProgress:(float)arg2;
- (void)antFileManager:(WFAntFileManager *)arg1 downloadProgress:(unsigned long)arg2;
- (void)antFileManager:(WFAntFileManager *)arg1 receivedResponse:(int)arg2;
- (void)antFileManager:(WFAntFileManager *)arg1 receivedDirectoryInfo:(WFAntFSDirectory *)arg2;
@end

