//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSDownloadManager.h"

#import "SSDownloadManagerObserver.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CloudDownloadManager : SSDownloadManager <SSDownloadManagerObserver>
{
    NSMutableDictionary *_downloadObservers;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)sharedDownloadManager;
- (void).cxx_destruct;
- (void)removeObserverForIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool hasDownloads;
- (void)addObserverWithIdentifier:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)dealloc;
- (id)initWithManagerOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

