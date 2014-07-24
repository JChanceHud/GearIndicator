//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSString, UIBarButtonItem, UIScrollView, UIToolbar;

@interface MHTextField : UITextField
{
    UITextField *_textField;
    BOOL _disabled;
    BOOL required;
    BOOL keyboardIsShown;
    BOOL invalid;
    BOOL _isDateField;
    BOOL _isEmailField;
    BOOL _hasScrollView;
    BOOL _isToolBarCommand;
    BOOL _isDoneCommand;
    UIScrollView *scrollView;
    UIToolbar *toolbar;
    NSString *_dateFormat;
    MHTextField *_nextField;
    MHTextField *_previousField;
    UIBarButtonItem *_previousBarButton;
    UIBarButtonItem *_nextBarButton;
    id _keyboardDidShowNotificationObserver;
    id _keyboardWillHideNotificationObserver;
    struct CGSize keyboardSize;
}

@property __weak id keyboardWillHideNotificationObserver; // @synthesize keyboardWillHideNotificationObserver=_keyboardWillHideNotificationObserver;
@property __weak id keyboardDidShowNotificationObserver; // @synthesize keyboardDidShowNotificationObserver=_keyboardDidShowNotificationObserver;
@property(retain, nonatomic) UIBarButtonItem *nextBarButton; // @synthesize nextBarButton=_nextBarButton;
@property(retain, nonatomic) UIBarButtonItem *previousBarButton; // @synthesize previousBarButton=_previousBarButton;
@property(nonatomic, setter=setDoneCommand:) BOOL isDoneCommand; // @synthesize isDoneCommand=_isDoneCommand;
@property(nonatomic, setter=setToolbarCommand:) BOOL isToolBarCommand; // @synthesize isToolBarCommand=_isToolBarCommand;
@property(nonatomic) BOOL hasScrollView; // @synthesize hasScrollView=_hasScrollView;
@property(retain, nonatomic) MHTextField *previousField; // @synthesize previousField=_previousField;
@property(retain, nonatomic) MHTextField *nextField; // @synthesize nextField=_nextField;
@property(nonatomic, setter=setEmailField:) BOOL isEmailField; // @synthesize isEmailField=_isEmailField;
@property(nonatomic, setter=setDateField:) BOOL isDateField; // @synthesize isDateField=_isDateField;
@property(retain, nonatomic) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(nonatomic) BOOL invalid; // @synthesize invalid;
@property(nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize;
@property(nonatomic) BOOL keyboardIsShown; // @synthesize keyboardIsShown;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) BOOL required; // @synthesize required;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)setDateFieldWithFormat:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)validate;
- (void)scrollToField;
- (void)datePickerValueChanged:(id)arg1;
- (void)selectInputView:(id)arg1;
- (void)setBarButtonNeedsDisplayAtTag:(int)arg1;
- (void)becomeActive:(id)arg1;
- (void)previousButtonIsClicked:(id)arg1;
- (void)nextButtonIsClicked:(id)arg1;
- (void)doneButtonIsClicked:(id)arg1;
- (void)setNextTextField:(id)arg1;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

