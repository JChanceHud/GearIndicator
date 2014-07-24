//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFJSONCoding.h"

@class NSArray, NSString, UBERUser;

@interface UBERSettings : NSObject <WFJSONCoding>
{
    NSArray *_users;
    NSString *_currentUserUID;
    UBERUser *_currentUser;
}

+ (Class)childClassForArrayWithKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)currentUser;
+ (id)pathForUBERSettings;
+ (void)reset;
+ (void)save;
+ (id)sharedInstance;
+ (id)templateSettings;
@property(retain, nonatomic) UBERUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) NSString *currentUserUID; // @synthesize currentUserUID=_currentUserUID;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)objectWillSerializeWithJSONCoder;
- (void)objectDidLoadWithJSONCoder;
- (id)debugDescription;

@end

