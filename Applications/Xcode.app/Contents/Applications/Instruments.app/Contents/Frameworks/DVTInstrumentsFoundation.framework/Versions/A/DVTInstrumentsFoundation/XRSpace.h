//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableString, NSOperationQueue;

@interface XRSpace : NSObject
{
    NSOperationQueue *_queue;
    NSMutableString *_tag;
    unsigned long long _seqNum;
    NSMutableDictionary *_userDataByToken;
}

- (void).cxx_destruct;
- (BOOL)isBusy;
- (unsigned long long)operationCount;
- (BOOL)currentlyInThisSpace;
- (BOOL)isSerial;
- (id)spaceName;
- (BOOL)isOpValidForSpace:(id)arg1;
- (id)userDataForToken:(id)arg1;
- (void)removeUserDataForToken:(id)arg1;
- (void)replaceUserData:(id)arg1 forToken:(id)arg2;
- (id)storeUserData:(id)arg1;
- (id)afterOperationsRunBlock:(id)arg1;
- (id)afterOperation:(id)arg1 spaceBlock:(CDUnknownBlockType)arg2;
- (id)afterOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addOperation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_postQueueStateChanged;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;

@end
