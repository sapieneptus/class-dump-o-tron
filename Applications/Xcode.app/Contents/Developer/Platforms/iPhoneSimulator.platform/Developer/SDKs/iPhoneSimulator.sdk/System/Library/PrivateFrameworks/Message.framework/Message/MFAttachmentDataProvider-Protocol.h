//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFAttachment, MFMessage, NSData;

@protocol MFAttachmentDataProvider <NSObject>
- (MFMessage *)messageForAttachment:(MFAttachment *)arg1;
- (_Bool)fetchDataForAttachment:(MFAttachment *)arg1 withDataConsumer:(id <MFDataConsumer>)arg2 error:(id *)arg3;
- (NSData *)fetchLocalDataForAttachment:(MFAttachment *)arg1;
@end

