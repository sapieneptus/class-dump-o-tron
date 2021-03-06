//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPasteboardWriting.h"

@class IDEPlaygroundQuickLookController, NSArray, NSAttributedString, NSString;

@interface IDELogEntryQuickLookNode : NSObject <NSPasteboardWriting>
{
    NSArray *_children;
    NSAttributedString *_compoundAttributedSummaryForOutlineView;
    IDEPlaygroundQuickLookController *_quickLookController;
    BOOL _hasLookedUpQuickLook;
    id <IDEPlaygroundLoggerLogEntry> _logEntry;
}

@property(readonly) id <IDEPlaygroundLoggerLogEntry> logEntry; // @synthesize logEntry=_logEntry;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)_presentationOptionsForStructure:(id)arg1;
- (id)_presentationOptionsForTupleChildOfKeyedContainer;
- (id)_compoundAttributedSummaryForStructure:(id)arg1 forUseInOutlineView:(BOOL)arg2 presentationOptions:(id)arg3;
- (id)_compoundAttributedSummaryForObjectReflection:(id)arg1 includeName:(BOOL)arg2 forUseInOutlineView:(BOOL)arg3;
- (id)_compoundAttributedSummaryForLogEntry:(id)arg1 includeName:(BOOL)arg2 forUseInOutlineView:(BOOL)arg3;
- (id)_compoundAttributedSummaryForLogEntry:(id)arg1 forUseInOutlineView:(BOOL)arg2;
@property(readonly) IDEPlaygroundQuickLookController *quickLookController;
@property(readonly) NSAttributedString *compoundAttributedSummaryForOutlineView;
@property(readonly) NSAttributedString *compoundAttributedSummary;
@property(readonly) NSString *compoundSummary;
@property(readonly) NSArray *children;
@property(readonly) BOOL isLeaf;
- (id)initWithLogEntry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

