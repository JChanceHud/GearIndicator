//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WFHistoryCalendarScrollerDatasource.h"
#import "WFHistoryCalendarScrollerDelegate.h"
#import "WFHistoryTimelineDatasource.h"
#import "WFHistoryTimelineDelegate.h"
#import "WFPartiallyInteractiveScrollViewDataSource.h"

@class UIBarButtonItem, UIDynamicAnimator, UIView, WFHistoryCalendarScrollerCVC, WFHistorySummaryPVC, WFHistoryTimelineTVC, WFPartiallyInteractiveScrollView;

@interface WFHistoryNavigatorVC : UIViewController <WFPartiallyInteractiveScrollViewDataSource, WFHistoryCalendarScrollerDelegate, WFHistoryCalendarScrollerDatasource, WFHistoryTimelineDatasource, WFHistoryTimelineDelegate>
{
    WFPartiallyInteractiveScrollView *_scrollView;
    UIView *_contentView;
    UIView *_timelineContainerView;
    UIView *_calendarContainerView;
    UIView *_summaryContainerView;
    WFHistoryTimelineTVC *_timelineTVC;
    WFHistoryCalendarScrollerCVC *_calendarCVC;
    WFHistorySummaryPVC *_summaryPVC;
    UIBarButtonItem *_filterButton;
    UIDynamicAnimator *_animator;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_editButton;
}

@property(retain, nonatomic) UIBarButtonItem *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak UIBarButtonItem *filterButton; // @synthesize filterButton=_filterButton;
@property(nonatomic) __weak WFHistorySummaryPVC *summaryPVC; // @synthesize summaryPVC=_summaryPVC;
@property(nonatomic) __weak WFHistoryCalendarScrollerCVC *calendarCVC; // @synthesize calendarCVC=_calendarCVC;
@property(nonatomic) __weak WFHistoryTimelineTVC *timelineTVC; // @synthesize timelineTVC=_timelineTVC;
@property(nonatomic) __weak UIView *summaryContainerView; // @synthesize summaryContainerView=_summaryContainerView;
@property(nonatomic) __weak UIView *calendarContainerView; // @synthesize calendarContainerView=_calendarContainerView;
@property(nonatomic) __weak UIView *timelineContainerView; // @synthesize timelineContainerView=_timelineContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak WFPartiallyInteractiveScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)bounceScrollView;
- (void)timeline:(id)arg1 didScrollToDate:(double)arg2;
- (void)calendarScroller:(id)arg1 didUpdateStartDate:(double)arg2 endDate:(double)arg3 scope:(int)arg4;
- (void)calendarScrollerTapped:(id)arg1;
- (double)firstDateForScroller:(id)arg1;
- (BOOL)scrollView:(id)arg1 scrollEnabledForTouchPoint:(struct CGPoint)arg2;
- (void)editButtonTouched:(id)arg1;
- (void)doneButtonTouched:(id)arg1;
- (void)cleanupChildPointers;
- (void)setupChildPointers;
- (void)presentHistoryDetailWithWorkout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableScrollsToTopPropertyOnAllSubviewsOf:(id)arg1;
- (void)disableScollsToTop;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)localize;
- (void)viewDidLoad;
- (void)dealloc;

@end
