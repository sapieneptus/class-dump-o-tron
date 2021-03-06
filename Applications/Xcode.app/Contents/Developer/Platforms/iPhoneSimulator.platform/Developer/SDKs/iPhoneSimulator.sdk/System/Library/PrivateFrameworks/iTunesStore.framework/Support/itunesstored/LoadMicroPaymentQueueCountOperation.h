//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "ISStoreURLOperationDelegate.h"

@class MicroPaymentQueueRequest, NSDate, NSString;

@interface LoadMicroPaymentQueueCountOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSDate *_lastQueueCheckDate;
    long long _queueItemCount;
    MicroPaymentQueueRequest *_request;
    NSString *_urlBagKey;
}

@property(retain) NSString *URLBagKey; // @synthesize URLBagKey=_urlBagKey;
@property(copy) MicroPaymentQueueRequest *request; // @synthesize request=_request;
@property long long queueItemCount; // @synthesize queueItemCount=_queueItemCount;
@property(retain) NSDate *lastQueueCheckDate; // @synthesize lastQueueCheckDate=_lastQueueCheckDate;
- (_Bool)_setCountWithResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_loadCountReturningError:(id *)arg1;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (_Bool)operation:(id)arg1 processData:(id)arg2 error:(id *)arg3;
- (void)run;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

