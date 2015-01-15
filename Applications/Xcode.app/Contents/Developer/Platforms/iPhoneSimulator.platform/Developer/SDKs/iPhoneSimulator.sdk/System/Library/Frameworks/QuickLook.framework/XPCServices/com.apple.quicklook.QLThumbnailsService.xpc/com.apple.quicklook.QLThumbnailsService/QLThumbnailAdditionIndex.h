//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLThumbnailAdditionIndexInterface.h"

@class NSObject<OS_dispatch_source>, NSURL, PQLConnection;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface>
{
    NSURL *_url;
    PQLConnection *_db;
    NSObject<OS_dispatch_source> *_dbWatcher;
}

+ (id)sharedInstance;
+ (void)setUpCleanupXPCActivity;
- (void).cxx_destruct;
- (void)addThumbnailForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeThumbnailForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hasThumbnailForURL:(id)arg1 updateLastHitDate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cleanUp;
- (void)cleanUpBatchOfEntries:(id)arg1;
- (void)removeAllAdditions;
- (id)batchOfEntriesStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long *)arg2;
- (id)allEntries;
- (void)enumerateCacheEntriesWithHandler:(CDUnknownBlockType)arg1;
- (struct PQLResultSet *)entriesEnumerator;
- (_Bool)addThumbnailForURL:(id)arg1;
- (_Bool)removeThumbnailForURL:(id)arg1;
- (_Bool)hasThumbnailForURL:(id)arg1 updateLastHitDate:(_Bool)arg2;
- (id)init;
- (void)reset;
- (id)openDatabaseAtURL:(id)arg1 error:(id *)arg2;
- (id)upgradeDatabaseIfNeeded:(id)arg1 error:(id *)arg2;
- (void)setupDatabaseWatcherAtURL:(id)arg1;
- (void)close;
- (_Bool)open;
- (id)initWithURL:(id)arg1;

@end
