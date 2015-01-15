//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSDictionary, NSString;

@interface MZWebServiceAuthenticateWithArguments : MZITunesProducerServiceClient
{
    NSString *_provider;
    NSString *_providerLongName;
    NSString *_providerLegalName;
    NSString *_postSigninWelcomeMessage;
    NSDictionary *_allowedPackageTypes;
}

- (id)allowedPackageTypes;
- (id)postSigninWelcomeMessage;
- (id)providerLegalName;
- (id)providerLongName;
- (id)provider;
- (id)processUncancelledSuccessfulResult:(id)arg1;
- (void)operationWillStart;
- (id)completedMessage;
- (id)runningMessage;
- (id)initialMessage;
- (id)operationMethod;
- (id)generateArguments;
- (void)dealloc;

@end
