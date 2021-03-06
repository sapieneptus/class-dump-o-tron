//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOCarInfo, GEOMapRegion, GEOPlaceActionDetails;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
    int _actionType;
    GEOCarInfo *_carInfo;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    int _sequenceNumber;
    struct {
        unsigned int sessionID:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int zoomLevel:1;
        unsigned int actionType:1;
        unsigned int sequenceNumber:1;
    } _has;
}

+ (id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOCarInfo *carInfo; // @synthesize carInfo=_carInfo;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) _Bool hasZoomLevel;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasCarInfo;
@property(readonly, nonatomic) _Bool hasPlaceActionDetails;
@property(nonatomic) _Bool hasSessionRelativeTimestamp;
@property(nonatomic) _Bool hasActionType;
@property(nonatomic) _Bool hasSessionID;
- (void)dealloc;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;

@end

