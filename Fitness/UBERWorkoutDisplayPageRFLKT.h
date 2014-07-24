//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UBERWorkoutDisplayPage.h"

@class NSArray, NSMutableDictionary, NSString, WFDisplayPage;

@interface UBERWorkoutDisplayPageRFLKT : UBERWorkoutDisplayPage
{
    WFDisplayPage *_displayPage;
    NSString *_templateKey;
    NSMutableDictionary *_groupLookup;
}

+ (id)newWorkoutDisplayPageFromTemplate:(id)arg1;
+ (id)JSONValueTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSMutableDictionary *groupLookup; // @synthesize groupLookup=_groupLookup;
@property(copy, nonatomic) NSString *templateKey; // @synthesize templateKey=_templateKey;
@property(retain, nonatomic) WFDisplayPage *displayPage; // @synthesize displayPage=_displayPage;
- (void).cxx_destruct;
- (void)dummy;
- (BOOL)canDisplayDataKeyInValueField:(id)arg1;
- (void)setDefaultsForDataKey:(id)arg1 inGroup:(id)arg2;
- (void)clearCache;
- (id)dataKeyForFieldKey:(id)arg1;
- (void)setDataKey:(id)arg1 forFieldWithKey:(id)arg2;
- (void)insertDataFieldsIntoPage:(id)arg1;
@property(readonly, nonatomic) NSArray *templatePages;
- (void)initializeWithTemplatePage:(id)arg1;
- (id)relativeButtonLabelLocations;
- (id)displayBackgroundColor;
- (struct CGRect)contentFrameForDeviceImageWithSize:(struct CGSize)arg1;
- (int)contentCornerRadiusForDeviceImageWithSize:(struct CGSize)arg1;
- (id)deviceImage;
- (struct CGRect)translateFrame:(struct CGRect)arg1 fromReference:(struct CGRect)arg2 toReference:(struct CGRect)arg3;
- (id)infoViewWithFrame:(struct CGRect)arg1;
- (id)interactionViewWithFrame:(struct CGRect)arg1;
- (id)previewImageWithSize:(struct CGSize)arg1;
- (int)sensorSubtype;

// Remaining properties
@property(nonatomic) BOOL hidden;
@property(copy, nonatomic) NSString *triggerKey;

@end

