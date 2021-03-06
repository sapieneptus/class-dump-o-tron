//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKMapModelDelegate.h"

@class NSString, VKImageCanvas, VKMapModel, VKRasterMapTileRequest;

@interface VKRasterMapTileCreator : NSObject <VKMapModelDelegate>
{
    VKImageCanvas *_canvas;
    VKMapModel *_mapModel;
    struct VKTileKey _superTileKey;
    double _startTimestamp;
    _Bool _loaderOpen;
    CDUnknownBlockType _completion;
    VKRasterMapTileRequest *_request;
    struct GLRenderer *_gglRenderer;
}

+ (shared_ptr_77723e34)device;
- (id).cxx_construct;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(_Bool)arg4 duration:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)mapModel:(id)arg1 markerForAnnotation:(id)arg2;
- (double)mapModelZoomScale:(id)arg1;
- (_Bool)mapModelInNav:(id)arg1;
- (_Bool)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(_Bool)arg2;
- (void)mapModelWillBecomFullyDrawn:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithSoftwareRendering:(_Bool)arg1 homeQueue:(id)arg2;
- (void)_lookAtKey:(const struct VKTileKey *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

