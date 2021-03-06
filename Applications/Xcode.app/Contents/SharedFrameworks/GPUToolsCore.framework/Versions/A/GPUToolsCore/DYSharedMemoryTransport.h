//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUToolsCore/DYBaseStreamTransport.h>

@class NSURL;

@interface DYSharedMemoryTransport : DYBaseStreamTransport
{
    struct sm_region_header *_outgoingShmem;
    struct sm_region_header *_incomingShmem;
    struct sm_region_header *_masterSMRegion;
    void *_outgoingBuffer;
    void *_incomingBuffer;
    DYBaseStreamTransport *_relayTransport;
    CDUnknownFunctionPointerType _consumeBytesIMP;
    SEL _consumeBytesSEL;
    unsigned int _currentPacketBytesLeft;
    int _mode;
    char _sendName[64];
    char _receiveName[64];
}

- (void)_dequeueIncomingMessages;
- (void)_dequeuePacket;
- (void)_relayPacket;
- (void)_accumulateMessageBytes;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (void)_copyFromSM:(void *)arg1 size:(unsigned long long)arg2;
- (void)_updateReaderOffset:(unsigned long long)arg1;
- (unsigned int)_nextMessageSerial;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (void)_copyToSM:(const void *)arg1 size:(long long)arg2;
- (unsigned long long)_computeBytesAvailableToRead;
- (unsigned long long)_computeBytesAvailableToWrite;
- (void)_invalidate;
- (BOOL)connected;
- (id)connect;
- (BOOL)_clientConnect:(id *)arg1;
- (BOOL)_serverConnect:(id *)arg1;
- (BOOL)_createAndRunSources:(id *)arg1;
- (void)_setupIOBuffers;
- (BOOL)_openSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;
- (BOOL)_initializeSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;
- (void)_tearDownSharedMemory;
- (void *)_mapSharedMemoryFile:(int)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)arg1;
- (id)_getSharedMemoryNameWithSuffix:(id)arg1;
- (void)setRelayTransport:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (void)dealloc;
- (id)initWithMode:(int)arg1 initialMessageSerial:(unsigned int)arg2;
- (id)initWithMode:(int)arg1;
- (id)init;

@end

