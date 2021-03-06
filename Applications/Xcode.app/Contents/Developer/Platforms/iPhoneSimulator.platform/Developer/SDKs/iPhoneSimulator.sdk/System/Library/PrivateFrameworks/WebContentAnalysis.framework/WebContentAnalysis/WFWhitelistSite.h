//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WFWhitelistSite : NSObject
{
    NSString *urlString;
    NSURL *url;
    NSString *domainName;
    NSString *normalizedURLString;
}

@property(readonly) NSString *domainName; // @synthesize domainName;
@property(copy) NSURL *url; // @synthesize url;
@property(copy) NSString *urlString; // @synthesize urlString;
- (id)description;
- (_Bool)hasMetasitePrefix:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithURLString:(id)arg1;

@end

