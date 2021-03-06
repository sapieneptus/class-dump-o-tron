//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SoftwareUpdateNotifier : NSObject
{
    NSMutableDictionary *_bulletinsByDate;
}

- (id)_bulletinInfoForDate:(double)arg1 createIfNecessary:(_Bool)arg2;
- (void)updateNotificationCenter;
- (void)addUnreadTitle:(id)arg1 withInstallTime:(double)arg2;
- (void)addReadTitle:(id)arg1 withInstallTime:(double)arg2;
- (void)dealloc;
- (id)init;

@end

