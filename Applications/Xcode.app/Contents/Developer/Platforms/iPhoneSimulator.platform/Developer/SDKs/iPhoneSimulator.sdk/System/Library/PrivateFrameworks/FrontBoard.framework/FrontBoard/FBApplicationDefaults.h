//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBApplicationDefaults : NSObject
{
    long long _interfaceOrientation;
    long long _backgroundStyle;
    long long _statusBarStyle;
    _Bool _statusBarHidden;
    _Bool _statusBarHiddenWhenVerticallyCompact;
}

@property(nonatomic) _Bool statusBarHiddenWhenVerticallyCompact; // @synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (id)init;

@end

