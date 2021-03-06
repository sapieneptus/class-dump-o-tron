//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXInspectorPaneModule.h>

@class NSArray, NSButton, NSTextField, NSTreeController, PBXBuildPhase, PBXExtendedOutlineView, PBXTargetChooser, XCLibraryChooser;

@interface PBXTargetInspectorPaneModule : PBXInspectorPaneModule
{
    NSTextField *_nameTextField;
    PBXExtendedOutlineView *_dependenciesOutlineView;
    NSButton *_addDependenciesButton;
    NSButton *_removeDependenciesButton;
    PBXTargetChooser *_targetChooser;
    NSButton *_addLibrariesButton;
    NSButton *_removeLibrariesButton;
    PBXExtendedOutlineView *_libraryOutlineView;
    NSTreeController *_linkedLibrariesTreeController;
    PBXBuildPhase *_buildPhase;
    XCLibraryChooser *_libraryChooser;
    NSArray *_linkedLibraries;
    BOOL _beganEditingName;
    BOOL _validationError;
    BOOL _inspectingSingleTarget;
}

+ (unsigned long long)panelPosition;
+ (id)inspectableClasses;
@property BOOL inspectingSingleTarget; // @synthesize inspectingSingleTarget=_inspectingSingleTarget;
- (void)referenceWasRemoved:(id)arg1;
- (void)referenceWasAdded:(id)arg1;
- (void)targetWasRemoved:(id)arg1;
- (void)targetWasAdded:(id)arg1;
- (BOOL)projectCanClose:(id)arg1;
- (BOOL)viewCanBeRemoved;
- (BOOL)_leaveEditingState;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)removeLibraries:(id)arg1;
- (id)windowForSheet;
- (void)_targetAddLibrariesSheetDidEnd:(id)arg1;
- (void)addLibraries:(id)arg1;
- (void)removeDependencies:(id)arg1;
- (void)_addDependenciesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addDependencies:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)_setName;
- (BOOL)_targetOtherThan:(id)arg1 existsForName:(id)arg2;
- (void)update;
- (void)viewDidLoad;
- (void)_updateLinkedLibrariesButtons;
- (void)_updateDependencyButtons;
- (void)_stopListeningForProjectChanges;
- (void)_startListeningForProjectChanges;
- (id)linkedLibraries;
- (void)setLinkedLibraries:(id)arg1;
- (id)project;
- (id)targets;
- (id)target;
- (void)setBuildPhase:(id)arg1;
- (id)buildPhase;
- (id)init;
- (void)dealloc;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)outlineView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionChanged:(id)arg1;

@end

