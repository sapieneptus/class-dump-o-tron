//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class ACAccount, ACAccountStore, NSArray, NSDictionary;

@interface SLTwitterABLookup : NSOperation
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    _Bool _executing;
    _Bool _finished;
    NSArray *_emails;
    NSArray *_phones;
    NSDictionary *_personDictionary;
}

@property(retain, nonatomic) NSDictionary *personDictionary; // @synthesize personDictionary=_personDictionary;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(copy, nonatomic) NSArray *emails; // @synthesize emails=_emails;
- (void).cxx_destruct;
- (void)_populateABWithData:(id)arg1;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (id)initWithAccount:(id)arg1 store:(id)arg2;

@end
