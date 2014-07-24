//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WFDatabaseControllerListener.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface WFMigrationVC : UIViewController <WFDatabaseControllerListener>
{
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_closeButton;
    UIImageView *_wahooLogo;
    UILabel *_updatingLabel;
    UILabel *_didYouKnowLabel;
    UILabel *_randomFactLabel;
}

@property(nonatomic) __weak UILabel *randomFactLabel; // @synthesize randomFactLabel=_randomFactLabel;
@property(nonatomic) __weak UILabel *didYouKnowLabel; // @synthesize didYouKnowLabel=_didYouKnowLabel;
@property(nonatomic) __weak UILabel *updatingLabel; // @synthesize updatingLabel=_updatingLabel;
@property(nonatomic) __weak UIImageView *wahooLogo; // @synthesize wahooLogo=_wahooLogo;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)closeButtonTouched:(id)arg1;
- (void)databaseControllerDidCompleteSetupWithError:(id)arg1;
- (void)databaseControllerDidStartMigration;
- (void)databaseControllerDidStartSetup;
- (void)startMigration;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

