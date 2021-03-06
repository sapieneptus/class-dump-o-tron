//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/PFTTrackSegment.h>

@class NSMutableArray;

@interface XRTrackSegment : PFTTrackSegment
{
    NSMutableArray *_graphSequencesList;
    unsigned long long _cachingGraphCount;
    struct XRTimeRange _cachedRecordedTimeRange;
    BOOL _implementsBackgroundLabelAPI;
    BOOL _useOldProvidePointsAPI;
}

- (void)clearGraphCache;
- (struct XRTimeRange)purgeSequencesIntersectingRange:(struct XRTimeRange)arg1;
- (void)removeGraphListAtIndex:(long long)arg1;
- (void)insertGraphListAtIndex:(long long)arg1;
- (id)listAtIndex:(long long)arg1;
- (void)drawInRect:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2 forInstrument:(id)arg3 usingScale:(struct CGSize)arg4 recordingHeadLocation:(double)arg5 inspectionHead:(double)arg6 userDraggingInspectionHead:(BOOL)arg7;
- (BOOL)requiresFullRepaint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTraceDocument:(id)arg1;

@end

