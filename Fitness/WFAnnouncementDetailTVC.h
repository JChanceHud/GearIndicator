//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFDynamicTableViewController.h"

#import "WFNewAnnouncementWizardDelegate.h"

@class UILabel, WFAnnouncement;

@interface WFAnnouncementDetailTVC : WFDynamicTableViewController <WFNewAnnouncementWizardDelegate>
{
    BOOL _editingTrigger;
    BOOL _editingSoundBites;
    WFAnnouncement *_announcement;
    UILabel *_verboseLabel;
}

@property(nonatomic) __weak UILabel *verboseLabel; // @synthesize verboseLabel=_verboseLabel;
@property(nonatomic) BOOL editingSoundBites; // @synthesize editingSoundBites=_editingSoundBites;
@property(nonatomic) BOOL editingTrigger; // @synthesize editingTrigger=_editingTrigger;
@property(retain, nonatomic) WFAnnouncement *announcement; // @synthesize announcement=_announcement;
- (void).cxx_destruct;
- (void)previewButtonPressed;
- (void)editSoundBitesPressed;
- (void)triggerButtonPressed;
- (void)newAnnouncementWizard:(id)arg1 didReturnWithAnnouncement:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)verboseSwitchChanged:(id)arg1;
- (int)staticSections;
@property(readonly, nonatomic) int elementsSection;
@property(readonly, nonatomic) int buttonsSection;
@property(readonly, nonatomic) int verboseSection;
@property(readonly, nonatomic) int triggerSection;
- (void)doneButtonTouched:(id)arg1;
- (BOOL)enableRightModalDismissButton;
- (void)viewDidLoad;

@end

