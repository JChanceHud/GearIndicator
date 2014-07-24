//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFHistoryDetailPageVC.h"

@class WFCadenceFormatter, WFHistoryValueLabel;

@interface WFHistoryDetailPageCadenceVC : WFHistoryDetailPageVC
{
    WFCadenceFormatter *_cadenceFormatter;
    WFHistoryValueLabel *_averageCadenceCell;
    WFHistoryValueLabel *_maxCadenceCell;
}

@property(nonatomic) __weak WFHistoryValueLabel *maxCadenceCell; // @synthesize maxCadenceCell=_maxCadenceCell;
@property(nonatomic) __weak WFHistoryValueLabel *averageCadenceCell; // @synthesize averageCadenceCell=_averageCadenceCell;
@property(retain, nonatomic) WFCadenceFormatter *cadenceFormatter; // @synthesize cadenceFormatter=_cadenceFormatter;
- (void).cxx_destruct;
- (void)populateDataFromWorkout:(id)arg1;
- (void)setWorkout:(id)arg1;
- (unsigned int)cadenceUnits;
- (void)localize;
- (void)viewDidLoad;

@end

