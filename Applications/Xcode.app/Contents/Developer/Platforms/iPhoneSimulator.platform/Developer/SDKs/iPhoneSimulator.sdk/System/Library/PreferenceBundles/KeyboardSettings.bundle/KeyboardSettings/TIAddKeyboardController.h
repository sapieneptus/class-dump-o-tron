//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@interface TIAddKeyboardController : PSListController
{
}

+ (_Bool)shouldAddInputMode:(id)arg1 toEnabledInputModes:(id)arg2;
- (void)doneButtonTapped;
- (void)cancelButtonTapped;
- (void)toggleInputMode:(id)arg1;
- (void)updateDoneButton;
- (void)addCheckedInputModes;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)newSpecifiers;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;

@end

