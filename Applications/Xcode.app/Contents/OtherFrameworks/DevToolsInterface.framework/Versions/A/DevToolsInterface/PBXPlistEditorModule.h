//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

@class NSButton, NSDateFormatter, NSOutlineView, NSPopUpButtonCell, PBXDataFormatter, PBXNonLossyASCIIFormatter, PBXPlistEditingContext;

@interface PBXPlistEditorModule : PBXModule
{
    NSOutlineView *_outlineView;
    NSButton *_addButton;
    NSButton *_deleteButton;
    PBXPlistEditingContext *_editingContext;
    NSPopUpButtonCell *_classPopUpCell;
    PBXDataFormatter *_dataFormatter;
    NSDateFormatter *_dateFormatter;
    PBXNonLossyASCIIFormatter *_nonLossyASCIIFormatter;
    NSPopUpButtonCell *_valuePopUpCell;
    id _editingObj;
    BOOL _editingError;
    struct __pecFlags {
        unsigned int showsRootPlist:1;
        unsigned int initedOutlineView:1;
        unsigned int nonLossyASCIIStrings:1;
        unsigned int RESERVED:29;
    } _pecFlags;
    id _dumpTextView;
}

- (void)update;
- (BOOL)validateMenuItem:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)delayedEditItem:(id)arg1;
- (void)delayedDeletePlist:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)dumpPlist:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (BOOL)showsStringsAsNonLossyASCII;
- (void)toggleShowsStringsAsNonLossyASCII:(id)arg1;
- (void)setShowsStringsAsNonLossyASCII:(BOOL)arg1;
- (BOOL)showsRootPlist;
- (void)setShowsRootPlist:(BOOL)arg1;
- (void)propertyListChanged:(id)arg1;
- (void)plistEditingContextDidUndoOrRedo:(id)arg1;
- (id)outlineView;
- (void)setEditingContext:(id)arg1;
- (id)editingContext;
- (void)dealloc;
- (id)initWithWindowName:(id)arg1 owner:(id)arg2;
- (id)init;

@end

