//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperationDelegate.h"

@class RestorePodcastItemsOperation, RestorePodcastItemsResponse;

@protocol RestorePodcastItemsOperationDelegate <ISOperationDelegate>

@optional
- (void)restorePodcastItemsOperation:(RestorePodcastItemsOperation *)arg1 didReceiveResponse:(RestorePodcastItemsResponse *)arg2;
@end
