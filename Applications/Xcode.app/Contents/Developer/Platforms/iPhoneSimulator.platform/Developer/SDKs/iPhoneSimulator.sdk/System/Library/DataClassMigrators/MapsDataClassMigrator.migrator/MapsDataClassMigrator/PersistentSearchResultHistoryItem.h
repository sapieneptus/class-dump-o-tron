//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HistoryPersistentItem.h"
#import "NSCopying.h"

@class NSString, SearchResult;

@interface PersistentSearchResultHistoryItem : PBCodable <HistoryPersistentItem, NSCopying>
{
    SearchResult *_searchResult;
}

@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSearchResult;
- (id)initWithPersistedHistoryRepresentation:(id)arg1 addressBook:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

