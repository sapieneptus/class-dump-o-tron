//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLSBase64Decoder : NSObject
{
    char _decoder[128];
    _Bool _photoUUID;
}

+ (id)decoderForPhotoUUID;
+ (id)decoder;
- (id)decodeString:(id)arg1;
- (id)initForPhotoUUID;
- (id)init;

@end
