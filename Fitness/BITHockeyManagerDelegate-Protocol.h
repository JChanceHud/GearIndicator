//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITAuthenticatorDelegate.h"
#import "BITCrashManagerDelegate.h"
#import "BITFeedbackManagerDelegate.h"
#import "BITUpdateManagerDelegate.h"
#import "NSObject.h"

@class BITHockeyBaseManager, BITHockeyManager, NSString, UIViewController;

@protocol BITHockeyManagerDelegate <NSObject, BITCrashManagerDelegate, BITUpdateManagerDelegate, BITFeedbackManagerDelegate, BITAuthenticatorDelegate>

@optional
- (NSString *)userEmailForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (NSString *)userNameForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (NSString *)userIDForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (UIViewController *)viewControllerForHockeyManager:(BITHockeyManager *)arg1 componentManager:(BITHockeyBaseManager *)arg2;
- (BOOL)shouldUseLiveIdentifierForHockeyManager:(BITHockeyManager *)arg1;
@end
