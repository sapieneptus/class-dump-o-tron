//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "XRDispatchEvent.h"

@class NSString;

@interface XRBlockInvokeEvent : NSObject <NSCoding, XRDispatchEvent>
{
    NSString *_blockName;
    NSString *_blockLibrary;
    NSString *_queueIdentifier;
    unsigned long long _pushTime;
    unsigned long long _execTime;
    unsigned long long _duration;
    id _addStack;
    id _invokeStack;
    int _eventIndex;
    BOOL _sync;
}

+ (void)initialize;
+ (int)dataType;
@property(readonly) NSString *blockLibrary; // @synthesize blockLibrary=_blockLibrary;
@property(readonly) NSString *blockName; // @synthesize blockName=_blockName;
@property(readonly) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(readonly) BOOL sync; // @synthesize sync=_sync;
@property(readonly) id invokeStack; // @synthesize invokeStack=_invokeStack;
@property(readonly) id addStack; // @synthesize addStack=_addStack;
@property(readonly) unsigned long long pushTime; // @synthesize pushTime=_pushTime;
@property(readonly) unsigned long long execTime; // @synthesize execTime=_execTime;
@property int eventIndex; // @synthesize eventIndex=_eventIndex;
@property unsigned long long duration; // @synthesize duration=_duration;
@property(readonly) NSString *blockSignature; // @dynamic blockSignature;
@property unsigned long long timestamp; // @dynamic timestamp;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithBlockName:(id)arg1 library:(id)arg2 queue:(id)arg3 pushTime:(unsigned long long)arg4 execTime:(unsigned long long)arg5 pushStack:(id)arg6 invokeStack:(id)arg7 sync:(BOOL)arg8;

@end

