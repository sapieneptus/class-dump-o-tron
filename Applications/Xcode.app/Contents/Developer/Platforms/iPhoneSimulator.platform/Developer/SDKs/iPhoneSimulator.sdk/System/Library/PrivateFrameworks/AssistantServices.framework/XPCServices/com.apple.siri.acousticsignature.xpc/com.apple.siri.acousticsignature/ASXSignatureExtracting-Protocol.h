//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol ASXSignatureExtracting <NSObject>
- (oneway void)reset;
- (oneway void)getSignature:(void (^)(NSData *))arg1;
- (oneway void)appendAcousticData:(NSData *)arg1 sampleCount:(int)arg2;
- (oneway void)setSampleRate:(int)arg1;
@end

