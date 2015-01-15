//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PDEntitlementWhitelist : NSObject
{
    _Bool _allAccess;
    _Bool _paymentProvisioning;
    _Bool _contactlessInterface;
    _Bool _paymentPassAccess;
    _Bool _inAppPayments;
    _Bool _inAppPaymentsPrivate;
    _Bool _addSilently;
    NSArray *_teamIDs;
    NSArray *_passTypeIDs;
    NSString *_applicationID;
    NSArray *_merchantIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property _Bool addSilently; // @synthesize addSilently=_addSilently;
@property(readonly, copy) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly) _Bool inAppPaymentsPrivate; // @synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate;
@property(readonly) _Bool inAppPayments; // @synthesize inAppPayments=_inAppPayments;
@property(readonly) _Bool paymentPassAccess; // @synthesize paymentPassAccess=_paymentPassAccess;
@property(readonly) _Bool contactlessInterface; // @synthesize contactlessInterface=_contactlessInterface;
@property(readonly) _Bool paymentProvisioning; // @synthesize paymentProvisioning=_paymentProvisioning;
@property(readonly, copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property _Bool allAccess; // @synthesize allAccess=_allAccess;
@property(copy) NSArray *passTypeIDs; // @synthesize passTypeIDs=_passTypeIDs;
@property(copy) NSArray *teamIDs; // @synthesize teamIDs=_teamIDs;
- (void)_probeEntitlementsWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end
