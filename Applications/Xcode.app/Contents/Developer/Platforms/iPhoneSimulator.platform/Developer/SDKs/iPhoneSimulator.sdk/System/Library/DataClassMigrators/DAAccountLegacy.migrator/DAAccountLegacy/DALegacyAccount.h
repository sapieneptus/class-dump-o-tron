//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DALegacyAccount : NSObject
{
    NSMutableDictionary *_properties;
}

@property(readonly, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)setPrincipalURL:(id)arg1;
- (_Bool)useSSL;
- (long long)port;
- (id)username;
- (id)host;
- (id)accountPropertyForKey:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (_Bool)upgradeAccountWithParent:(id)arg1;
- (_Bool)_upgradeSelfFromPreKirkwood;
- (void)resetAccountID;
- (void)_removeHostsToTrust;
- (int)daAccountVersion;
- (id)changeTrackingID;
- (id)accountID;
- (id)initWithProperties:(id)arg1;

@end

