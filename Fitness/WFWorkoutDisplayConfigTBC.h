//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "WFWorkoutDisplaysTVCDelegate.h"

@class UBERWorkoutDisplay, UBERWorkoutProfile;

@interface WFWorkoutDisplayConfigTBC : UITabBarController <WFWorkoutDisplaysTVCDelegate>
{
    UBERWorkoutProfile *_workoutProfile;
    UBERWorkoutDisplay *_workoutDisplay;
}

@property(retain, nonatomic) UBERWorkoutDisplay *workoutDisplay; // @synthesize workoutDisplay=_workoutDisplay;
@property(retain, nonatomic) UBERWorkoutProfile *workoutProfile; // @synthesize workoutProfile=_workoutProfile;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)workoutDisplaysTVC:(id)arg1 didSelectWorkoutDisplay:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;

@end

