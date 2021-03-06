//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSDownloadManagerObserver.h"

@class NSString, SSDownloadManager;

@interface GKDownloadObserver : NSObject <SSDownloadManagerObserver>
{
    SSDownloadManager *_downloadManager;
}

+ (id)sharedObserver;
@property(retain) SSDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (_Bool)isDownloadingGame:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

