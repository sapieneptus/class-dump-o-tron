//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>
{
}

+ (id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)seasonRange;
@property(copy, nonatomic) NSDate *start;
@property(copy, nonatomic) NSString *seasonType;
@property(copy, nonatomic) NSDate *end;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
