//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XDInterface/_NSPredicate_RootTypeController.h>

@class NSPopUpButton;

@interface _NSPredicate_BooleanKeyTypeController : _NSPredicate_RootTypeController
{
    NSPopUpButton *_valuePopUp;
}

- (void)dealloc;
- (void)remove;
- (id)lastKeyView;
- (id)firstKeyView;
- (BOOL)passInString:(id)arg1;
- (id)leafPredicate;
- (id)stringToPassOn;
- (BOOL)_booleanValue;
- (id)setLeafPredicate:(id)arg1;
- (struct CGSize)setPosition:(struct CGPoint)arg1 secondRow:(struct CGPoint)arg2;
- (void)_createValuePopUp;
- (id)_noValue;
- (id)_yesValue;
- (id)possibleOperators;

@end
