//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, iCloudItem;

@protocol iCloudAggregateItemListener <NSObject>
- (void)iCloudItem:(iCloudItem *)arg1 sizeChanged:(unsigned long long)arg2;
- (void)iCloudItem:(iCloudItem *)arg1 downloadedBytes:(unsigned long long)arg2 ofTotalBytes:(unsigned long long)arg3;
- (void)iCloudItem:(iCloudItem *)arg1 uploadedBytes:(unsigned long long)arg2 ofTotalBytes:(unsigned long long)arg3;
- (void)iCloudItem:(iCloudItem *)arg1 updatedStatus:(unsigned long long)arg2;
- (void)iCloudItemMoved:(iCloudItem *)arg1 from:(NSURL *)arg2 to:(NSURL *)arg3;
- (void)iCloudItemRemoved:(iCloudItem *)arg1;
- (void)iCloudItemAdded:(iCloudItem *)arg1;
@end

