//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "ISStoreURLOperationDelegate.h"

@class ISFairPlaySAPSession, NSString, SSAuthenticationContext, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;
    NSString *_clientIdentifierHeader;
    ISFairPlaySAPSession *_mescalSession;
    long long _personalizationStyle;
    SSLookupProperties *_properties;
    SSLookupResponse *_response;
    NSString *_userAgent;
}

- (id)_URLBagContext;
- (void)_setLookupResponse:(id)arg1;
- (void)_setAccountID:(id)arg1;
- (_Bool)_performPlatformLookup:(id *)arg1;
- (_Bool)_performLocationLookup:(id *)arg1;
- (_Bool)_performJSSignLookupWithURLBag:(id)arg1 error:(id *)arg2;
- (id)_newStoreURLOperationWithBagKey:(id)arg1;
- (id)_newLookupResponseWithResultsFromOperation:(id)arg1;
- (_Bool)_isMescalEnabledInBagContext:(id)arg1;
- (id)_beginMescalSession:(id *)arg1;
- (id)_authenticationContext;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)run;
@property(copy) NSString *userAgent;
@property long long personalizationStyle;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSLookupResponse *lookupResponse;
@property(readonly) SSLookupProperties *lookupProperties;
- (void)dealloc;
- (id)initWithLookupProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
