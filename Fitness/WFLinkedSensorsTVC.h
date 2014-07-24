//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFDynamicTableViewController.h"

@class NSArray, UBERWorkoutProfile, UILabel, UIView;

@interface WFLinkedSensorsTVC : WFDynamicTableViewController
{
    UBERWorkoutProfile *_workoutProfile;
    UIView *_headerView;
    UILabel *_headerLabel;
    NSArray *_sensors;
}

@property(retain, nonatomic) NSArray *sensors; // @synthesize sensors=_sensors;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UBERWorkoutProfile *workoutProfile; // @synthesize workoutProfile=_workoutProfile;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)viewDidLoad;

@end
