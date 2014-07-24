//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class DAProgressOverlayView, GPUImageFilter, UIActivityIndicatorView, UIImageView, UILabel, WFShareActivity, WFShareItem;

@interface WFHistoryDetailSharingCell : UICollectionViewCell
{
    GPUImageFilter *_unauthorizedImageFilter;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIActivityIndicatorView *_activityIndicator;
    WFShareItem *_shareItem;
    WFShareActivity *_activity;
    DAProgressOverlayView *_progressOverlayView;
}

@property(retain, nonatomic) DAProgressOverlayView *progressOverlayView; // @synthesize progressOverlayView=_progressOverlayView;
@property(retain, nonatomic) WFShareActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) WFShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) GPUImageFilter *unauthorizedImageFilter; // @synthesize unauthorizedImageFilter=_unauthorizedImageFilter;
- (void).cxx_destruct;
- (void)layoutCellWithShareActivity:(id)arg1 shareItem:(id)arg2;

@end

