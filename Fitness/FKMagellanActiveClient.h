//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FKHTTPClient.h"

#import "FKAutehnicateWithUsernamePasswordProtocol.h"

@class NSString;

@interface FKMagellanActiveClient : FKHTTPClient <FKAutehnicateWithUsernamePasswordProtocol>
{
    NSString *_apiKey;
}

+ (id)URLWithActivityID:(id)arg1;
+ (void)setupSharedClientOnceWithAPIKey:(id)arg1;
+ (id)sharedClientOnceWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (void).cxx_destruct;
- (id)uploadFileAtPath:(id)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)updateWorkoutWithID:(id)arg1 parameters:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)authenticateWithUsername:(id)arg1 password:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

