//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKMapViewAccessibilityElementDataSource.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface VKMapViewAccessibilityElementManager : NSObject <VKMapViewAccessibilityElementDataSource>
{
    _Bool _updating;
    NSArray *_accessibilityElements;
    long long _orientation;
    double _yaw;
    NSObject<OS_dispatch_queue> *_properties_queue;
    NSObject<OS_dispatch_queue> *_updates_queue;
    CDStruct_2c43369c _center;
    CDStruct_aca18c62 _bounds;
}

@property(nonatomic) NSObject<OS_dispatch_queue> *updates_queue; // @synthesize updates_queue=_updates_queue;
@property(nonatomic) NSObject<OS_dispatch_queue> *properties_queue; // @synthesize properties_queue=_properties_queue;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) CDStruct_2c43369c center; // @synthesize center=_center;
@property(nonatomic) CDStruct_aca18c62 bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
- (void)dealloc;
- (id)init;
- (void)updateAccessibilityElementsForMapView:(id)arg1 isRetry:(_Bool)arg2;
- (void)updateAccessibilityElementsForMapView:(id)arg1;
- (double)yawForMapView:(id)arg1;
- (long long)orientationForMapView:(id)arg1;
- (CDStruct_2c43369c)centerForMapView:(id)arg1;
- (CDStruct_aca18c62)boundsForMapView:(id)arg1;
- (id)accessibilityElementsForMapView:(id)arg1;
- (_Bool)_isValidYawForMapView:(id)arg1 yaw:(double)arg2;
- (_Bool)_isValidOrientationForMapView:(id)arg1 orientation:(long long)arg2;
- (_Bool)_isValidBoundsForMapView:(id)arg1 bounds:(CDStruct_aca18c62)arg2;
- (float)_zoomForMapView:(id)arg1;
- (double)_yawForMapView:(id)arg1;
- (long long)_orientationForMapView:(id)arg1;
- (CDStruct_2c43369c)_centerForMapView:(id)arg1;
- (CDStruct_aca18c62)_boundsForMapView:(id)arg1;
- (void)_filterAccessibilityElements:(id)arg1 zoomLevel:(float)arg2;
- (void)_sortAccessibilityElements:(id)arg1;
- (void)_consolidateAccessibilityElements:(id)arg1;
- (void)_processVisibleTile:(id)arg1 accessibilityElements:(id *)arg2 mapViewBounds:(CDStruct_aca18c62)arg3 mapView:(id)arg4 roadLabelMap:(id)arg5;
- (id)_accessibilityElementsForMapView:(id)arg1 mapViewBounds:(CDStruct_aca18c62)arg2 visibleLabels:(id)arg3 visibleTiles:(id)arg4;
- (id)_gatherVisibleTilesForMapView:(id)arg1;
- (id)_gatherVisibleLabelMarkersForMapView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

