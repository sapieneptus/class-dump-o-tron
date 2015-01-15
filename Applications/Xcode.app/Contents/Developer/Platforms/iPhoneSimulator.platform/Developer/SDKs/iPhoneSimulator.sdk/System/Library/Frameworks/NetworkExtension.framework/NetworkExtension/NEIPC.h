//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_data>, NSObject<OS_dispatch_io>;

@interface NEIPC : NSObject
{
    int _socket;
    NSObject<OS_dispatch_io> *_socket_io;
    NSObject<OS_dispatch_data> *_previousData;
    CDUnknownBlockType _messageHandler;
}

@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) NSObject<OS_dispatch_data> *previousData; // @synthesize previousData=_previousData;
@property(retain) NSObject<OS_dispatch_io> *socket_io; // @synthesize socket_io=_socket_io;
@property int socket; // @synthesize socket=_socket;
- (void).cxx_destruct;
- (void)logMessageType:(unsigned int)arg1 data:(id)arg2 actionString:(id)arg3;
- (_Bool)sendMessageWithType:(unsigned int)arg1 data:(id)arg2 andQueue:(id)arg3;
- (void)stop;
- (void)startWithQueue:(id)arg1 messageHandler:(CDUnknownBlockType)arg2;
- (_Bool)parseMessageFromData:(id)arg1 messageHeader:(CDStruct_c0454aff *)arg2 messageData:(id *)arg3;
- (id)initWithSocket:(int)arg1;

@end
