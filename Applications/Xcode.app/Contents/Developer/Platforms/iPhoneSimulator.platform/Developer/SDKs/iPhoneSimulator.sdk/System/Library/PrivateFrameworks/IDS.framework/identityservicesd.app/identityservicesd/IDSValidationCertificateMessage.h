//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSBaseMessage.h"

#import "NSCopying.h"

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage <NSCopying>
{
    NSData *_responseCertificateData;
    NSData *_pushToken;
}

@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSData *responseCertificateData; // @synthesize responseCertificateData=_responseCertificateData;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (long long)responseCommand;
- (long long)command;
- (_Bool)wantsHTTPGet;
- (_Bool)wantsBinaryPush;
- (_Bool)wantsCompressedBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsBagKey;
- (_Bool)wantsIDSServer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

