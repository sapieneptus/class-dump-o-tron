//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXProjectItem.h>

#import "XCCompatibilityChecking.h"

@class NSMutableArray, NSString, PBXTarget;

@interface PBXBuildPhase : PBXProjectItem <XCCompatibilityChecking>
{
    NSString *_name;
    PBXTarget *_target;
    NSMutableArray *_buildFiles;
    NSMutableArray *_customBuildRules;
    unsigned long long _buildActionMask;
    BOOL _runOnlyForDeploymentPostprocessing;
}

+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)allowedFileTypes;
+ (id)buildPhaseFromTemplateDictionary:(id)arg1;
+ (id)buildPhase;
+ (id)defaultName;
+ (id)identifier;
- (void).cxx_destruct;
- (id)createDependencyGraphSnapshotsForTargetSnapshot:(id)arg1 withRefsToPathsMapping:(id)arg2;
- (id)createDependencyGraphSnapshotForTargetSnapshot:(id)arg1 withRefsToPathsMapping:(id)arg2;
- (Class)dependencyGraphSnapshotClass;
- (void)addRelevantBuildPropertySpecificationsForFileTypes:(id)arg1 withMacroExpansionScope:(id)arg2 toOrderedSet:(id)arg3;
- (void)enumerateBuildRulesWithMacroExpansionScope:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_upgradeAfterAwakingFromUnarchiver:(id)arg1;
- (BOOL)phaseContainsNonJavaFiles;
- (BOOL)phaseContainsJavaFiles;
- (id)linkedJavaClassArchivePathsUsingFrameworkJavaSubpaths:(id)arg1;
- (id)primaryAttributeForBuildFile:(id)arg1;
- (void)buildFileDidReorder:(id)arg1 oldIndex:(long long)arg2 newIndex:(long long)arg3;
- (void)buildFileWillBeRemoved:(id)arg1;
- (void)buildFileWasAdded:(id)arg1;
- (void)referenceWillBeRemoved:(id)arg1;
- (void)referenceWillChange:(id)arg1;
- (int)changeMask;
- (void)willChange;
- (void)findFeaturesInUseAndAddToSet:(id)arg1 usingPathPrefix:(id)arg2;
- (id)gidCommentForArchive;
- (BOOL)allowsFileType:(id)arg1;
- (id)allowedFileTypes;
- (id)outputFileNames;
- (id)inputFileNames;
- (unsigned long long)countBuildFilesWithExtensionInSet:(id)arg1;
- (void)setDefaultAttributesForNewBuildFile:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)acceptsReference:(id)arg1;
- (BOOL)acceptsReference:(id)arg1 checkFileType:(BOOL)arg2;
- (BOOL)_isReferenceReallyInProject:(id)arg1;
- (BOOL)acceptsVariantGroups;
- (void)_setBuildFiles:(id)arg1;
- (BOOL)containsFileReferenceSimilarTo:(id)arg1;
- (BOOL)containsFileReferenceIdenticalTo:(id)arg1;
- (id)buildFileForAbsolutePath:(id)arg1;
- (id)buildFileForResolvedAbsolutePath:(id)arg1;
- (id)buildFileForReferenceIdenticalTo:(id)arg1;
- (id)buildFileForReference:(id)arg1;
- (BOOL)removeReference:(id)arg1;
- (BOOL)addReference:(id)arg1;
- (void)removeBuildFile:(id)arg1;
- (void)_removeBuildFileFromChildrenOnly:(id)arg1;
- (BOOL)addBuildFile:(id)arg1;
- (BOOL)insertBuildFile:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)insertBuildFiles:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)buildFiles;
- (void)replaceObjectInCustomBuildRulesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromCustomBuildRulesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inCustomBuildRulesAtIndex:(unsigned long long)arg2;
- (void)setCustomBuildRules:(id)arg1;
- (id)customBuildRules;
- (void)setRunOnlyForDeploymentPostprocessing:(BOOL)arg1;
- (BOOL)runOnlyForDeploymentPostprocessing;
- (void)_setBuildActionMask:(unsigned long long)arg1;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)_setTarget:(id)arg1;
- (id)target;
- (BOOL)canRename;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initFromTemplateDictionary:(id)arg1;
- (id)stringByMakingExpandedPathAbsolute:(id)arg1;
- (id)stringByExpandingString:(id)arg1;
- (id)stringByExpandingString:(id)arg1 forBuildConfigurationNamed:(id)arg2;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2;
- (void)appendUserSettingsDictionariesTo:(id)arg1 defaultSettingsDictionariesTo:(id)arg2 forBuildConfigurationNamed:(id)arg3;

@end

