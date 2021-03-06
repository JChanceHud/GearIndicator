//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFDynamicTableViewController.h"

#import "WFNewAnnouncementWizardDelegate.h"

@class NSArray, UBERWorkoutProfile;

@interface WFAudioAnnouncementsTVC : WFDynamicTableViewController <WFNewAnnouncementWizardDelegate>
{
    BOOL _autoLapMode;
    UBERWorkoutProfile *_profile;
    NSArray *_profiles;
}

@property(retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(nonatomic) BOOL autoLapMode; // @synthesize autoLapMode=_autoLapMode;
@property(retain, nonatomic) UBERWorkoutProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)newAnnouncementWizard:(id)arg1 didReturnWithAnnouncement:(id)arg2;
- (void)triggerButtonPressed;
- (void)createAnnouncementTouched;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) int staticSectionCount;
@property(readonly, nonatomic) int editSection;
@property(readonly, nonatomic) int addSection;
- (void)doneButtonTouched:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)enableRightModalDismissButton;
- (void)viewDidLoad;

@end

