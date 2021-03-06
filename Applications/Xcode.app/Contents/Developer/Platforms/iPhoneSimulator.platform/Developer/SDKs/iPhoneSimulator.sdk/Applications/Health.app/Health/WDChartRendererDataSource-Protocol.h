//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDChartRenderer, WDChartSeries;

@protocol WDChartRendererDataSource <NSObject>
- (id <WDChartPoint>)chartRenderer:(WDChartRenderer *)arg1 dataPointAtIndex:(unsigned long long)arg2 forSeriesAtIndex:(unsigned long long)arg3;
- (unsigned long long)chartRenderer:(WDChartRenderer *)arg1 numberOfDataPointsForSeriesAtIndex:(unsigned long long)arg2;
- (WDChartSeries *)chartRenderer:(WDChartRenderer *)arg1 seriesAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSeriesInChartRenderer:(WDChartRenderer *)arg1;
@end

