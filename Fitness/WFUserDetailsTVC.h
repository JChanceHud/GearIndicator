//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFStaticTableViewController.h"

@class MHTextField, NSDateFormatter, NSNumberFormatter, UBERUser, UIDatePicker, UILabel, UISegmentedControl, UISwitch, WFBasicTableViewCell, WFHeightPicker;

@interface WFUserDetailsTVC : WFStaticTableViewController
{
    WFBasicTableViewCell *_wahooliganCodeCell;
    UILabel *_unitsLabel;
    UILabel *_heightLabel;
    UILabel *_weightLabel;
    UILabel *_dateOfBirthLabel;
    UILabel *_genderLabel;
    UILabel *_showGarminWatchImportLabel;
    UILabel *_showGarminDetailLabel;
    UISegmentedControl *_unitsControl;
    MHTextField *_heightField;
    MHTextField *_weightField;
    MHTextField *_dateOfBirthField;
    UISegmentedControl *_genderControl;
    UISwitch *_showGarminImportSwitch;
    UIDatePicker *_datePicker;
    WFHeightPicker *_heightPicker;
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
    UBERUser *_user;
}

@property(retain, nonatomic) UBERUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) WFHeightPicker *heightPicker; // @synthesize heightPicker=_heightPicker;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak UISwitch *showGarminImportSwitch; // @synthesize showGarminImportSwitch=_showGarminImportSwitch;
@property(nonatomic) __weak UISegmentedControl *genderControl; // @synthesize genderControl=_genderControl;
@property(nonatomic) __weak MHTextField *dateOfBirthField; // @synthesize dateOfBirthField=_dateOfBirthField;
@property(nonatomic) __weak MHTextField *weightField; // @synthesize weightField=_weightField;
@property(nonatomic) __weak MHTextField *heightField; // @synthesize heightField=_heightField;
@property(nonatomic) __weak UISegmentedControl *unitsControl; // @synthesize unitsControl=_unitsControl;
@property(nonatomic) __weak UILabel *showGarminDetailLabel; // @synthesize showGarminDetailLabel=_showGarminDetailLabel;
@property(nonatomic) __weak UILabel *showGarminWatchImportLabel; // @synthesize showGarminWatchImportLabel=_showGarminWatchImportLabel;
@property(nonatomic) __weak UILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(nonatomic) __weak UILabel *dateOfBirthLabel; // @synthesize dateOfBirthLabel=_dateOfBirthLabel;
@property(nonatomic) __weak UILabel *weightLabel; // @synthesize weightLabel=_weightLabel;
@property(nonatomic) __weak UILabel *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(nonatomic) __weak UILabel *unitsLabel; // @synthesize unitsLabel=_unitsLabel;
@property(nonatomic) __weak WFBasicTableViewCell *wahooliganCodeCell; // @synthesize wahooliganCodeCell=_wahooliganCodeCell;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)wahooliganCodeFieldEditingEnded:(id)arg1;
- (void)viewTapped;
- (BOOL)resignFirstResponder;
- (void)weightFieldEditingBegan;
- (void)heightFieldEditingBegan;
- (void)weightFieldEditingEnded;
- (void)heightFieldEditingEnded;
- (void)genderControlChanged:(id)arg1;
- (void)unitsControlChanged:(id)arg1;
- (void)birthdateChanged;
- (void)showGarminImportChanged:(id)arg1;
- (void)populateValues;
- (void)updateWahooliganCodeUI;
- (BOOL)enableRightModalDismissButton;
- (void)viewDidLoad;

@end

