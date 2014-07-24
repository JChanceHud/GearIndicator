//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSURL, NSURLRequest;

@interface MPOAuthURLRequest : NSObject
{
    NSURL *_url;
    NSString *_httpMethod;
    NSURLRequest *_urlRequest;
    NSMutableArray *_parameters;
}

@property(retain, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_httpMethod;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)addParameters:(id)arg1;
- (id)urlRequestSignedWithSecret:(id)arg1 usingMethod:(id)arg2;
- (oneway void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1 andParameters:(id)arg2;

@end

