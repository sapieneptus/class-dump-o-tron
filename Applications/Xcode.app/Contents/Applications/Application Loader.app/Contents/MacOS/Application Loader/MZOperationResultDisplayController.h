//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSArray, NSArrayController, NSButton, NSString, NSTableView, NSTextField, NSWindow;

@interface MZOperationResultDisplayController : NSObject <NSWindowDelegate>
{
    NSWindow *window;
    NSArrayController *operationResultController;
    NSTableView *operationResultTableView;
    NSTextField *titleField;
    NSButton *doneButton;
    id _nonretainedDelegate;
    NSArray *_operationResults;
    NSString *_title;
}

+ (id)interfaceName;
- (id)selectedOperationResult;
- (id)selectedOperationResultIdentifier;
- (void)done:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)_cleanup;
- (void)detailsSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)display;
- (void)loadInterface;
- (void)dealloc;
- (id)initWithOperationResults:(id)arg1 title:(id)arg2 delegate:(id)arg3;

@end

