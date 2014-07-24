//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFStaticTableViewController.h"

@class UIBarButtonItem, UILabel, WFAnnouncement, WFAnnouncementIntervalDistanceCell, WFAnnouncementIntervalDurationCell, WFAnnouncementIntervalHRZoneCell, WFBasicTableViewCell;

@interface WFNewAnnouncementIntervalTVC : WFStaticTableViewController
{
    WFAnnouncement *_announcement;
    UILabel *_headerLabel;
    WFAnnouncementIntervalDistanceCell *_distanceCell;
    WFAnnouncementIntervalHRZoneCell *_hrCell;
    WFAnnouncementIntervalDurationCell *_durationCell;
    WFBasicTableViewCell *_nextCell;
    int _intervalType;
}

@property(nonatomic) int intervalType; // @synthesize intervalType=_intervalType;
@property(nonatomic) __weak WFBasicTableViewCell *nextCell; // @synthesize nextCell=_nextCell;
@property(nonatomic) __weak WFAnnouncementIntervalDurationCell *durationCell; // @synthesize durationCell=_durationCell;
@property(nonatomic) __weak WFAnnouncementIntervalHRZoneCell *hrCell; // @synthesize hrCell=_hrCell;
@property(nonatomic) __weak WFAnnouncementIntervalDistanceCell *distanceCell; // @synthesize distanceCell=_distanceCell;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) WFAnnouncement *announcement; // @synthesize announcement=_announcement;
- (void).cxx_destruct;
- (void)doneButtonTouched:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)configureCellVisibility;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak UIBarButtonItem *doneButton;

@end
