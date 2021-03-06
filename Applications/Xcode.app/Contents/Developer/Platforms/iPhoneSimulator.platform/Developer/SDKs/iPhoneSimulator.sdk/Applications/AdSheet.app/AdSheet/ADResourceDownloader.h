//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ADResourceDownloader : NSObject
{
    _Bool _allowsConcurrentDownloads;
    NSMutableArray *_activeJobs;
    NSMutableArray *_downloadQueue;
}

@property(retain, nonatomic) NSMutableArray *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSMutableArray *activeJobs; // @synthesize activeJobs=_activeJobs;
@property(nonatomic) _Bool allowsConcurrentDownloads; // @synthesize allowsConcurrentDownloads=_allowsConcurrentDownloads;
- (void)cancelRequest:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestForURL:(id)arg1;
- (void)insertJobBarrier:(CDUnknownBlockType)arg1;
- (void)downloadRequestJob:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)jobForConnection:(id)arg1;
- (void)_processNextJob;
- (id)init;
- (void)dealloc;

@end

