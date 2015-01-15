//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableSet, NSString;

@interface SFCompanionDevice : NSObject
{
    id _node;
    NSString *_name;
    NSString *_type;
    NSString *_identifier;
    NSArray *_services;
    NSString *_serviceName;
    NSMutableSet *_connections;
    NSDictionary *_activities;
    NSString *_uniqueIdentifier;
}

@property(retain) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSDictionary *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id node; // @synthesize node=_node;
- (long long)distance;
- (struct CGImage *)icon;
- (id)model;
- (void)dealloc;
- (id)init;

@end
