//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol SimBridge
- (int)launchApplicationWithID:(in bycopy NSString *)arg1 options:(in bycopy NSDictionary *)arg2 error:(out bycopy id *)arg3;
- (out bycopy NSDictionary *)installedApps;
- (out bycopy NSString *)typeForInstalledApplication:(in bycopy NSString *)arg1;
@end
