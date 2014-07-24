//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnection.h"

@class MPOAuthCredentialConcreteStore;

@interface MPOAuthConnection : NSURLConnection
{
    MPOAuthCredentialConcreteStore *_credentials;
}

+ (id)sendSynchronousRequest:(id)arg1 usingCredentials:(id)arg2 returningResponse:(id *)arg3 error:(id *)arg4;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2 credentials:(id)arg3;
@property(readonly, nonatomic) id <MPOAuthCredentialStore><MPOAuthParameterFactory> credentials; // @synthesize credentials=_credentials;
- (oneway void)dealloc;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 credentials:(id)arg3;

@end

