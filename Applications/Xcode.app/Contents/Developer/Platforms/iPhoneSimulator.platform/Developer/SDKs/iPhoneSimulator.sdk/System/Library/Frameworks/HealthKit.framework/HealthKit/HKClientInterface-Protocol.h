//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthService, NSArray, NSDictionary, NSError, NSString, NSUUID;

@protocol HKClientInterface <NSObject>
- (void)deliverSessionCharacteristics:(NSArray *)arg1 forService:(NSString *)arg2 toClient:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)deliverSessionTransitoryData:(NSDictionary *)arg1 toClient:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(NSError *)arg4;
- (void)deliverDiscoveryHealthService:(HKHealthService *)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(NSError *)arg4;
- (void)deliverBluetoothStatus:(long long)arg1 withError:(NSError *)arg2;
- (void)presentAuthorizationWithSessionIdentifier:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
