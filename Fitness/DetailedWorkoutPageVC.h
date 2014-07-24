//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullWorkoutPageVC.h"

@class UILabel;

@interface DetailedWorkoutPageVC : FullWorkoutPageVC
{
    UILabel *_lastMileHeaderLabel;
    UILabel *_fastestMileHeaderLabel;
    UILabel *_lapTimeHeaderLabel;
    UILabel *_lapDistanceHeaderLabel;
    UILabel *_heartRateHeaderLabel;
    UILabel *_caloriesHeaderLabel;
    UILabel *_headingHeaderLabel;
    UILabel *_lapTimeWorkoutHeaderLabel;
    UILabel *_lapTimeLastLapHeaderLabel;
    UILabel *_speedWorkoutHeaderLabel;
    UILabel *_speedLastLapHeaderLabel;
    UILabel *_speedLastMileHeaderLabel;
    UILabel *_speedThisLapHeaderLabel;
    UILabel *_lapDistanceWorkoutHeaderLabel;
    UILabel *_lapDistanceLastLapHeaderLabel;
    UILabel *_heartRateAvgHeaderLabel;
    UILabel *_heartRateMaxHeaderLabel;
}

@property(nonatomic) __weak UILabel *heartRateMaxHeaderLabel; // @synthesize heartRateMaxHeaderLabel=_heartRateMaxHeaderLabel;
@property(nonatomic) __weak UILabel *heartRateAvgHeaderLabel; // @synthesize heartRateAvgHeaderLabel=_heartRateAvgHeaderLabel;
@property(nonatomic) __weak UILabel *lapDistanceLastLapHeaderLabel; // @synthesize lapDistanceLastLapHeaderLabel=_lapDistanceLastLapHeaderLabel;
@property(nonatomic) __weak UILabel *lapDistanceWorkoutHeaderLabel; // @synthesize lapDistanceWorkoutHeaderLabel=_lapDistanceWorkoutHeaderLabel;
@property(nonatomic) __weak UILabel *speedThisLapHeaderLabel; // @synthesize speedThisLapHeaderLabel=_speedThisLapHeaderLabel;
@property(nonatomic) __weak UILabel *speedLastMileHeaderLabel; // @synthesize speedLastMileHeaderLabel=_speedLastMileHeaderLabel;
@property(nonatomic) __weak UILabel *speedLastLapHeaderLabel; // @synthesize speedLastLapHeaderLabel=_speedLastLapHeaderLabel;
@property(nonatomic) __weak UILabel *speedWorkoutHeaderLabel; // @synthesize speedWorkoutHeaderLabel=_speedWorkoutHeaderLabel;
@property(nonatomic) __weak UILabel *lapTimeLastLapHeaderLabel; // @synthesize lapTimeLastLapHeaderLabel=_lapTimeLastLapHeaderLabel;
@property(nonatomic) __weak UILabel *lapTimeWorkoutHeaderLabel; // @synthesize lapTimeWorkoutHeaderLabel=_lapTimeWorkoutHeaderLabel;
@property(nonatomic) __weak UILabel *headingHeaderLabel; // @synthesize headingHeaderLabel=_headingHeaderLabel;
@property(nonatomic) __weak UILabel *caloriesHeaderLabel; // @synthesize caloriesHeaderLabel=_caloriesHeaderLabel;
@property(nonatomic) __weak UILabel *heartRateHeaderLabel; // @synthesize heartRateHeaderLabel=_heartRateHeaderLabel;
@property(nonatomic) __weak UILabel *lapDistanceHeaderLabel; // @synthesize lapDistanceHeaderLabel=_lapDistanceHeaderLabel;
@property(nonatomic) __weak UILabel *lapTimeHeaderLabel; // @synthesize lapTimeHeaderLabel=_lapTimeHeaderLabel;
@property(nonatomic) __weak UILabel *fastestMileHeaderLabel; // @synthesize fastestMileHeaderLabel=_fastestMileHeaderLabel;
@property(nonatomic) __weak UILabel *lastMileHeaderLabel; // @synthesize lastMileHeaderLabel=_lastMileHeaderLabel;
- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)updateWorkoutPageGUI;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak UILabel *cadenceHeaderLabel;
@property(nonatomic) __weak UILabel *speedHeaderLabel;

@end

