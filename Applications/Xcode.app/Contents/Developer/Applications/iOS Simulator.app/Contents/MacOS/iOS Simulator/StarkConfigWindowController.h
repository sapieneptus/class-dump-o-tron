//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class StarkConfig;

@interface StarkConfigWindowController : NSWindowController <NSWindowDelegate>
{
    StarkConfig *_data;
}

@property(retain) StarkConfig *data; // @synthesize data=_data;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)run:(id)arg1;
- (void)save:(id)arg1;
- (void)load:(id)arg1;

@end

