//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface SChartBoxGestureStyle : NSObject <NSCopying>
{
    UIColor *boxLineColor;
    UIColor *trackingLineColor;
    float boxLineWidth;
    float trackingLineWidth;
}

@property(nonatomic) float trackingLineWidth; // @synthesize trackingLineWidth;
@property(nonatomic) float boxLineWidth; // @synthesize boxLineWidth;
@property(retain, nonatomic) UIColor *trackingLineColor; // @synthesize trackingLineColor;
@property(retain, nonatomic) UIColor *boxLineColor; // @synthesize boxLineColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

