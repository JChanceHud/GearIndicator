//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFMKTileOverlay;

@protocol WFMKTileOverlayDelegate <NSObject>
- (void)tileOverlayDidFinishLoadingTiles:(WFMKTileOverlay *)arg1 fullyLoaded:(BOOL)arg2;
- (void)tileOverlayDidStartLoadingTiles:(WFMKTileOverlay *)arg1;
@end

