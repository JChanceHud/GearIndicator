//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFFitMesgDeviceSettings, WFFitMesgFileId, WFFitMesgHRMProfile, WFFitMesgUserProfile;

@interface WFFitSettingsFileData : NSObject
{
    WFFitMesgFileId *fileIdMesg;
    WFFitMesgDeviceSettings *deviceSettingsMesg;
    WFFitMesgUserProfile *userProfileMesg;
    WFFitMesgHRMProfile *hrmProfileMesg;
}

@property(retain, nonatomic) WFFitMesgHRMProfile *hrmProfileMesg; // @synthesize hrmProfileMesg;
@property(retain, nonatomic) WFFitMesgUserProfile *userProfileMesg; // @synthesize userProfileMesg;
@property(retain, nonatomic) WFFitMesgDeviceSettings *deviceSettingsMesg; // @synthesize deviceSettingsMesg;
@property(retain, nonatomic) WFFitMesgFileId *fileIdMesg; // @synthesize fileIdMesg;
- (id)init;
- (void)dealloc;

@end
