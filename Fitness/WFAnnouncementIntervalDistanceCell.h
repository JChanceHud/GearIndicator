//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAnnouncementIntervalCell.h"

@class UILabel, UITextField;

@interface WFAnnouncementIntervalDistanceCell : WFAnnouncementIntervalCell
{
    UITextField *_textField;
    UILabel *_everyLabel;
    UILabel *_unitsLabel;
}

@property(nonatomic) __weak UILabel *unitsLabel; // @synthesize unitsLabel=_unitsLabel;
@property(nonatomic) __weak UILabel *everyLabel; // @synthesize everyLabel=_everyLabel;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)textChanged:(id)arg1;
- (void)setDefaults;
- (void)updateValueLabel;
- (void)setAnnouncement:(id)arg1;
- (void)awakeFromNib;

@end

