//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface WFActivityBarGraphView : UIView
{
    BOOL _showAxis;
    int _barScope;
    int _graphType;
    NSMutableArray *_graphViews;
    UIView *_axisView;
    double _startDate;
    double _endDate;
}

@property(retain, nonatomic) UIView *axisView; // @synthesize axisView=_axisView;
@property(retain, nonatomic) NSMutableArray *graphViews; // @synthesize graphViews=_graphViews;
@property(nonatomic) BOOL showAxis; // @synthesize showAxis=_showAxis;
@property(nonatomic) int graphType; // @synthesize graphType=_graphType;
@property(nonatomic) int barScope; // @synthesize barScope=_barScope;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)initGraphViews;
- (void)processWorkoutDictionaries:(id)arg1;
- (void)fetchWorkoutsSummary;
- (void)setPercentage:(double)arg1 forBarAtDayIndex:(int)arg2;
- (double)barWidth;
- (int)barGap;
- (int)numberOfBars;
- (void)reloadData;

@end

