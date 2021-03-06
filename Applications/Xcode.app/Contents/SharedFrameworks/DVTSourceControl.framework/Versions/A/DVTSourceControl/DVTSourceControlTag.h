//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlRevisionLocation.h>

@class NSString;

@interface DVTSourceControlTag : DVTSourceControlRevisionLocation
{
    unsigned long long _options;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultImage;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)description;
@property(readonly, getter=isNewTag) BOOL newTag;
- (id)pathLocationForBranchAndTagLocations:(id)arg1;
@property(readonly) NSString *name;
- (id)displayName;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNewTagName:(id)arg1;
- (id)initWithTagPathLocation:(id)arg1 branchAndTagLocations:(id)arg2;
- (id)initWithTagName:(id)arg1;
- (id)_init;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

