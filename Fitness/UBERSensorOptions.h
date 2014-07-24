//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFJSONCoding.h"

@interface UBERSensorOptions : NSObject <WFJSONCoding>
{
    BOOL _usesZeroAveraging;
    BOOL _autoCalibration;
    BOOL _debugModeEnabled;
    BOOL _usesFlywheel;
    double _wheelCircumference;
    double _calibrationFactor;
    double _calibrationOffset;
}

@property(nonatomic) BOOL usesFlywheel; // @synthesize usesFlywheel=_usesFlywheel;
@property(nonatomic) BOOL debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(nonatomic) BOOL autoCalibration; // @synthesize autoCalibration=_autoCalibration;
@property(nonatomic) double calibrationOffset; // @synthesize calibrationOffset=_calibrationOffset;
@property(nonatomic) double calibrationFactor; // @synthesize calibrationFactor=_calibrationFactor;
@property(nonatomic) BOOL usesZeroAveraging; // @synthesize usesZeroAveraging=_usesZeroAveraging;
@property(nonatomic) double wheelCircumference; // @synthesize wheelCircumference=_wheelCircumference;

@end

