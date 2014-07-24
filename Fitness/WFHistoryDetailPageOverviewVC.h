//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFHistoryDetailPageVC.h"

#import "WFManualDataCorrectionVCDelegate.h"

@class NSDateFormatter, UIButton, UIImageView, UILabel, UIView, WFActiveSensorIconsView, WFHistoryValueLabel;

@interface WFHistoryDetailPageOverviewVC : WFHistoryDetailPageVC <WFManualDataCorrectionVCDelegate>
{
    UILabel *_workoutNameLabel;
    UILabel *_dateLabel;
    WFHistoryValueLabel *_distanceCell;
    WFHistoryValueLabel *_activeTimeCell;
    WFHistoryValueLabel *_averageSpeedCell;
    WFHistoryValueLabel *_activeSensorsHeadingLabel;
    WFActiveSensorIconsView *_activeSensorsView;
    UIView *_workoutIconBackgroundView;
    UIImageView *_workoutIcon;
    UIButton *_editDistanceButton;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) __weak UIButton *editDistanceButton; // @synthesize editDistanceButton=_editDistanceButton;
@property(nonatomic) __weak UIImageView *workoutIcon; // @synthesize workoutIcon=_workoutIcon;
@property(nonatomic) __weak UIView *workoutIconBackgroundView; // @synthesize workoutIconBackgroundView=_workoutIconBackgroundView;
@property(nonatomic) __weak WFActiveSensorIconsView *activeSensorsView; // @synthesize activeSensorsView=_activeSensorsView;
@property(nonatomic) __weak WFHistoryValueLabel *activeSensorsHeadingLabel; // @synthesize activeSensorsHeadingLabel=_activeSensorsHeadingLabel;
@property(nonatomic) __weak WFHistoryValueLabel *averageSpeedCell; // @synthesize averageSpeedCell=_averageSpeedCell;
@property(nonatomic) __weak WFHistoryValueLabel *activeTimeCell; // @synthesize activeTimeCell=_activeTimeCell;
@property(nonatomic) __weak WFHistoryValueLabel *distanceCell; // @synthesize distanceCell=_distanceCell;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *workoutNameLabel; // @synthesize workoutNameLabel=_workoutNameLabel;
- (void).cxx_destruct;
- (void)dismissDataCorrectionVC:(id)arg1;
- (void)distanceCorrectionButtonTouched:(id)arg1;
- (void)populateDataFromWorkout:(id)arg1;
- (void)setWorkout:(id)arg1;
- (BOOL)distanceEditEnabled;
- (void)localize;
- (void)viewDidLoad;

@end
