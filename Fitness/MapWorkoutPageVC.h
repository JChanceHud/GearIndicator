//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullWorkoutPageVC.h"

@class MapWorkoutVC, UIView;

@interface MapWorkoutPageVC : FullWorkoutPageVC
{
    UIView *_mapContainerView;
    MapWorkoutVC *_mapWorkoutViewController;
}

@property(retain, nonatomic) MapWorkoutVC *mapWorkoutViewController; // @synthesize mapWorkoutViewController=_mapWorkoutViewController;
@property(nonatomic) __weak UIView *mapContainerView; // @synthesize mapContainerView=_mapContainerView;
- (void).cxx_destruct;
- (BOOL)doesRequireNavigationButtons;
- (void)setWorkoutMapController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

