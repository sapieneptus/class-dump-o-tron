//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChromeModeController.h"
#import "NSObject.h"

@class GroupAnimation, MapsChromeViewController;

@protocol MapsChromeModeController <NSObject, ChromeModeController>
@property(nonatomic) MapsChromeViewController *chromeViewController;

@optional
- (void)willChangeToMapDisplayStyle:(unsigned long long)arg1 forChangeToLightLevel:(long long)arg2 animation:(GroupAnimation *)arg3;
@end

