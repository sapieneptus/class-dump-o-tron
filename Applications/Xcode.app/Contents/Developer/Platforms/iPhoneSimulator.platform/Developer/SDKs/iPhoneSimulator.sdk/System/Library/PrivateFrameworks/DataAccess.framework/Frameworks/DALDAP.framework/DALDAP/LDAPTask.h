//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DADisableableObject.h"

#import "DATask.h"

@class DATaskManager, NSDate, NSObject<OS_ldap_connection>, NSString;

@interface LDAPTask : DADisableableObject <DATask>
{
    _Bool _isFinished;
    DATaskManager *_taskManager;
    id _delegate;
    NSObject<OS_ldap_connection> *_ldConnection;
    NSDate *_dateConnectionWentOut;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSDate *dateConnectionWentOut; // @synthesize dateConnectionWentOut=_dateConnectionWentOut;
@property(retain, nonatomic) NSObject<OS_ldap_connection> *ldConnection; // @synthesize ldConnection=_ldConnection;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak DATaskManager *taskManager; // @synthesize taskManager=_taskManager;
- (void).cxx_destruct;
- (id)daLevelErrorForLDAPError:(int)arg1;
- (void)initializeConnection;
- (long long)taskStatusForError:(id)arg1;
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)finishWithError:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (_Bool)shouldHoldPowerAssertion;
@property(readonly, nonatomic) int numDownloadedElements;
- (void)_performQuery;
- (void)performTask;
- (void)disable;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

