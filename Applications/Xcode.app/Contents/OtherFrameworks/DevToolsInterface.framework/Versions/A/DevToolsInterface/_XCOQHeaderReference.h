//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _XCOQHeaderReference : NSObject
{
    NSString *_path;
    struct _NSRange _fullFilenameRange;
    unsigned long long _filenameLength;
}

@property(readonly) NSString *path; // @synthesize path=_path;
- (id)matchForMatchContext:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

