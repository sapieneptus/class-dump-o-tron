//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADJavaScriptObject.h"

#import "ADTwitterJSO_Bindings.h"

@class JSValue, NSArray, NSMutableArray, NSString;

@interface ADTwitterJSO : ADJavaScriptObject <ADTwitterJSO_Bindings>
{
    NSString *_text;
    NSMutableArray *_tweetImageRecords;
    NSArray *_tweetURLs;
}

+ (void)initializeInContext:(id)arg1;
@property(copy, nonatomic) NSArray *tweetURLs; // @synthesize tweetURLs=_tweetURLs;
@property(retain, nonatomic) NSMutableArray *tweetImageRecords; // @synthesize tweetImageRecords=_tweetImageRecords;
- (void)followScreenName:(id)arg1 userID:(id)arg2;
- (void)presentComposer;
@property(retain, nonatomic) NSArray *images;
@property(retain, nonatomic) NSArray *URLs;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)adWillDismiss;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) JSValue *listener;

@end

