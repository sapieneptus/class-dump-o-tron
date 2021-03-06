//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBDocumentPlatformAdapter.h"

@class NSColor;

@interface IBCocoaTouchDocumentPlatformAdapter : IBDocumentPlatformAdapter
{
    NSColor *_storyboardGlobalTintColor;
}

@property(copy, nonatomic) NSColor *storyboardGlobalTintColor; // @synthesize storyboardGlobalTintColor=_storyboardGlobalTintColor;
- (void).cxx_destruct;
- (id)customFontFilenamesPlistKey;
- (void)repopulateCustomFontFilenames:(id)arg1;
- (id)allCustomFontFilenames;
- (BOOL)validateBaseSimulatedMetricsMenuItem:(id)arg1;
- (void)changeMemberConfiguration:(id)arg1;
- (void)changeBaseSimulatedMetrics:(id)arg1;
- (id)menuItemForScreenMetrics:(id)arg1 orientation:(int)arg2 title:(id)arg3;
- (id)menuForSelectingBaseScreenAndOrientationMetrics;
- (struct CGSize)storyboardCanvasPositioningScaleForSimulatedMetricsContainer:(id)arg1;
- (void)documentDidDisableMemberConfigurations;
- (void)documentDidSwitchToEditedMemberConfiguration:(id)arg1;
- (void)documentDidEnableMemberConfigurations:(id)arg1;
- (void)getScreenMetrics:(id *)arg1 andOrientationMetrics:(id *)arg2 forConfiguration:(id)arg3;
- (id)implicitIntegratorBundleDependencyIdentifier;
- (void)populateEmptyXIBDocumentWithInitialPlaceholders;
- (void)installTopLevelPlaceholderWithLabel:(id)arg1 className:(id)arg2 placeholderID:(id)arg3 andObjectID:(id)arg4;
- (id)compiledStoryboardInfoPlistFileName;
- (id)hybridNIBPackageRuntimeFileName;
- (BOOL)documentTargetsCurrentOSVersion;
- (id)defaultCompiledStoryboardInfoPlistFileName;
- (id)defaultHybridNIBPackageRuntimeFileName;
- (id)compiledStoryBoardIntermediateXibFileType;
- (void)addToManyOutletFromObject:(id)arg1 referencingInstnace:(id)arg2 byName:(id)arg3;
- (void)addOutletFromObject:(id)arg1 referencingInstnace:(id)arg2 byName:(id)arg3;
- (void)addActionFromSender:(id)arg1 toReceiver:(id)arg2 withSelector:(id)arg3;
- (id)intrinsicPackageContentForNewlyGeneratedPackageWithFileType:(id)arg1;
- (id)archiveTypeForFileType:(id)arg1;
- (id)variantForResolvingMediaResources;
- (void)finishChangingTargetRuntimeInCompiledIntermediateDocument;
- (struct CGSize)canvasViewFramePaddingSizeForOverlayScrollers;
- (Class)externalReferencePlaceholderClass;
- (id)storyboardExitPlaceholder;
- (id)storyboardFirstResponderPlaceholder;
- (id)connectToSourceTeardownMethodCounterpartsForContext:(id)arg1;
- (BOOL)connectToSourceIsTargettingOSVersionWithRequiredViewUnloading;
- (BOOL)supportsInternationalizationReturningError:(id *)arg1;
- (id)targetRuntime;

@end

