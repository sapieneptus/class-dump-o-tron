//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OADEffectsParent.h"

@class NSArray, NSString, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject <OADEffectsParent>
{
    OADFill *mFill;
    NSArray *mEffects;
}

- (_Bool)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

