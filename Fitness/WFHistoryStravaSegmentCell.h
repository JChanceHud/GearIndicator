//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FKStravaSegmentEffort, UIButton, UIImageView, UILabel, WFFormatterCentre;

@interface WFHistoryStravaSegmentCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    UIImageView *_acheivementImageView;
    UIButton *_starredButton;
    FKStravaSegmentEffort *_segmentEffort;
}

@property(retain, nonatomic) FKStravaSegmentEffort *segmentEffort; // @synthesize segmentEffort=_segmentEffort;
@property(nonatomic) __weak UIButton *starredButton; // @synthesize starredButton=_starredButton;
@property(nonatomic) __weak UIImageView *acheivementImageView; // @synthesize acheivementImageView=_acheivementImageView;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) WFFormatterCentre *formatter;

@end

