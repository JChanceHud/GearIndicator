//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation;

@interface WFLocationData : NSObject
{
    CLLocation *_location;
    double _accumDistance;
    double _speed;
}

@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double accumDistance; // @synthesize accumDistance=_accumDistance;
- (void).cxx_destruct;

@end

