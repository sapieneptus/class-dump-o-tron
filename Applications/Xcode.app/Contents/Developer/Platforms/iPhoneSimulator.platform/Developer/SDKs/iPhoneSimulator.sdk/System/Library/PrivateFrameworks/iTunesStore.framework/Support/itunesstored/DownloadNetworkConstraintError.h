//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DownloadError.h"

#import "NSCopying.h"

@interface DownloadNetworkConstraintError : DownloadError <NSCopying>
{
    _Bool _canDownloadInITunes;
    long long _sizeLimit;
}

@property(nonatomic) long long constrainedSizeLimit; // @synthesize constrainedSizeLimit=_sizeLimit;
@property(nonatomic) _Bool canDownloadInITunes; // @synthesize canDownloadInITunes=_canDownloadInITunes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValidError;
- (id)copyUserNotification;
- (id)_specificStringWithLocalizedKeyBase:(id)arg1;
- (id)_genericStringWithLocalizedKeyBase:(id)arg1;
- (_Bool)canCoalesceWithError:(id)arg1;

@end
