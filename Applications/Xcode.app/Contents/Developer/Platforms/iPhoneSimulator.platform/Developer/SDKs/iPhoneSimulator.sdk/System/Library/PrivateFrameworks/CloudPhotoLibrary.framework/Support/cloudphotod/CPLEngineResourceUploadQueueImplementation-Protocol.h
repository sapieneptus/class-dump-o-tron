//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class CPLResource, NSString;

@protocol CPLEngineResourceUploadQueueImplementation <CPLEngineStorageImplementation>
- (_Bool)resetWithError:(id *)arg1;
- (unsigned long long)countOfOriginalOthers;
- (unsigned long long)countOfOriginalVideos;
- (unsigned long long)countOfOriginalImages;
- (unsigned long long)countOfQueuedUploadTasks;
- (_Bool)resetDequeuedBackgroundUploadTasksWithError:(id *)arg1;
- (_Bool)dequeueNextBackgroundUploadTask:(id *)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)reenqueueUploadingResourcesWithError:(id *)arg1;
- (_Bool)makeResourceAsStale:(CPLResource *)arg1 error:(id *)arg2;
- (id <NSFastEnumeration>)enumeratorForResourcesWithItemIdentifier:(NSString *)arg1 includePending:(_Bool)arg2;
- (_Bool)markResourceReadyForBackgroundUpload:(CPLResource *)arg1 error:(id *)arg2;
- (_Bool)reenqueueResource:(CPLResource *)arg1 bumpRetryCount:(_Bool)arg2 error:(id *)arg3;
- (_Bool)discardResource:(CPLResource *)arg1 currentlyStoredResource:(id *)arg2 lastReference:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)discardResource:(CPLResource *)arg1 discardedResource:(id *)arg2 error:(id *)arg3;
- (_Bool)enqueueResource:(CPLResource *)arg1 discardedResource:(id *)arg2 error:(id *)arg3;
- (CPLResource *)queuedResourceForResource:(CPLResource *)arg1 pendingCount:(unsigned long long *)arg2;
@end

