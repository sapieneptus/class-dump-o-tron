//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKHeaderWithUnderlineView.h"

@class GKBubbleSegmentedControl;

@interface GKBubbleSegmentedHeaderView : GKHeaderWithUnderlineView
{
    GKBubbleSegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) GKBubbleSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (_Bool)drawsUnderline;
- (void)dealloc;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

