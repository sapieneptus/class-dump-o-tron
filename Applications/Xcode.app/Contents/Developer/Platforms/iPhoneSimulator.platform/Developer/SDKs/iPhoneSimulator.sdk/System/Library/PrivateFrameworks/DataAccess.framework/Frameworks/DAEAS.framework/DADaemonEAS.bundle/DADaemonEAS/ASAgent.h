//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAAgent.h"

#import "ABPredicateDelegate.h"
#import "ASFolderHierarchyLocalChangeConsumer.h"
#import "ASFolderHierarchyUpdateConsumer.h"
#import "DAContactsUpdateConsumer.h"
#import "DADataclassLockWatcher.h"
#import "DAEventsUpdateConsumer.h"
#import "DAMessageMoveRequestConsumer.h"
#import "DAMessageSendConsumer.h"
#import "DANotesUpdateConsumer.h"
#import "DAPreferredDaysToSyncDidChangeObserver.h"
#import "DAToDosUpdateConsumer.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ASAgent : DAAgent <DAContactsUpdateConsumer, DAEventsUpdateConsumer, DAToDosUpdateConsumer, DANotesUpdateConsumer, DAMessageSendConsumer, DADataclassLockWatcher, ABPredicateDelegate, DAMessageMoveRequestConsumer, ASFolderHierarchyUpdateConsumer, ASFolderHierarchyLocalChangeConsumer, DAPreferredDaysToSyncDidChangeObserver>
{
    void *_matchedRecord;
    _Bool _isShuttingDown;
    int _numLocalFolderUpdatesInFlight;
    NSMutableDictionary *_eventCalendarsByFolderId;
    NSMutableDictionary *_toDoCalendarsByFolderId;
    NSMutableDictionary *_contactStoresByFolderId;
    NSMutableDictionary *_noteStoreObjectIdsByFolderId;
    NSMutableArray *_outstandingFolderRequests;
    NSMutableSet *_currentlySyncingFolderIds;
    NSLock *_folderItemSyncRequestLock;
    NSMutableDictionary *_folderIdToSequentialFailureCount;
    NSMutableDictionary *_folderIdToSequentialServerErrorCount;
    CDUnknownBlockType _calUnitTestMergedRequestsBlock;
}

+ (void)cleanUpFilesForAccountWithId:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType calUnitTestMergedRequestsBlock; // @synthesize calUnitTestMergedRequestsBlock=_calUnitTestMergedRequestsBlock;
@property(nonatomic) _Bool isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(nonatomic) int numLocalFolderUpdatesInFlight; // @synthesize numLocalFolderUpdatesInFlight=_numLocalFolderUpdatesInFlight;
@property(retain, nonatomic) NSMutableDictionary *folderIdToSequentialServerErrorCount; // @synthesize folderIdToSequentialServerErrorCount=_folderIdToSequentialServerErrorCount;
@property(retain, nonatomic) NSMutableDictionary *folderIdToSequentialFailureCount; // @synthesize folderIdToSequentialFailureCount=_folderIdToSequentialFailureCount;
@property(retain, nonatomic) NSLock *folderItemSyncRequestLock; // @synthesize folderItemSyncRequestLock=_folderItemSyncRequestLock;
@property(retain, nonatomic) NSMutableSet *currentlySyncingFolderIds; // @synthesize currentlySyncingFolderIds=_currentlySyncingFolderIds;
@property(retain, nonatomic) NSMutableArray *outstandingFolderRequests; // @synthesize outstandingFolderRequests=_outstandingFolderRequests;
@property(retain, nonatomic) NSMutableDictionary *noteStoreObjectIdsByFolderId; // @synthesize noteStoreObjectIdsByFolderId=_noteStoreObjectIdsByFolderId;
@property(retain, nonatomic) NSMutableDictionary *contactStoresByFolderId; // @synthesize contactStoresByFolderId=_contactStoresByFolderId;
@property(retain, nonatomic) NSMutableDictionary *toDoCalendarsByFolderId; // @synthesize toDoCalendarsByFolderId=_toDoCalendarsByFolderId;
@property(retain, nonatomic) NSMutableDictionary *eventCalendarsByFolderId; // @synthesize eventCalendarsByFolderId=_eventCalendarsByFolderId;
- (void).cxx_destruct;
- (void)_setSyncKey:(id)arg1 forFolderWithId:(id)arg2;
- (id)_syncKeyForFolderWithId:(id)arg1;
- (id)_localIdForExchangeId:(id)arg1 inContainer:(void *)arg2 dataclass:(long long)arg3;
- (id)_exchangeIdForLocalId:(id)arg1 inContainer:(void *)arg2 dataclass:(long long)arg3 redirectToParent:(_Bool)arg4;
- (id)_parentIdFromEventId:(id)arg1;
- (void)folderHierarchyUpdateRequireChangedFoldersNotification:(id)arg1;
- (void)folderHierarchyUpdateNotification:(id)arg1;
- (void)requestAgentStopMonitoringWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startMonitoring;
- (void)_verifySearchStore;
- (void)refreshFolderListRequireChangedFolders:(_Bool)arg1 isUserRequested:(_Bool)arg2;
- (void)_tearDownNotesNotifications;
- (void)_setUpNotesNotifications;
- (void)_tearDownABNotifications;
- (void)_setUpABNotifications;
- (void)_tearDownCalNotifications;
- (void)_setUpCalNotifications;
- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)processDAFolderChange:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)localChangeForFolder:(id)arg1 finishedWithStatus:(long long)arg2 andError:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_handleDaemonBackedLocalFolderChangeWithDBChangeIndices:(struct __CFArray *)arg1 oldFolders:(id)arg2 status:(long long)arg3 error:(id)arg4;
- (void)folderHierarchySuccessfullyUpdated:(id)arg1 withNumChangedFolders:(unsigned long long)arg2;
- (void)folderHierarchyFailedToUpdate:(id)arg1 withStatus:(long long)arg2 andError:(id)arg3;
- (void)_updateFolderHierarchyRequireChangedFolders:(_Bool)arg1;
- (void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (id)foldersForFolderIDs:(id)arg1 andDataclasses:(long long)arg2;
- (void)preferredDaysToSyncDidChange;
- (void)_syncAllContactsEventsToDosAndNotesFolders;
- (void)_syncAllNotesFoldersWithRemoteChanges:(_Bool)arg1;
- (void)_syncAllToDosFoldersWithRemoteChanges:(_Bool)arg1;
- (void)_syncAllEventsFoldersWithRemoteChanges:(_Bool)arg1;
- (void)_syncAllContactFoldersWithRemoteChanges:(_Bool)arg1;
- (_Bool)_notesBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(_Bool)arg3;
- (_Bool)_calBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(_Bool)arg3;
- (_Bool)_abBestEffortApplyNewFolders:(id)arg1 oldFolders:(id)arg2 shouldCreateFoldersMissingInDB:(_Bool)arg3;
- (_Bool)_closeLocalDBConnectionsWithoutSaving;
- (void)_openLocalDBConnections;
- (void)_cacheFoldersForDataclasses:(long long)arg1;
- (void)_removeNoteSourceForDAFolder:(id)arg1;
- (void)_removeCalCalendarForDAFolder:(id)arg1;
- (void)_removeABSourceForDAFolder:(id)arg1;
- (id)_newNoteSourceForDAFolder:(id)arg1;
- (id)_noteAccountObject:(_Bool)arg1;
- (void *)_newCalCalendarForDAFolder:(id)arg1;
- (void *)_newABSourceForDAFolder:(id)arg1;
- (void *)_containerForFolderWithId:(id)arg1 dataclass:(long long)arg2;
@property(nonatomic) void *matchedRecord; // @synthesize matchedRecord=_matchedRecord;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)waiterID;
- (void)_refirePendingCalendarInvitations;
- (void)_nilOutContainersForDataclasses:(long long)arg1;
- (void)_appendFolderHierarchyChangesForFoldersOfDataclasses:(long long)arg1;
- (_Bool)_handleLocallyChangedFolderWithChangedItemId:(int)arg1 changeType:(long long)arg2 externalId:(id)arg3 changeTableIndices:(struct __CFArray *)arg4 dataclass:(long long)arg5;
- (_Bool)_getHierarchyChangeForDataclass:(long long)arg1 changedItemId:(int *)arg2 changeType:(long long *)arg3 externalId:(id *)arg4 changeTableIndices:(struct __CFArray *)arg5;
- (void)_appendSyncRequestForFoldersOfDataclasses:(long long)arg1;
- (void)_appendSyncRequestForFoldersOfDataclasses:(long long)arg1 remoteChanges:(_Bool)arg2;
- (void)_appendSyncRequestForFolders:(id)arg1;
- (void)_appendSyncRequestForFolders:(id)arg1 remoteChanges:(_Bool)arg2;
- (void)_appendSyncRequest:(id)arg1;
- (void)_appendSyncRequest:(id)arg1 atBeginning:(_Bool)arg2;
- (void)_fireWaitingFolderItemSyncRequests;
- (void)folderContentsUpdate:(id)arg1;
- (void)_syncRequest:(id)arg1;
- (void)_reallySyncRequest:(id)arg1;
- (void)_reallySendMoves:(id)arg1;
- (void)resultsForMessageMove:(id)arg1;
- (void)_moveItemsTask:(id)arg1 failedWithErrorCode:(int)arg2;
- (_Bool)_markEventWithLocalIDAsNeedingInvitationEmail:(int)arg1 parentId:(int)arg2;
- (void)meetingResponseFinishedWithStatus:(long long)arg1 error:(id)arg2 successfulResponses:(id)arg3 failedResponses:(id)arg4;
- (void)finishWithInvitationBatch:(id)arg1;
- (void)_reallyFinishInvitationBatch:(id)arg1;
- (void)messageDidSendWithContext:(id)arg1;
- (void)_reallyApplyMessageDidSendWithContext:(id)arg1;
- (_Bool)_finishWithInvitationEvent:(void *)arg1 eventUID:(id)arg2 expectedResponse:(int)arg3 wasMyInvite:(_Bool)arg4 isStillInvite:(_Bool)arg5;
- (void)syncResultForNotesFolder:(id)arg1 noteContext:(id)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeSet:(id)arg7 notesToDeleteAfterSync:(id)arg8 isInitialSync:(_Bool)arg9 moreAvailable:(_Bool)arg10 moreLocalChangesAvailable:(_Bool)arg11;
- (void)syncResultForToDosFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(_Bool)arg7 moreAvailable:(_Bool)arg8 moreLocalChangesAvailable:(_Bool)arg9 pushedActions:(id)arg10 rejectedServerIds:(id)arg11;
- (void)syncResultForEventsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(_Bool)arg7 moreAvailable:(_Bool)arg8 moreLocalChangesAvailable:(_Bool)arg9 pushedActions:(id)arg10 rejectedServerIds:(id)arg11;
- (void)syncResultForContactsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 newSyncToken:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(_Bool)arg8 moreAvailable:(_Bool)arg9 moreLocalChangesAvailable:(_Bool)arg10 pushedActions:(id)arg11;
- (void)_wrapperSyncResultForFolder:(id)arg1 dataclass:(long long)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(id)arg7 isInitialSync:(_Bool)arg8 moreAvailable:(_Bool)arg9 moreLocalChangesAvailable:(_Bool)arg10 pushedActions:(id)arg11 rejectedServerIds:(id)arg12;
- (void)_finishInitialSyncForFolder:(id)arg1 dataclass:(long long)arg2;
- (void)_syncResultForFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 results:(id)arg5 changeIdContext:(id)arg6 isInitialSync:(_Bool)arg7 moreAvailable:(_Bool)arg8 dataclass:(long long)arg9 resultingChangeActionsForServer:(id)arg10 pushedActions:(id)arg11 rejectedServerIds:(id)arg12 eventsWithPendingInvitationEmails:(id)arg13;
- (_Bool)_clearChangeHistoriesWithChangeIdContext:(id)arg1 dataclass:(long long)arg2 inFolderWithId:(id)arg3 pushedActions:(id)arg4;
- (_Bool)_handleAction:(id)arg1 inFolderWithId:(id)arg2 dataclass:(long long)arg3 isInitialSync:(_Bool)arg4 resultingChangeActionsForServer:(id)arg5 eventServerIDsToDrop:(id)arg6 eventServerIDSWithDroppedDeletes:(id)arg7;
- (_Bool)_detectDuplicatedEventFromExchangeEvent:(id)arg1 inFolderWithId:(id)arg2 isInitialSync:(_Bool)arg3 eventServerIDsToDrop:(id)arg4 eventServerIDSWithDroppedDeletes:(id)arg5 resultingChangeActionsForServer:(id)arg6 outEvent:(id *)arg7 outLocalItem:(const void **)arg8 outDidTouchDB:(_Bool *)arg9;
- (void)notesFolderWithId:(id)arg1 failedToSyncWithStatus:(long long)arg2 error:(id)arg3;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)_folderItemsSyncTask:(id)arg1 failedWithErrorCode:(int)arg2;
- (void)_queueServerFailureResyncForFolderWithId:(id)arg1 isInitialSync:(_Bool)arg2;
- (void)_noteSyncForFolderWithId:(id)arg1 andTitle:(id)arg2 finishedWithSuccess:(_Bool)arg3;
- (void *)_copyExistingLocalItemForExchangeItem:(id)arg1 matchOnAttributes:(_Bool)arg2 inContainer:(void *)arg3;
- (id)_copyExistingNoteRecordForNote:(struct ASNote *)arg1 matchOnAttributes:(_Bool)arg2 inNoteStore:(id)arg3;
- (void *)_copyExistingCalRecordForToDo:(struct ASToDo *)arg1 matchOnAttributes:(_Bool)arg2 inCalendar:(void *)arg3;
- (void *)_copyExistingCalRecordForEvent:(struct ASEvent *)arg1 matchOnAttributes:(_Bool)arg2 inCalendar:(void *)arg3;
- (void *)_copyExistingABRecordForContact:(struct ASContact *)arg1 matchOnAttributes:(_Bool)arg2 inStore:(void *)arg3;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (id)_copyNotesActionsInNoteStore:(id)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(_Bool)arg4 changeSet:(id)arg5;
- (void)_addSimpleChangeForType:(long long)arg1 changedItemId:(id)arg2 addedIds:(id)arg3 modifiedIds:(id)arg4 deletedIds:(id)arg5 collapsedIds:(id)arg6;
- (id)_copyCalendarItemMoveActionsInCalendar:(void *)arg1 dataHandler:(id)arg2 deleteActionsByFolderId:(id)arg3;
- (id)_copyCalendarItemActionsInContainer:(void *)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(_Bool)arg4 changeContext:(id)arg5;
- (void)_faultInCalendarSubentitiesInCalendar:(void *)arg1 addedIdsToEventChangeId:(id)arg2 modifiedIdsToEventChangeId:(id)arg3 deletedIdsToEventChangeId:(id)arg4 pseudoDeletedIdsToEventChangeId:(id)arg5 localToExchangeIdMap:(id)arg6 eventChangeIdsToClear:(id)arg7 outRecurrenceId:(int *)arg8 outAlarmId:(int *)arg9 outAttendeeId:(int *)arg10 outHighestSequenceNumber:(int *)arg11 dataHandler:(id)arg12;
- (void)_handleChangeOnEventWithExchangeId:(id)arg1 localId:(int)arg2 changeType:(long long)arg3 eventChangeId:(id)arg4 hasSignificantAttributeChanges:(_Bool)arg5 container:(void *)arg6 dataHandler:(id)arg7 addedIdsToEventChangeId:(id)arg8 modifiedIdsToEventChangeId:(id)arg9 deletedIdsToEventChangeId:(id)arg10 pseudoDeletedIdsToEventChangeId:(id)arg11 eventChangeIdsToClear:(id)arg12 localToExchangeIdMap:(id)arg13 outShouldSaveDB:(_Bool *)arg14;
- (id)_copyABActionsInContainer:(void *)arg1 existingActions:(id)arg2 dataHandler:(id)arg3 wantPreserveActions:(_Bool)arg4 changeContext:(id)arg5;
- (void)_addChangeForType:(long long)arg1 changedItemId:(id)arg2 changeId:(id)arg3 addedIdsToChangeId:(id)arg4 modifiedIdsToChangeId:(id)arg5 deletedIdsToChangeId:(id)arg6 pseudoDeletedIdsToChangeId:(id)arg7 changeIdsToClear:(id)arg8;
- (id)_dbExternalIdForLocalId:(int)arg1 dataclass:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

