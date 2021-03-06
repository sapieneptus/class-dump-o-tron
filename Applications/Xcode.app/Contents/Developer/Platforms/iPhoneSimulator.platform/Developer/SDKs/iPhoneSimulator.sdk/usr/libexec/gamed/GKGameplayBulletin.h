//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKBulletin.h"

@class GKPlayerInternal, NSArray, NSString, NSURL;

@interface GKGameplayBulletin : GKBulletin
{
    _Bool _showStoreButton;
    NSString *_receiverPlayerID;
    NSString *_originatorPlayerID;
    GKPlayerInternal *_receiverPlayer;
    GKPlayerInternal *_originatorPlayer;
    NSURL *_storeURL;
    NSArray *_compatibleVersions;
}

@property _Bool showStoreButton; // @synthesize showStoreButton=_showStoreButton;
@property(retain) NSArray *compatibleVersions; // @synthesize compatibleVersions=_compatibleVersions;
@property(retain) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain) GKPlayerInternal *originatorPlayer; // @synthesize originatorPlayer=_originatorPlayer;
@property(retain) GKPlayerInternal *receiverPlayer; // @synthesize receiverPlayer=_receiverPlayer;
@property(retain) NSString *originatorPlayerID; // @synthesize originatorPlayerID=_originatorPlayerID;
@property(retain) NSString *receiverPlayerID; // @synthesize receiverPlayerID=_receiverPlayerID;
- (void)loadOriginatorPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadStoreItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)determineAndLoadCompatibleGameIncludingStore:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)gamePlatformWithHandler:(CDUnknownBlockType)arg1;
- (void)determineCompatibleGameOnDeviceAndCompatibilityMatrixWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)determineCompatibleGameOnDevice;
- (_Bool)determineCompatibilityForGameDescriptor:(id)arg1;
- (_Bool)isPushForLocalPlayer;
@property(readonly, retain) NSString *URLContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

