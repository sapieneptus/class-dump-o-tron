//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface APSSystemUser : NSObject
{
    NSString *_userID;
    unsigned char _uuid[16];
    NSString *_status;
    _Bool _daemonUser;
    NSMutableDictionary *_guestUserCache;
}

+ (id)allSystemUsers;
+ (id)allDaemonUserIDs;
+ (id)allConsoleUserIDs;
+ (id)systemUserWithUID:(unsigned int)arg1;
+ (id)systemUserWithUserID:(id)arg1;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)debugDescription;
- (void)removeUser;
- (_Bool)isDifferentUser;
- (_Bool)isBootstrapped;
- (_Bool)isRootUser;
- (_Bool)isGuestUser;
- (_Bool)isDaemonUser;
- (_Bool)isLoggedOut;
- (_Bool)isLoggedIn;
@property(readonly, nonatomic) unsigned int uid;
- (void)dealloc;
- (id)initWithUserID:(id)arg1;

@end

