//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _MSXPCRemoteProxy : NSObject
{
    int _selectorLock;
    struct __CFDictionary *_knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    CDUnknownBlockType _errorHandler;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end

