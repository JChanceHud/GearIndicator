//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UBERUser, UIBarButtonItem, UIDatePicker, UILabel;

@interface WFHrBurnBurstDateOfBirthVC : UIViewController
{
    UILabel *_enterDateLabel;
    UIBarButtonItem *_nextButton;
    UBERUser *_user;
    UIDatePicker *_datePicker;
}

@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UBERUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *enterDateLabel; // @synthesize enterDateLabel=_enterDateLabel;
- (void).cxx_destruct;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLoad;

@end

