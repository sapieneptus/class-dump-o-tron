//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WLOMetrics : NSObject
{
}

+ (void)LogResultMetric:(unsigned long long)arg1 resultCode:(long long)arg2 duration:(double)arg3 transportType:(unsigned long long)arg4 isClient:(_Bool)arg5 serviceTypes:(id)arg6 characteristicTypes:(id)arg7;
+ (void)LogEventMetric:(unsigned long long)arg1;
+ (void)LogConfigurationMetric:(id)arg1;

@end

