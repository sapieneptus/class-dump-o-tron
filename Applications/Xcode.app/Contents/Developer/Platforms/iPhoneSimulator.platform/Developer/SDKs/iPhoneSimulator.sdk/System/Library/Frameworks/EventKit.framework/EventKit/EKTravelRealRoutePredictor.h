//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKTravelRoutePredictor.h"

@class EKTravelAgendaItem, EKTravelRealRoutePredictorInternalDelegate, GEOComposedWaypoint, GEOQuickETARequester, GEORouteHypothesizer, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface EKTravelRealRoutePredictor : NSObject <EKTravelRoutePredictor>
{
    _Bool _hypothesisInProgress;
    NSDate *_arrivalDate;
    GEORouteHypothesizer *_hypothesizer;
    EKTravelRealRoutePredictorInternalDelegate *_hypothesizerDelegate;
    GEOComposedWaypoint *_sourceWaypoint;
    GEOComposedWaypoint *_destinationWaypoint;
    GEOQuickETARequester *_quickHypothesizer;
    int _travelMethod;
    EKTravelAgendaItem *_agendaItem;
}

@property(readonly, nonatomic) int travelMethod; // @synthesize travelMethod=_travelMethod;
@property(nonatomic) EKTravelAgendaItem *agendaItem; // @synthesize agendaItem=_agendaItem;
- (void)updateLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_getOneshotPredictionFrom:(id)arg1 transportType:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_getAutomobilePredictionFrom:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_newQuickHypothesizerWithRequest:(id)arg1;
- (void)_newHypothesizer;
- (id)initWithSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 travelMethod:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

