//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSControl, NSTextField;

@interface MZFieldLayoutItem : NSView
{
    NSTextField *_label;
    NSControl *_control;
    BOOL _wantsHidden;
}

@property BOOL wantsHidden; // @synthesize wantsHidden=_wantsHidden;
@property NSControl *control; // @synthesize control=_control;
@property NSTextField *label; // @synthesize label=_label;
- (id)description;

@end

