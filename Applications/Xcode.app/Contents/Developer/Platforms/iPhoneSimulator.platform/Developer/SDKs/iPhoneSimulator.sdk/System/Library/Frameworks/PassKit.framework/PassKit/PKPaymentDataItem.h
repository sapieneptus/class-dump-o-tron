//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentValidating.h"

@class NSString, PKPaymentAuthorizationDataModel;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating>
{
    _Bool _rejected;
    long long _type;
    PKPaymentAuthorizationDataModel *_model;
}

+ (long long)dataType;
@property(nonatomic) PKPaymentAuthorizationDataModel *model; // @synthesize model=_model;
@property(nonatomic, getter=isRejected) _Bool rejected; // @synthesize rejected=_rejected;
@property(nonatomic) long long type; // @synthesize type=_type;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

