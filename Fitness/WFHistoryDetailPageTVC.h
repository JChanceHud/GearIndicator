//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class WFFormatterCentre, WFHistoryDetailMapVC, WFWorkout;

@interface WFHistoryDetailPageTVC : UITableViewController
{
    BOOL _minimized;
    WFWorkout *_workout;
    WFFormatterCentre *_formatterCentre;
    WFHistoryDetailMapVC *_mapViewController;
}

@property(retain, nonatomic) WFHistoryDetailMapVC *mapViewController; // @synthesize mapViewController=_mapViewController;
@property(nonatomic) BOOL minimized; // @synthesize minimized=_minimized;
@property(retain, nonatomic) WFFormatterCentre *formatterCentre; // @synthesize formatterCentre=_formatterCentre;
@property(retain, nonatomic) WFWorkout *workout; // @synthesize workout=_workout;
- (void).cxx_destruct;
- (void)setMinimized:(BOOL)arg1 WithDuration:(double)arg2;
- (double)visibleHeightWhenMinimized;

@end

