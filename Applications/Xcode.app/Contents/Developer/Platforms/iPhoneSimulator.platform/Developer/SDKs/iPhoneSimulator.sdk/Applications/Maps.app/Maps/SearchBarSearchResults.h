//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SearchBarSearchResults : NSObject
{
    NSMutableArray *_resultSets;
}

@property(copy, nonatomic) NSMutableArray *resultSets; // @synthesize resultSets=_resultSets;
- (void).cxx_destruct;
- (id)copy;
- (void)addResultSet:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)filteredResultsWithBackfill:(long long)arg1;
- (id)init;

@end

