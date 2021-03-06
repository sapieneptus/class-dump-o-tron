//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_source>;

@interface _XCTStrictBlockScheduler : NSObject
{
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

+ (id)schedulingQueue;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void)atTime:(double)arg1 scheduleBlock:(CDUnknownBlockType)arg2;
- (void)_scheduleNextEvent;
@property NSObject<OS_dispatch_source> *dispatchTimer;

@end

