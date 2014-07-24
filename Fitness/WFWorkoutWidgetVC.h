//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MZPageViewControllerDelegate.h"
#import "NMApplicationNotificaionListener.h"
#import "SlideToCancelDelegate.h"
#import "WFActionSheetDelegate.h"
#import "WFLockHUDViewDelegate.h"
#import "WFSensorBikeTrainerDelegate.h"
#import "WFSessionManagerListener.h"
#import "WFWorkoutWidgetProtocol.h"

@class NSTimer, SlideToCancelViewController, UIButton, UILabel, UIWindow, WFEndWorkoutActionSheetVC, WFLapSummaryActionSheet, WFLockHUDView, WFSession, WFUIDataRefreshTimer, WFWorkoutPageBaseVC, WFWorkoutPagesVC;

@interface WFWorkoutWidgetVC : UIViewController <WFLockHUDViewDelegate, SlideToCancelDelegate, MZPageViewControllerDelegate, WFActionSheetDelegate, WFSessionManagerListener, WFSensorBikeTrainerDelegate, NMApplicationNotificaionListener, WFWorkoutWidgetProtocol>
{
    BOOL _workoutInterfaceLocked;
    UIButton *_startStopButton;
    UIButton *_lapResetButton;
    UIButton *_lockButton;
    UIButton *_nextPageButton;
    UIButton *_previousPageButton;
    UILabel *_lapNumberLabel;
    UILabel *_subTitleLabel;
    UILabel *_startLabel;
    UILabel *_backLabel;
    UILabel *_stopLabel;
    UILabel *_resumeLabel;
    UILabel *_lapLabel;
    UILabel *_pauseLabel;
    WFSession *_session;
    WFLockHUDView *_lockHUDView;
    SlideToCancelViewController *_slideToCancelVC;
    WFWorkoutPagesVC *_workoutPagesVC;
    unsigned int _lapCount;
    WFUIDataRefreshTimer *_dataRefreshTimer;
    WFWorkoutPageBaseVC *_currentWorkoutPage;
    int _currentWorkotuPageIndex;
    WFLapSummaryActionSheet *_lapActionSheet;
    WFEndWorkoutActionSheetVC *_endWorkoutSheet;
    NSTimer *_debugRateLabelTimer;
}

@property(retain, nonatomic) NSTimer *debugRateLabelTimer; // @synthesize debugRateLabelTimer=_debugRateLabelTimer;
@property(retain, nonatomic) WFEndWorkoutActionSheetVC *endWorkoutSheet; // @synthesize endWorkoutSheet=_endWorkoutSheet;
@property(retain, nonatomic) WFLapSummaryActionSheet *lapActionSheet; // @synthesize lapActionSheet=_lapActionSheet;
@property(nonatomic) int currentWorkotuPageIndex; // @synthesize currentWorkotuPageIndex=_currentWorkotuPageIndex;
@property(retain, nonatomic) WFWorkoutPageBaseVC *currentWorkoutPage; // @synthesize currentWorkoutPage=_currentWorkoutPage;
@property(retain, nonatomic) WFUIDataRefreshTimer *dataRefreshTimer; // @synthesize dataRefreshTimer=_dataRefreshTimer;
@property(nonatomic) unsigned int lapCount; // @synthesize lapCount=_lapCount;
@property(nonatomic) __weak WFWorkoutPagesVC *workoutPagesVC; // @synthesize workoutPagesVC=_workoutPagesVC;
@property(retain, nonatomic) SlideToCancelViewController *slideToCancelVC; // @synthesize slideToCancelVC=_slideToCancelVC;
@property(nonatomic) BOOL workoutInterfaceLocked; // @synthesize workoutInterfaceLocked=_workoutInterfaceLocked;
@property(retain, nonatomic) WFLockHUDView *lockHUDView; // @synthesize lockHUDView=_lockHUDView;
@property(retain, nonatomic) WFSession *session; // @synthesize session=_session;
@property(nonatomic) __weak UILabel *pauseLabel; // @synthesize pauseLabel=_pauseLabel;
@property(nonatomic) __weak UILabel *lapLabel; // @synthesize lapLabel=_lapLabel;
@property(nonatomic) __weak UILabel *resumeLabel; // @synthesize resumeLabel=_resumeLabel;
@property(nonatomic) __weak UILabel *stopLabel; // @synthesize stopLabel=_stopLabel;
@property(nonatomic) __weak UILabel *backLabel; // @synthesize backLabel=_backLabel;
@property(nonatomic) __weak UILabel *startLabel; // @synthesize startLabel=_startLabel;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *lapNumberLabel; // @synthesize lapNumberLabel=_lapNumberLabel;
@property(nonatomic) __weak UIButton *previousPageButton; // @synthesize previousPageButton=_previousPageButton;
@property(nonatomic) __weak UIButton *nextPageButton; // @synthesize nextPageButton=_nextPageButton;
@property(nonatomic) __weak UIButton *lockButton; // @synthesize lockButton=_lockButton;
@property(nonatomic) __weak UIButton *lapResetButton; // @synthesize lapResetButton=_lapResetButton;
@property(nonatomic) __weak UIButton *startStopButton; // @synthesize startStopButton=_startStopButton;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didPressButtonAtIndex:(int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pageViewController:(id)arg1 didChangeViewController:(id)arg2;
- (void)didReceiveCalibrationResponse:(unsigned char)arg1 offset:(unsigned short)arg2 temperature:(BOOL)arg3;
- (void)didCompleteSpindownWithTime:(float)arg1 temperature:(float)arg2 offset:(unsigned short)arg3;
- (void)didBeginSpindown;
- (void)prepareForUserCalibration;
- (void)slideToCancelCancelled;
- (void)unlockWorkoutAnimated:(BOOL)arg1;
- (void)lockWorkoutAnimated:(BOOL)arg1;
- (void)lockHUDViewDidReachFull:(id)arg1;
- (void)hideLockHUDView;
- (void)showLockHUDView;
- (void)hideLapSummaryAnimated:(BOOL)arg1;
- (void)hideLapSummary;
- (void)showLapSummary;
- (void)endWorkoutActionSheet:(id)arg1 didPressButtonAtIndex:(int)arg2;
- (void)showSaveWorkout;
- (void)sessionRecorderDidDiscardWorkout:(id)arg1;
- (void)sessionRecorder:(id)arg1 didSaveWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didResumeWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didPauseWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didLapWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didEndWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didBeginWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didBeginCountdown:(double)arg2;
- (void)lapWorkout;
- (void)resumeWorkout;
- (void)pauseWorkout;
- (void)startWorkoutCountdown;
- (void)configureViewForWorkoutState;
- (void)configureViewForWorkoutStateCountdown;
- (void)configureViewForWorkoutStateRunning;
- (void)configureViewForWorkoutStatePaused;
- (void)configureViewForWorkoutStateStopped;
- (void)updateNavigationBarTitle;
- (void)showPauseOverlay;
- (void)animatePause;
- (void)hidePauseOverlay;
- (void)hideAllButtonLabels;
- (void)lockButtonTouchCanceled:(id)arg1;
- (void)lockButtonTouchedDown:(id)arg1;
- (void)lapResetButtonTouched:(id)arg1;
- (void)startStopButtonTouched:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)loadSession:(id)arg1;
- (id)sharedRecorder;
- (id)trainer;
- (void)clearBackgroundState;
- (void)restoreBackgroundState;
- (void)saveStateForBackground;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

