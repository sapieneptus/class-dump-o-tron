//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MapsChromeViewItem.h"

@class MainChromeDetailsBarContent, NSSet, UIColor;

__attribute__((visibility("hidden")))
@interface MainChromeViewItem : MapsChromeViewItem
{
    _Bool _hideTopBarShadow;
    _Bool _autohidesContent;
    _Bool _hideBottomLine;
    long long _backdropKind;
    UIColor *_blurColor;
    double _topBarMiniAltHeight;
    long long _overriddenViewMode;
    NSSet *_disallowedViewModes;
    MainChromeDetailsBarContent *_detailsBarContent;
    struct CGRect _extendedBlurFrame;
}

@property(retain, nonatomic) MainChromeDetailsBarContent *detailsBarContent; // @synthesize detailsBarContent=_detailsBarContent;
@property(copy, nonatomic) NSSet *disallowedViewModes; // @synthesize disallowedViewModes=_disallowedViewModes;
@property(nonatomic) long long overriddenViewMode; // @synthesize overriddenViewMode=_overriddenViewMode;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) _Bool tapToHideEnabled; // @synthesize tapToHideEnabled=_autohidesContent;
@property(nonatomic) double topBarMiniAltHeight; // @synthesize topBarMiniAltHeight=_topBarMiniAltHeight;
@property(nonatomic) _Bool hideTopBarShadow; // @synthesize hideTopBarShadow=_hideTopBarShadow;
@property(retain, nonatomic) UIColor *blurColor; // @synthesize blurColor=_blurColor;
@property(nonatomic) struct CGRect extendedBlurFrame; // @synthesize extendedBlurFrame=_extendedBlurFrame;
@property(nonatomic) long long backdropKind; // @synthesize backdropKind=_backdropKind;
- (void).cxx_destruct;
- (id)init;

@end

