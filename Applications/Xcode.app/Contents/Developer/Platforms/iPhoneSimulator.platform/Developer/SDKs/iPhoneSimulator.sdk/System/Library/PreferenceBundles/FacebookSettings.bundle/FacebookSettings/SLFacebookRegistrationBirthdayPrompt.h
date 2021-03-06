//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SLFacebookRegistrationInfoPrompt.h"

#import "UITableViewDataSource.h"

@class NSDate, NSString, PSSpecifier;

@interface SLFacebookRegistrationBirthdayPrompt : SLFacebookRegistrationInfoPrompt <UITableViewDataSource>
{
    NSDate *_birthday;
    PSSpecifier *_birthdaySpecifier;
    PSSpecifier *_birthdayPickerSpecifier;
}

- (void).cxx_destruct;
- (_Bool)validate;
- (_Bool)isReadyToValidate;
- (void)updateRegistrationInfo;
- (void)_legalLinkButtonTapped:(id)arg1;
- (void)datePickerChanged:(id)arg1;
@property(readonly) NSDate *birthday;
- (id)_birthdayWithSpecifier:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)specifiers;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)initWithRegistrationInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

