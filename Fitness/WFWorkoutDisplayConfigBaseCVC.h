//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UBERWorkoutDisplayPageInteractionDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "WFWorkoutDisplayConfigCVCellDelegate.h"
#import "WFWorkoutDisplayDataGroupsTVCDelegate.h"
#import "WFWorkoutDisplayPagesTVCDelegate.h"
#import "WFWorkoutDisplayTriggersTVCDelegate.h"
#import "WFWorkoutDisplaysTVCDelegate.h"

@class NSArray, NSString, UBERWorkoutDisplay, UBERWorkoutDisplayPage, UBERWorkoutProfile, UIBarButtonItem, UIButton, UICollectionView;

@interface WFWorkoutDisplayConfigBaseCVC : UIViewController <WFWorkoutDisplayPagesTVCDelegate, WFWorkoutDisplaysTVCDelegate, WFWorkoutDisplayConfigCVCellDelegate, UBERWorkoutDisplayPageInteractionDelegate, WFWorkoutDisplayDataGroupsTVCDelegate, WFWorkoutDisplayTriggersTVCDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _hiddenPagesMode;
    BOOL _infoMode;
    UBERWorkoutProfile *_workoutProfile;
    UBERWorkoutDisplay *_workoutDisplay;
    UICollectionView *_collectionView;
    UIButton *_addButton;
    UIBarButtonItem *_profilesButton;
    UIButton *_leftButton;
    UIButton *_rightButton;
    NSArray *_displayPages;
    UBERWorkoutDisplayPage *_editingPage;
    unsigned int _workoutDisplayType;
    NSString *_editingGroupKey;
    int _currentPageIndex;
    struct CGPoint _longPressPoint;
}

@property(nonatomic) struct CGPoint longPressPoint; // @synthesize longPressPoint=_longPressPoint;
@property(nonatomic) BOOL infoMode; // @synthesize infoMode=_infoMode;
@property(nonatomic) int currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(copy, nonatomic) NSString *editingGroupKey; // @synthesize editingGroupKey=_editingGroupKey;
@property(nonatomic) unsigned int workoutDisplayType; // @synthesize workoutDisplayType=_workoutDisplayType;
@property(retain, nonatomic) UBERWorkoutDisplayPage *editingPage; // @synthesize editingPage=_editingPage;
@property(retain, nonatomic) NSArray *displayPages; // @synthesize displayPages=_displayPages;
@property(nonatomic) __weak UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak UIBarButtonItem *profilesButton; // @synthesize profilesButton=_profilesButton;
@property(nonatomic) __weak UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) BOOL hiddenPagesMode; // @synthesize hiddenPagesMode=_hiddenPagesMode;
@property(retain, nonatomic) UBERWorkoutDisplay *workoutDisplay; // @synthesize workoutDisplay=_workoutDisplay;
@property(retain, nonatomic) UBERWorkoutProfile *workoutProfile; // @synthesize workoutProfile=_workoutProfile;
- (void).cxx_destruct;
- (void)workoutDisplayTriggersTVC:(id)arg1 didReturnWithTriggerKey:(id)arg2;
- (void)workoutDisplayDataGroupsTVC:(id)arg1 didReturnWithCustomText:(id)arg2;
- (void)workoutDisplayDataGroupsTVC:(id)arg1 didReturnWithGroupKey:(id)arg2;
- (void)displayPage:(id)arg1 didSelectGroupWithKey:(id)arg2;
- (void)shiftCell:(id)arg1 byAmount:(int)arg2;
- (void)deleteCell:(id)arg1;
- (void)workoutDisplaysTVC:(id)arg1 didSelectWorkoutDisplay:(id)arg2;
- (void)workoutDisplayPagesTVC:(id)arg1 didSelectDisplayPage:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)rightButtonTouched:(id)arg1;
- (void)leftButtonTouched:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)longPress:(id)arg1;
- (void)addButtonTouched:(id)arg1;
- (void)deletePageAtIndex:(int)arg1;
- (void)addPageAfterCurrentPage:(id)arg1;
- (void)updatePageNumber;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)dealloc;
- (void)themeHudButton:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

