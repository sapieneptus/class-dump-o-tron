//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLMomentGenerationDataManagement_Private.h"

@class NSDictionary, NSManagedObjectContext, NSString, PLMomentAnalyzer, PLMomentGeneration, PLPhotoLibrary, PLXPCTransaction;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement_Private>
{
    PLXPCTransaction *_keepAliveTransaction;
    CDUnknownBlockType _reachabilityBlock;
    void *_addressBook;
    PLMomentGeneration *_generator;
    PLMomentAnalyzer *_analyzer;
    NSDictionary *_generationOptions;
    _Bool _observingReachability;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_momentGenerationLibrary;
}

+ (_Bool)isManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (_Bool)isManagerMomentarilyBlessed:(id)arg1;
+ (void)setManagerMomentarilyBlessed:(id)arg1;
+ (id)sharedMomentGenerationDataManager;
@property(retain, nonatomic) PLPhotoLibrary *momentGenerationLibrary; // @synthesize momentGenerationLibrary=_momentGenerationLibrary;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)replayLogPath;
- (_Bool)wantsMomentReplayLogging;
- (id)insertNewMoment;
- (id)insertNewMomentListForGranularityLevel:(short)arg1;
- (id)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (id)allMomentListsForLevel:(short)arg1;
- (id)allMomentsWithInvalidReverseLocationData;
- (id)allMomentsWithError:(id *)arg1;
- (id)findOrCreateYearMomentListForYear:(long long)arg1;
- (id)yearMomentListForYear:(long long)arg1 wantsEarliest:(_Bool)arg2;
- (id)momentListContainingDate:(id)arg1 forLevel:(short)arg2 wantsEarliest:(_Bool)arg3;
- (id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(_Bool)arg3;
- (id)momentsSinceDate:(id)arg1;
- (void)_removeKeepAlive;
- (void)_updateKeepAlive;
- (id)homeAddressDictionary;
- (id)_currentHomeAddressDictionary;
- (id)_addressDictionaryForABRecord:(void *)arg1 identifier:(int)arg2;
@property(readonly, nonatomic) void *_addressBook;
- (_Bool)isNetworkReachable;
- (void)stopObservingNetworkReachabilityChanges;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)generationOptions;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (void)insertMomentIntoAllMoments:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeMomentFromAllMoments:(id)arg1;
- (id)allMomentsInLibrary;
- (void)resetOnFailure;
- (_Bool)save:(id *)arg1;
- (Class)momentAssetDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (Class)momentDataClass;
- (_Bool)hasChanges;
- (void)refreshObject:(id)arg1 mergeChanges:(_Bool)arg2;
- (id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (id)momentWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)assetWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)analysisMetadata;
- (_Bool)saveAnalysisMetadata:(id)arg1;
- (id)serverVersionInfo;
- (_Bool)saveServerVersionInfo:(id)arg1;
- (id)_serverVersionInfoFilePath;
- (id)_metadataPath;
- (void)setMomentAnalysisNeeded:(_Bool)arg1;
- (_Bool)isMomentAnalysisNeeded;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupPhotoLibrary;
- (id)analyzer;
- (id)generator;
- (void)reloadGenerationOptions;
- (void)_finalizeInit;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
