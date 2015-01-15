//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RAPDisplayedRoute.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPDisplayedRouteState : NSObject <RAPDisplayedRoute>
{
    NSString *_startWaypointTitle;
    NSString *_endWaypointTitle;
    _Bool _planning;
}

- (void).cxx_destruct;
- (_Bool)isPlanning;
- (id)endWaypointTitle;
- (id)startWaypointTitle;
- (id)initWithStartWaypointTitle:(id)arg1 endWaypointTitle:(id)arg2 isPlanning:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
