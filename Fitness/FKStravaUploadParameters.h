//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FKStravaUploadParameters : NSObject
{
    BOOL _privateActivity;
    NSString *_type;
    NSString *_name;
    NSString *_externalID;
    NSString *_filePath;
    NSString *_dataType;
}

@property(copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(nonatomic) BOOL privateActivity; // @synthesize privateActivity=_privateActivity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

