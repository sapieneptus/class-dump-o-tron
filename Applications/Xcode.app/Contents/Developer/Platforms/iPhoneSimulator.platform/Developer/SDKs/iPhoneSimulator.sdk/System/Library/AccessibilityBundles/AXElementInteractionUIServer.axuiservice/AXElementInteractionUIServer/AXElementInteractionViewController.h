//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AXElementInteractionCursorView;

@interface AXElementInteractionViewController : UIViewController
{
    struct CGPath *_cursorPath;
    AXElementInteractionCursorView *_cursorView;
}

@property(retain, nonatomic) AXElementInteractionCursorView *cursorView; // @synthesize cursorView=_cursorView;
- (void).cxx_destruct;
- (void)loadView;
- (void)setCursorHidden:(_Bool)arg1;
- (void)_updateCursorPath;
- (void)setCursorPath:(struct CGPath *)arg1;
- (void)setCursorFrame:(struct CGRect)arg1;

@end

