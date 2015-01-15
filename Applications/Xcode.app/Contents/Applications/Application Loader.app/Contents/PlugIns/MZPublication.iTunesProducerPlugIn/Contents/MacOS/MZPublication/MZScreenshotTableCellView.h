//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class MZScreenshotViewController, NSMutableArray;

@interface MZScreenshotTableCellView : NSTableCellView
{
    MZScreenshotViewController *_screenshotViewController;
    NSMutableArray *_screenshotViewConstraints;
}

@property(retain) NSMutableArray *screenshotViewConstraints; // @synthesize screenshotViewConstraints=_screenshotViewConstraints;
@property(retain) MZScreenshotViewController *screenshotViewController; // @synthesize screenshotViewController=_screenshotViewController;
- (void)updateConstraints;
- (void)setElement:(id)arg1;
- (id)screenshotAssetsViewController;
- (void)dealloc;

@end
