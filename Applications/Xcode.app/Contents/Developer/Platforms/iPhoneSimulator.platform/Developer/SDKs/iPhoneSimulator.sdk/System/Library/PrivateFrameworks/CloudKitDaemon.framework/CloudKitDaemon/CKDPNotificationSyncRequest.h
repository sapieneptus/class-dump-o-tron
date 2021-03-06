//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPNotificationSyncRequest : PBRequest <NSCopying>
{
    unsigned int _maxChanges;
    NSData *_serverChangeToken;
    CDStruct_f8809e99 _has;
}

+ (id)options;
@property(nonatomic) unsigned int maxChanges; // @synthesize maxChanges=_maxChanges;
@property(retain, nonatomic) NSData *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaxChanges;
@property(readonly, nonatomic) _Bool hasServerChangeToken;

@end

