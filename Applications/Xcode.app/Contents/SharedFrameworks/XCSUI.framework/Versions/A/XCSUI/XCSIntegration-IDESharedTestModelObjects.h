//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSIntegration.h"

#import "IDESharedTests_RootObject.h"

@class NSArray, NSString;

@interface XCSIntegration (IDESharedTestModelObjects) <IDESharedTests_RootObject>
- (id)ide_sharedTests_includeGroupsWithPassedTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_perfMetricNames;
- (id)testsIncludePassing:(BOOL)arg1 includeFailing:(BOOL)arg2 perfOnly:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

