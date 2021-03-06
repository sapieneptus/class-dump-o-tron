//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSDictionary, NSError, NSString, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding>
{
    SSAccount *_authenticatedAccount;
    NSError *_error;
    NSDictionary *_responseDictionary;
    long long _responseType;
}

@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long authenticateResponseType; // @synthesize authenticateResponseType=_responseType;
@property(retain, nonatomic) SSAccount *authenticatedAccount; // @synthesize authenticatedAccount=_authenticatedAccount;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_setError:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

