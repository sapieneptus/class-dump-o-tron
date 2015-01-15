//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString;

@interface DownloadsChangeset : NSObject <NSCopying>
{
    NSMutableArray *_appWakeRequests;
    NSMutableArray *_applicationWorkspaceChanges;
    NSMutableSet *_canceledAppDataRestoreIDs;
    NSMutableSet *_changedDownloadKinds;
    NSDictionary *_changedDownloadProperties;
    NSDictionary *_changedExternalDownloadProperties;
    NSMutableArray *_cookies;
    NSMutableArray *_deletedHTTPCookies;
    NSMutableSet *_deletedIPodLibraryDownloadIDs;
    long long _downloadChangeTypes;
    NSMutableSet *_finishedDownloadKinds;
    NSMutableArray *_ipodLibraryItems;
    NSMutableOrderedSet *_pipelineAdditions;
    NSMutableOrderedSet *_policyChangedDownloadIDs;
    NSMutableOrderedSet *_removedDownloadIDs;
    NSMutableOrderedSet *_removedPersistentDownloadIDs;
    NSMutableOrderedSet *_restorableDownloadIDs;
    NSString *_restoreReason;
    NSMutableSet *_statusChangedDownloadIDs;
    NSMutableSet *_updatedDownloadIDs;
}

@property(readonly, copy, nonatomic) NSSet *updatedDownloadIDs; // @synthesize updatedDownloadIDs=_updatedDownloadIDs;
@property(readonly, copy, nonatomic) NSSet *statusChangedDownloadIDs; // @synthesize statusChangedDownloadIDs=_statusChangedDownloadIDs;
@property(copy, nonatomic) NSString *restoreReason; // @synthesize restoreReason=_restoreReason;
@property(readonly, copy, nonatomic) NSOrderedSet *restorableDownloadIDs; // @synthesize restorableDownloadIDs=_restorableDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedPersistentDownloadIDs; // @synthesize removedPersistentDownloadIDs=_removedPersistentDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedDownloadIDs; // @synthesize removedDownloadIDs=_removedDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *policyChangedDownloadIDs; // @synthesize policyChangedDownloadIDs=_policyChangedDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineAdditions; // @synthesize pipelineAdditions=_pipelineAdditions;
@property(readonly, copy, nonatomic) NSArray *IPodLibraryItems; // @synthesize IPodLibraryItems=_ipodLibraryItems;
@property(readonly, copy, nonatomic) NSArray *HTTPCookies; // @synthesize HTTPCookies=_cookies;
@property(readonly, copy, nonatomic) NSSet *finishedDownloadKinds; // @synthesize finishedDownloadKinds=_finishedDownloadKinds;
@property(readonly, nonatomic) long long downloadChangeTypes; // @synthesize downloadChangeTypes=_downloadChangeTypes;
@property(readonly, copy, nonatomic) NSSet *deletedIPodLibraryDownloadIDs; // @synthesize deletedIPodLibraryDownloadIDs=_deletedIPodLibraryDownloadIDs;
@property(readonly, copy, nonatomic) NSArray *deletedHTTPCookies; // @synthesize deletedHTTPCookies=_deletedHTTPCookies;
@property(copy, nonatomic) NSDictionary *changedExternalDownloadProperties; // @synthesize changedExternalDownloadProperties=_changedExternalDownloadProperties;
@property(copy, nonatomic) NSDictionary *changedDownloadProperties; // @synthesize changedDownloadProperties=_changedDownloadProperties;
@property(readonly, copy, nonatomic) NSSet *changedDownloadKinds; // @synthesize changedDownloadKinds=_changedDownloadKinds;
@property(readonly, copy, nonatomic) NSSet *canceledAppDataRestoreIDs; // @synthesize canceledAppDataRestoreIDs=_canceledAppDataRestoreIDs;
@property(readonly, copy, nonatomic) NSArray *applicationWorkspaceChanges; // @synthesize applicationWorkspaceChanges=_applicationWorkspaceChanges;
@property(readonly, copy, nonatomic) NSArray *appWakeRequests; // @synthesize appWakeRequests=_appWakeRequests;
- (id)_policyChangedDownloadIDs;
- (id)_finishedDownloadKinds;
- (id)_deletedIPodLibraryDownloadIDs;
- (id)_deletedHTTPCookies;
- (id)_cookies;
- (id)_canceledAppDataRestoreIDs;
- (id)_applicationWorkspaceChanges;
- (id)_appWakeRequests;
- (void)_addApplicationWorkspaceChangewithDownloadID:(long long)arg1 bundleID:(id)arg2 changeType:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unionChangeset:(id)arg1;
- (void)removeDownloadFromPipelineWithID:(long long)arg1;
- (void)addUpdatedDownloadID:(long long)arg1;
- (void)addStatusChangedDownloadID:(long long)arg1;
- (void)addRestorableDownloadID:(long long)arg1;
- (void)addRemovedPersistentDownloadID:(long long)arg1;
- (void)addRemovedDownloadID:(long long)arg1;
- (void)addPolicyChangedDownloadID:(long long)arg1;
- (void)addIPodLibraryItem:(id)arg1;
- (void)addHTTPCookie:(id)arg1;
- (void)addFinishedDownloadKind:(id)arg1;
- (void)addFinishedAppWithDownloadID:(long long)arg1 bundleID:(id)arg2;
- (void)addFailedAppWithDownloadID:(long long)arg1 bundleID:(id)arg2;
- (void)addDownloadsToPipelineWithIDs:(id)arg1;
- (void)addDownloadToPipelineWithID:(long long)arg1;
- (void)addDownloadKind:(id)arg1;
- (void)addDownloadChangeTypes:(long long)arg1;
- (void)addDeletedIPodLibraryDownloadID:(long long)arg1;
- (void)addDeletedHTTPCookies:(id)arg1;
- (void)addCanceledAppDataRestoreID:(id)arg1;
- (void)addCanceledAppWithDownloadID:(long long)arg1 bundleID:(id)arg2;
- (void)addAppPlaceholderWithDownloadID:(long long)arg1;
- (void)addApplicationWorkspaceChange:(id)arg1;
- (void)addAppWakeRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initDownloadsChangeset;

@end
