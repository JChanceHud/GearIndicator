//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FKHTTPClient.h"

#import "FKAutehnicateWithUsernamePasswordProtocol.h"

@interface FKNikePlusClient : FKHTTPClient <FKAutehnicateWithUsernamePasswordProtocol>
{
}

+ (id)sharedClient;
+ (id)sharedClientOnceWithBlock:(CDUnknownBlockType)arg1;
- (id)uploadWithRunXML:(id)arg1 gpxData:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)checkPinStatusSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)authenticateWithUsername:(id)arg1 password:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setAuthorizationHeaderWithCredential:(id)arg1;
- (id)initWithBaseURL:(id)arg1;

@end

