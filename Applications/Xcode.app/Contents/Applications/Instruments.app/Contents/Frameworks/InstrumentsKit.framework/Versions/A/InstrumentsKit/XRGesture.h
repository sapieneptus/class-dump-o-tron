//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XRGesture : NSObject
{
    double _startingX;
    double _lastX;
    int _substate;
}

- (BOOL)getGestureStartLocation:(double *)arg1 endLocation:(double *)arg2 kind:(int *)arg3;
- (id)gestureWithEvent:(id)arg1 fromView:(id)arg2;
- (id)init;
- (id)initWithStartingX:(double)arg1 lastX:(double)arg2;

@end

