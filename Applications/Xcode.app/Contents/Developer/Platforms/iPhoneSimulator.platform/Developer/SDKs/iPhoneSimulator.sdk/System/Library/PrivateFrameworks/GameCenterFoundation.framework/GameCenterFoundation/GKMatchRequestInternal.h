//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface GKMatchRequestInternal : GKInternalRepresentation
{
    unsigned long long _matchType;
    NSArray *_recipients;
    NSArray *_recipientPlayerIDs;
    NSString *_inviteMessage;
    NSDictionary *_localizableInviteMessage;
    NSData *_sessionToken;
    NSString *_rid;
    unsigned int _version;
    int _playerGroup;
    unsigned int _playerAttributes;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    unsigned char _defaultNumberOfPlayers;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) unsigned char defaultNumberOfPlayers; // @synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSDictionary *localizableInviteMessage; // @synthesize localizableInviteMessage=_localizableInviteMessage;
@property(copy, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(retain, nonatomic) NSArray *recipientPlayerIDs; // @synthesize recipientPlayerIDs=_recipientPlayerIDs;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) unsigned int playerAttributes; // @synthesize playerAttributes=_playerAttributes;
@property(nonatomic) int playerGroup; // @synthesize playerGroup=_playerGroup;
@property(nonatomic) unsigned char maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) unsigned char minPlayers; // @synthesize minPlayers=_minPlayers;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

