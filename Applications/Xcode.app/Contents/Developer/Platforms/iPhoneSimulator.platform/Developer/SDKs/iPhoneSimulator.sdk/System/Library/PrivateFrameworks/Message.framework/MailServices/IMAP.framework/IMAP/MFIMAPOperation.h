//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MFIMAPOperation : NSObject
{
    unsigned int _type:8;
    unsigned int _temporaryUids:1;
    NSString *_mailboxName;
    union {
        struct {
            NSArray *trueFlags;
            NSArray *falseFlags;
            struct __CFArray *uids;
        } store;
        struct {
            unsigned int uid;
            NSArray *flags;
            int internalDate;
            unsigned int size;
        } append;
        struct {
            struct __CFArray *srcUids;
            struct __CFArray *dstUids;
            NSString *destinationMailbox;
        } copy;
    } _opSpecific;
}

+ (id)deserializedCopyFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (id)description;
- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned int)arg3;
- (_Bool)getMessageId:(id *)arg1 andInternalDate:(id *)arg2 forDestinationUid:(unsigned int)arg3;
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)arg1;
- (id)destinationMailbox;
- (id)destinationUids;
- (id)sourceUids;
- (unsigned int)uid;
- (id)internalDate;
- (id)flags;
- (id)uids;
- (id)flagsToClear;
- (id)flagsToSet;
- (void)setUsesRealUids:(_Bool)arg1;
- (_Bool)usesRealUids;
- (unsigned int)approximateSize;
- (id)mailboxName;
- (int)operationType;
- (unsigned int)lastTemporaryUid;
- (unsigned int)firstTemporaryUid;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (_Bool)actsOnTemporaryUid:(unsigned int)arg1;
- (_Bool)isSourceOfTemporaryUid:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithAppendedUid:(unsigned int)arg1 approximateSize:(unsigned int)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5;
- (id)initWithUidsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(unsigned int)arg4;
- (id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 forUids:(id)arg3 inMailbox:(id)arg4;
- (id)initWithMailboxToDelete:(id)arg1;
- (id)initWithMailboxToCreate:(id)arg1;
- (void)serializeIntoData:(id)arg1;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (unsigned char)_magic;

@end

