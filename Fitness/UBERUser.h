//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFJSONCoding.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, UBERWorkoutProfile, UIImage;

@interface UBERUser : NSObject <WFJSONCoding>
{
    BOOL _metric;
    BOOL _male;
    BOOL _showGarminImportOption;
    BOOL _hideUnauthorizedShareActivities;
    NSString *_uid;
    NSString *_email;
    NSString *_displayName;
    NSDate *_birthdate;
    UIImage *_profileImage;
    NSMutableDictionary *_fitDevicePasskeys;
    NSString *_wahooliganBetaCode;
    NSDictionary *_bike;
    NSMutableDictionary *_completedTutorials;
    NSArray *_accounts;
    NSArray *_workoutProfiles;
    NSArray *_sensors;
    NSArray *_workoutDisplays;
    NSString *_lastWorkoutProfileUID;
    double _height;
    double _weight;
    double _hrMax;
    double _hrResting;
    double _hrBurn;
    double _hrBurst;
    double _hrZone1Ceiling;
    double _hrZone2Ceiling;
    double _hrZone3Ceiling;
    double _hrZone4Ceiling;
    double _hrZone5Ceiling;
    double _powerZone1Ceiling;
    double _powerZone2Ceiling;
    double _powerZone3Ceiling;
    double _powerZone4Ceiling;
    double _powerZone5Ceiling;
    double _powerCritical;
    double _calibrationConstantA;
    double _calibrationConstantB;
    double _calibrationConstantC;
}

+ (id)JSONValueTransformerForKey:(id)arg1;
+ (Class)childClassForArrayWithKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)developmentUser;
+ (id)templateUser;
@property(copy, nonatomic) NSString *lastWorkoutProfileUID; // @synthesize lastWorkoutProfileUID=_lastWorkoutProfileUID;
@property(retain, nonatomic) NSArray *workoutDisplays; // @synthesize workoutDisplays=_workoutDisplays;
@property(retain, nonatomic) NSArray *sensors; // @synthesize sensors=_sensors;
@property(retain, nonatomic) NSArray *workoutProfiles; // @synthesize workoutProfiles=_workoutProfiles;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) double calibrationConstantC; // @synthesize calibrationConstantC=_calibrationConstantC;
@property(nonatomic) double calibrationConstantB; // @synthesize calibrationConstantB=_calibrationConstantB;
@property(nonatomic) double calibrationConstantA; // @synthesize calibrationConstantA=_calibrationConstantA;
@property(nonatomic) double powerCritical; // @synthesize powerCritical=_powerCritical;
@property(nonatomic) double powerZone5Ceiling; // @synthesize powerZone5Ceiling=_powerZone5Ceiling;
@property(nonatomic) double powerZone4Ceiling; // @synthesize powerZone4Ceiling=_powerZone4Ceiling;
@property(nonatomic) double powerZone3Ceiling; // @synthesize powerZone3Ceiling=_powerZone3Ceiling;
@property(nonatomic) double powerZone2Ceiling; // @synthesize powerZone2Ceiling=_powerZone2Ceiling;
@property(nonatomic) double powerZone1Ceiling; // @synthesize powerZone1Ceiling=_powerZone1Ceiling;
@property(nonatomic) double hrZone5Ceiling; // @synthesize hrZone5Ceiling=_hrZone5Ceiling;
@property(nonatomic) double hrZone4Ceiling; // @synthesize hrZone4Ceiling=_hrZone4Ceiling;
@property(nonatomic) double hrZone3Ceiling; // @synthesize hrZone3Ceiling=_hrZone3Ceiling;
@property(nonatomic) double hrZone2Ceiling; // @synthesize hrZone2Ceiling=_hrZone2Ceiling;
@property(nonatomic) double hrZone1Ceiling; // @synthesize hrZone1Ceiling=_hrZone1Ceiling;
@property(nonatomic) double hrBurst; // @synthesize hrBurst=_hrBurst;
@property(nonatomic) double hrBurn; // @synthesize hrBurn=_hrBurn;
@property(nonatomic) double hrResting; // @synthesize hrResting=_hrResting;
@property(nonatomic) double hrMax; // @synthesize hrMax=_hrMax;
@property(retain, nonatomic) NSMutableDictionary *completedTutorials; // @synthesize completedTutorials=_completedTutorials;
@property(retain, nonatomic) NSDictionary *bike; // @synthesize bike=_bike;
@property(nonatomic) BOOL hideUnauthorizedShareActivities; // @synthesize hideUnauthorizedShareActivities=_hideUnauthorizedShareActivities;
@property(copy, nonatomic) NSString *wahooliganBetaCode; // @synthesize wahooliganBetaCode=_wahooliganBetaCode;
@property(retain, nonatomic) NSMutableDictionary *fitDevicePasskeys; // @synthesize fitDevicePasskeys=_fitDevicePasskeys;
@property(nonatomic) BOOL showGarminImportOption; // @synthesize showGarminImportOption=_showGarminImportOption;
@property(retain, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) BOOL male; // @synthesize male=_male;
@property(copy, nonatomic) NSDate *birthdate; // @synthesize birthdate=_birthdate;
@property(nonatomic) BOOL metric; // @synthesize metric=_metric;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (int)age;
@property(nonatomic) __weak UBERWorkoutProfile *lastWorkoutProfile;
- (void)objectWillSerializeWithJSONCoder;
- (void)objectDidLoadWithJSONCoder;
- (BOOL)isFeatureAvailibleWithName:(id)arg1;
- (BOOL)isBetaUser;
- (BOOL)isDeveloper;
- (BOOL)isWahooliganBetaUser;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (id)accountForActivityType:(id)arg1;
- (id)workoutProfileWithUID:(id)arg1;
- (void)removeWorkoutProfile:(id)arg1;
- (void)addWorkoutProfile:(id)arg1;
- (id)sensorForUUID:(id)arg1;
- (BOOL)hasSensorWithUUID:(id)arg1;
- (void)removeSensor:(id)arg1;
- (void)addSensor:(id)arg1;
- (id)workoutDisplayWithUID:(id)arg1 type:(unsigned int)arg2;
- (id)workoutDisplaysOfType:(unsigned int)arg1;
- (void)removeWorkoutDisplay:(id)arg1;
- (void)addWorkoutDisplay:(id)arg1;
- (void)clearTutorialWithKey:(id)arg1;
- (void)didCompleteTutorialWithKey:(id)arg1;
- (BOOL)hasCompletedTutorialWithKey:(id)arg1;

@end

