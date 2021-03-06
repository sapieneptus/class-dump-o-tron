//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSTPersistentCellMap.h>

#import "TSTSearchableCellMap.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSTPersistentSearchableCellMap : TSTPersistentCellMap <TSTSearchableCellMap>
{
    NSMutableDictionary *mCellIDToIndexMap;
}

- (id)findCellFromCellMap:(CDStruct_0441cfb5)arg1;
- (void)popLastCell;
- (void)addCell:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (void)dealloc;
- (id)initWithArchive:(const struct CellMapArchive *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1 andCapacity:(unsigned long long)arg2;

// Remaining properties
@property(nonatomic) _Bool appliesToHidden;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

