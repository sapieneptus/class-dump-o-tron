//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AuxiliaryDebugViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MNSettingsTracePickerController : AuxiliaryDebugViewController <UIActionSheetDelegate, MFMailComposeViewControllerDelegate>
{
    NSArray *_myFiles;
    NSString *_selectedTracePath;
    NSString *_selectedTraceName;
    _Bool _showingPlayButton;
    NSArray *_myFileSheetTrackPickerOptions;
}

+ (id)navigationDestinationTitle;
@property(retain, nonatomic) NSString *selectedTraceName; // @synthesize selectedTraceName=_selectedTraceName;
@property(retain, nonatomic) NSString *selectedTracePath; // @synthesize selectedTracePath=_selectedTracePath;
@property(retain, nonatomic) NSArray *myFiles; // @synthesize myFiles=_myFiles;
@property(retain, nonatomic) NSArray *myFileSheetTracePickerOptions; // @synthesize myFileSheetTracePickerOptions=_myFileSheetTrackPickerOptions;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)_showDeleteFileSheetForTraceName:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateTracePickerOptions;
- (void)_reloadTraces;
- (void)viewWillAppear:(_Bool)arg1;
- (Class)_mfMailComposeViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

