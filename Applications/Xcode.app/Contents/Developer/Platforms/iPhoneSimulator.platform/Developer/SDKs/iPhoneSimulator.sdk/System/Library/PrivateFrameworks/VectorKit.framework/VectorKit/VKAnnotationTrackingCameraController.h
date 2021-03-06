//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKCameraController.h>

@class VKAnimation;

__attribute__((visibility("hidden")))
@interface VKAnnotationTrackingCameraController : VKCameraController
{
    id <VKTrackableAnnotation> _annotation;
    id <VKTrackableAnnotationPresentation> _annotationPresentation;
    VKAnimation *_currentAnimation;
    struct VKPoint _currentAnimationStartPoint;
    struct VKPoint _currentAnimationStartCameraPosition;
    struct VKPoint _currentAnimationEndPoint;
    struct VKPoint _currentAnimationEndCameraPosition;
    double _pendingChangeDuration;
    VKAnimation *_currentHeadingAnimation;
    double _pendingHeadingChangeDuration;
    float _headingAnimationCompletedAngle;
    struct VKEdgeInsets _edgeInsets;
    long long _zoomStyle;
    struct {
        unsigned int hasPendingChange:1;
        unsigned int paused:1;
        unsigned int trackingHeading:1;
        unsigned int hasPendingHeadingChange:1;
        unsigned int isInitialRegionChange:1;
        unsigned int isJumpingToAnnotation:1;
        unsigned int annotationImplementsAccuracy:1;
        unsigned int annotationImplementsHeading:1;
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval:1;
        unsigned int annotationImplementsExpectedHeadingUpdateInterval:1;
    } _flags;
}

@property(nonatomic) long long zoomStyle; // @synthesize zoomStyle=_zoomStyle;
@property(readonly, nonatomic) id <VKTrackableAnnotation> annotation; // @synthesize annotation=_annotation;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (_Bool)isAnimating;
- (void)setGesturing:(_Bool)arg1;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 isInitial:(_Bool)arg3;
- (void)updateFramerate;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;
- (void)dealloc;

@end

