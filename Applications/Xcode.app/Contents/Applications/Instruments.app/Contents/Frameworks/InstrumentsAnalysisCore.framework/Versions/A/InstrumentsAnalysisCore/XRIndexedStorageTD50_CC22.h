//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsAnalysisCore/XRIndexedStorage.h>

@interface XRIndexedStorageTD50_CC22 : XRIndexedStorage
{
    struct _XRIndexedStorageBasic_MPStrategy<XRTD50_CC22_Strategy> *_strat;
    struct XRSpatialIndexMP<_XRIndexedStorageBasic_MPStrategy<XRTD50_CC22_Strategy>> *_index;
    unsigned int _topologyHandle;
}

- (void)dealloc;
- (struct _XRAnalysisCoreReadCursorSeekable *)createSeekableReadOnlyCursorForTableID:(unsigned int)arg1 pack:(const struct _XRStorageManagerExternalAccessPack *)arg2;
- (void)executeQuery:(id)arg1 tableID:(unsigned int)arg2 handler:(id)arg3 pack:(const struct _XRStorageManagerExternalAccessPack *)arg4;
- (BOOL)performIndexOptimizeWithAccess:(const struct _XRStorageManagerExternalAccessPack *)arg1;
- (void)discardWriteCursor:(struct XRAnalysisCoreWriteCursor *)arg1;
- (struct XRAnalysisCoreWriteCursor *)writeCursorWithPack:(const struct _XRStorageManagerExternalAccessPack *)arg1;
- (id)initWithSchema:(id)arg1 baseFileURL:(id)arg2 spec:(id)arg3;

@end

