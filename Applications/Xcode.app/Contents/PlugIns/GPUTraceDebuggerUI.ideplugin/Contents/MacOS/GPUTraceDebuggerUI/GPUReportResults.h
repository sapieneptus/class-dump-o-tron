//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUInvestigatorReportItem.h"

@class DYInvestigatorCase, DYInvestigatorCaseConfigData;

@interface GPUReportResults : GPUInvestigatorReportItem
{
    DYInvestigatorCaseConfigData *_investigatorCaseConfigData;
    DYInvestigatorCase *_investigatorCase;
}

@property(retain, nonatomic) DYInvestigatorCase *investigatorCase; // @synthesize investigatorCase=_investigatorCase;
@property(retain, nonatomic) DYInvestigatorCaseConfigData *investigatorCaseConfigData; // @synthesize investigatorCaseConfigData=_investigatorCaseConfigData;
- (void).cxx_destruct;
- (id)cpuGPUActiveTimeTimes:(BOOL)arg1;
- (id)utilizationPercentages;
- (id)archive;
- (id)initWithInvestigatorCaseConfigData:(id)arg1 controller:(id)arg2;

@end

