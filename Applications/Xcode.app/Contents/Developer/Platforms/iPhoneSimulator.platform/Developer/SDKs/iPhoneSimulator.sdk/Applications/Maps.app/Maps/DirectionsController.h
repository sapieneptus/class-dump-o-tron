//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DirectionsManagerDelegate.h"
#import "DirectionsManagerObserver.h"
#import "MNNavigationModeControllerDelegate.h"
#import "SteppingModeDelegate.h"

@class DirectionsAnnotationsManager, DirectionsHistoryItem, DirectionsManager, FullscreenGuidanceModeController, GEOComposedRouteStep, GEORouteMatch, MKMapView, MNNavigationModeController, MNRoute, NSMutableSet, NSString, SearchPinsManager, SelectedRouteStepAnnotation, SteppingModeController, UIActionSheet, UIImageView;

__attribute__((visibility("hidden")))
@interface DirectionsController : NSObject <DirectionsManagerObserver, DirectionsManagerDelegate, MNNavigationModeControllerDelegate, SteppingModeDelegate>
{
    id <DirectionsControllerDelegate> _delegate;
    DirectionsManager *_directionsManager;
    MNNavigationModeController *_navViewController;
    unsigned long long _transportType;
    MNRoute *_selectedRoute;
    long long _stepIndex;
    _Bool _isShowingNavigationDisplay;
    _Bool _needToShowRoute;
    _Bool _pansAndZoomsToRouteOverview;
    _Bool _showsAlternateRoutes;
    SearchPinsManager *_pinsManager;
    int _searchMode;
    _Bool _isShowingAlternateRouteAnnotationMarkers;
    CDStruct_2c43369c _routePositionViewCoordinate;
    SelectedRouteStepAnnotation *_selectedRouteStepAnnotation;
    NSMutableSet *_guidanceOutputs;
    long long _lastDirectionsStartOptions;
    _Bool _isShowingNavOnTopOfStepping;
    FullscreenGuidanceModeController *_fullscreenMode;
    SteppingModeController *_coveredSteppingController;
    UIActionSheet *_simulationPrompt;
    _Bool _showingRoute;
    DirectionsAnnotationsManager *_directionsAnnotationsManager;
    UIImageView *_routePositionView;
    MKMapView *_mapView;
    DirectionsHistoryItem *_currentHistoryItem;
}

@property(readonly, nonatomic) DirectionsHistoryItem *currentHistoryItem; // @synthesize currentHistoryItem=_currentHistoryItem;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) _Bool showsAlternateRoutes; // @synthesize showsAlternateRoutes=_showsAlternateRoutes;
@property(nonatomic) _Bool showingRoute; // @synthesize showingRoute=_showingRoute;
@property(retain, nonatomic) MNRoute *selectedRoute; // @synthesize selectedRoute=_selectedRoute;
@property(nonatomic) int searchMode; // @synthesize searchMode=_searchMode;
@property(retain, nonatomic) UIImageView *routePositionView; // @synthesize routePositionView=_routePositionView;
@property(nonatomic) __weak SearchPinsManager *pinsManager; // @synthesize pinsManager=_pinsManager;
@property(nonatomic) _Bool pansAndZoomsToRouteOverview; // @synthesize pansAndZoomsToRouteOverview=_pansAndZoomsToRouteOverview;
@property(nonatomic) _Bool needToShowRoute; // @synthesize needToShowRoute=_needToShowRoute;
@property(nonatomic) _Bool isShowingNavigationDisplay; // @synthesize isShowingNavigationDisplay=_isShowingNavigationDisplay;
@property(nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) DirectionsManager *directionsManager; // @synthesize directionsManager=_directionsManager;
@property(nonatomic) __weak DirectionsAnnotationsManager *directionsAnnotationsManager; // @synthesize directionsAnnotationsManager=_directionsAnnotationsManager;
@property(nonatomic) __weak id <DirectionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)directionsManagerShouldAllowAlternateRoutesForTransportType:(int)arg1;
- (void)stopPresentingFullscreenGuidanceInsteadOfNavigation;
- (void)startPresentingFullscreenGuidanceInsteadOfNavigation;
- (void)directionsManagerWillReset:(id)arg1;
- (void)switchToTransportType:(int)arg1;
- (void)_presentTransportType:(int)arg1 useSimulation:(_Bool)arg2 animated:(_Bool)arg3;
- (void)directionsManager:(id)arg1 displayDirectionsToSelectedRouteWithNavigationOfType:(int)arg2 options:(long long)arg3;
- (void)_dismissSimulationPrompt;
- (void)directionsManager:(id)arg1 needsPromptToSimulateForOptions:(long long)arg2;
- (void)directionsManager:(id)arg1 displayDirectionsToSelectedRouteWithoutNavigationWithOptions:(long long)arg2;
- (void)_createNavigationModeControllerForType:(int)arg1;
- (id)directionsRecorder;
- (_Bool)isNavigating;
- (id)currentNavigator;
- (id)navigationSession;
- (id)directionsSession;
- (void)endNavigation;
- (void)presentNavigationControllerAnimated:(_Bool)arg1;
- (void)presentNavigationController;
- (id)navigationMapView;
- (struct CGRect)mapFrame;
- (void)_setShowingRoutes:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_showPreparedRouteAnimated:(_Bool)arg1;
- (void)setDirectionsEnabled:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)goToMainRoutesAnimated:(_Bool)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)goToRouteStepAnimated:(_Bool)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)goToRouteStepAnimated:(_Bool)arg1;
- (void)goToRemainingRouteAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_needsToPanRoutePositionView;
@property(nonatomic) unsigned long long selectedRouteIndex;
- (CDStruct_02837cd9)_mapRectForRemainingRoute:(id)arg1;
- (CDStruct_02837cd9)_mapRectForStep:(id)arg1 inRoute:(id)arg2;
- (void)steppingModeChoseGuideMe:(id)arg1 withTransportType:(int)arg2 leg:(id)arg3;
- (void)steppingModeChoseEnd:(id)arg1;
- (void)steppingModeChoseOverview:(id)arg1;
- (void)navigationModeDidFinish:(id)arg1;
- (void)navigationModeDidSwitchToNewRoute:(id)arg1;
- (void)navigationModeWillDismiss:(id)arg1 isNavigationEnding:(_Bool)arg2;
- (void)navigationModeChoseEnd:(id)arg1;
- (void)directionsManagerDidSwitchToNewRoute:(id)arg1 route:(id)arg2;
- (void)directionsManager:(id)arg1 didStartNavigationSessionOfType:(int)arg2 options:(long long)arg3;
- (void)directionsManagerDidReset:(id)arg1;
- (void)directionsManagerDidCancelLoad:(id)arg1;
- (void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2;
- (id)_historyItemForSelectedRouteWithTimestamp:(double)arg1;
- (void)_createHistoryItemForFailure:(_Bool)arg1;
- (_Bool)_shouldCreateHistoryItemOnRouteLoad;
- (void)setCurrentHistoryItem:(id)arg1 forFailure:(_Bool)arg2;
- (void)directionsManager:(id)arg1 didLoadRoute:(id)arg2;
- (void)directionsManagerDidStartLoad:(id)arg1;
@property(readonly, nonatomic) GEORouteMatch *currentRouteMatch;
- (void)navigationModeTransportTypeChanged:(id)arg1 transportType:(int)arg2;
- (void)directionsManagerDidUpdateToStepIndex:(id)arg1 stepIndex:(id)arg2;
- (void)directionsManager:(id)arg1 didChangeNavigatorState:(int)arg2;
- (void)directionsManagerDidFailToRecalculateRoute:(id)arg1;
- (void)directionsManagerDidFailToReceiveRoute:(id)arg1;
- (void)directionsManagerWillRecalculateRoute:(id)arg1;
- (void)directionsManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5;
- (void)directionsManagerHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(_Bool)arg2;
- (void)directionsManagerHasArrived:(id)arg1;
- (void)directionsManagerHideSecondaryStep:(id)arg1;
- (void)directionsManager:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
- (void)directionsManager:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
- (void)directionsManager:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)directionsManagerUpdatedMatchedLocation:(id)arg1 matchedLocation:(id)arg2;
- (void)directionsManagerUpdatedTrafficIncidents:(id)arg1;
- (void)directionsManagerUpdatedETA:(id)arg1;
- (void)willResumeNavigation;
- (void)willPauseNavigation;
- (void)willEndNavigation;
- (void)willStartNavigation;
- (void)_showRoutePickingModeWithProvider:(id)arg1 forDirectionsManager:(id)arg2;
- (void)_showRoutePickingModeWithProvider:(id)arg1 forDirectionsManager:(id)arg2 replaceCurrentMode:(_Bool)arg3 defaultToRoutingApps:(_Bool)arg4;
- (void)showRoutingAppsFromOrigin:(id)arg1 toDestination:(id)arg2;
- (void)_didChangeSelectedRouteIndex:(unsigned long long)arg1;
- (void)willStartDirections;
@property(readonly, nonatomic) GEOComposedRouteStep *step;
- (id)_displayedRoutes;
- (void)setSelectedRouteNoNotify:(id)arg1;
- (_Bool)isDirectionsSessionActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
