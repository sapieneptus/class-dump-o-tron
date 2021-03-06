//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPHeaderRep.h>

@class TPPaginatedPageInfo;

__attribute__((visibility("hidden")))
@interface TPHeaderRep : TSWPHeaderRep
{
    _Bool _hideKnobs;
}

@property(nonatomic) _Bool hideKnobs; // @synthesize hideKnobs=_hideKnobs;
- (_Bool)p_isMiddleFooterRep;
- (_Bool)p_isMiddleHeaderRep;
- (_Bool)p_shouldCreateArrowKnobs;
- (_Bool)p_isInDocumentSetup;
- (_Bool)doesNeedDisplayOnEditingDidEnd;
- (void)editingDidEnd;
- (void)updatePositionsOfKnobs:(id)arg1;
- (struct CGRect)boundsForStandardKnobs;
- (id)newTrackerForKnob:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (_Bool)shouldCreateKnobs;
- (id)beginEditing;
- (_Bool)canEditWithEditor:(id)arg1;
- (_Bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
@property(readonly, nonatomic) TPPaginatedPageInfo *pageInfo;
- (id)pageLayout;

@end

