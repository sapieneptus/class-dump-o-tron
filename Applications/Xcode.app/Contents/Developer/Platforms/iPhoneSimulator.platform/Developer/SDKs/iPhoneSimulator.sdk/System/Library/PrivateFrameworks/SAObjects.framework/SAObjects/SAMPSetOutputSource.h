//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SAMPSetOutputSource : SADomainCommand
{
}

+ (id)setOutputSourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setOutputSource;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSURL *outputSourceId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

