//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ThreeDButton.h"

@class MKMapView;

__attribute__((visibility("hidden")))
@interface Maps3DButton : ThreeDButton
{
    MKMapView *_mapView;
    id _target;
    CDUnknownBlockType _tapped;
}

+ (id)_itemWithCommonImplementationForMapView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType tapped; // @synthesize tapped=_tapped;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)mapViewDidChangeOwner;
- (void)mapViewDidChangeCanShowFlyover;
- (void)mapViewDidChangePitched;
- (void)_setupCommonImplementationForMapView:(id)arg1;
- (void)_didTapButton;
- (void)dealloc;
- (void)_setupDefaultButton;

@end

