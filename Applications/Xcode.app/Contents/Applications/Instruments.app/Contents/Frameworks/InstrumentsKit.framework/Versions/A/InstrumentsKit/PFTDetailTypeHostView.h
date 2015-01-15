//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTokenFieldDelegate.h"

@class NSMapTable, NSString, NSTextField, PFTSelectedInstrumentList, PFTSlider, PFTTraceView, XRSearchBarViewController;

@interface PFTDetailTypeHostView : NSView <NSTokenFieldDelegate>
{
    PFTSlider *_hSlider;
    NSTextField *_searchField;
    PFTTraceView *_traceView;
    NSView *_contentView;
    XRSearchBarViewController *_findViewController;
    PFTSelectedInstrumentList *_model;
    BOOL _scrollViewRequired;
    BOOL _ignoreSubviewRemove;
    NSMapTable *_accessoryViewsByInstrumentByKey;
    NSMapTable *_shownAccessoryViewsByInstrument;
}

- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)hideAccessoryViewWithKey:(id)arg1;
- (void)_hideView:(id)arg1 removeFromSuperview:(BOOL)arg2;
- (id)showAccessoryViewWithKey:(id)arg1;
- (void)addAccessoryView:(id)arg1 withKey:(id)arg2 forInstrument:(id)arg3;
- (void)addAccessoryView:(id)arg1 withKey:(id)arg2 forInstrument:(id)arg3 asHidden:(BOOL)arg4;
- (id)_accessoryViewWithKey:(id)arg1;
- (id)_shownAccessoryViews;
- (id)_instrument;
- (void)_instrumentChangedSearchView:(id)arg1;
- (void)findPanelAction:(id)arg1;
- (void)setModel:(id)arg1;
- (id)model;
- (id)targetView;
- (id)_innerTargetView;
- (id)tokenField:(id)arg1 shouldUseDrawingAttributes:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_layoutViews;
- (void)viewDidMoveToWindow;
- (void)updateInstrument:(id)arg1 withDetailView:(id)arg2;
- (void)updateDetailViewWithInstrument:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
