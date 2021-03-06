//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileCoordinator.h"

@class BRCAccountSession, NSObject<OS_dispatch_source>, NSURL;

@interface BRCFileCoordinator : NSFileCoordinator
{
    BRCAccountSession *_session;
    unsigned long long _startStamp;
    NSURL *_url1;
    NSURL *_url2;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _doneHandler;
    _Bool _cancelled;
    _Bool _isUpdateForReconnecting;
}

+ (void)itemAtPath:(id)arg1 logicalFilename:(id)arg2 didMoveToPath:(id)arg3 logicalFilename:(id)arg4 hasContentUpdate:(_Bool)arg5;
+ (void)itemAtPath:(id)arg1 didBounceToName:(id)arg2;
+ (void)itemDidDisappearAtPath:(id)arg1 logicalFilename:(id)arg2;
+ (void)itemDidAppearAtPath:(id)arg1 logicalFilename:(id)arg2;
@property(nonatomic) _Bool isUpdateForReconnecting; // @synthesize isUpdateForReconnecting=_isUpdateForReconnecting;
- (void).cxx_destruct;
- (void)scheduleRenameOfItemAtURL:(id)arg1 toItemAtURL:(id)arg2 contentUpdate:(_Bool)arg3 target:(id)arg4;
- (void)scheduleUpdateOfItemAtURL:(id)arg1 target:(id)arg2;
- (void)scheduleDeleteOfItemAtURL:(id)arg1 target:(id)arg2;
- (void)scheduleReadOfItemAtURL:(id)arg1 target:(id)arg2;
- (void)_obtainedCoordination:(id)arg1 url1:(id)arg2 url2:(id)arg3 handler:(CDUnknownBlockType)arg4 fcHandler:(CDUnknownBlockType)arg5 error:(id)arg6;
- (void)cancelAfter:(double)arg1;
- (void)cancel;
- (id)initWithSession:(id)arg1 cancelAfter:(double)arg2 doneHandler:(CDUnknownBlockType)arg3;

@end

