//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, VKMapView;

@protocol MKOverlayContainerViewDelegate
- (VKMapView *)vk_mapLayer;
- (CDStruct_90e2a262)visibleMapRect;
- (id <MKOverlayDrawable>)createDrawableForOverlay:(id <MKOverlay>)arg1;
- (void)overlayContainerAddedDrawables:(NSArray *)arg1;
@end
