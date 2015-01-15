//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DeviceValidationContextFactory : NSObject
{
}

+ (id)factory;
- (id)deviceContextsWithInfoPlist:(id)arg1 error:(id *)arg2;
- (id)buildDeviceContextsWithDeviceFamilies:(id)arg1 infoPlist:(id)arg2 error:(id *)arg3;
- (BOOL)shouldUseIPodTouchContextWithInfoPlist:(id)arg1 error:(id *)arg2;
- (id)processDeviceFamilies:(id)arg1 error:(id *)arg2;
- (id)convertDeviceFamilyArray:(id)arg1 error:(id *)arg2;
- (id)convertDeviceFamilyNumber:(id)arg1 error:(id *)arg2;

@end
