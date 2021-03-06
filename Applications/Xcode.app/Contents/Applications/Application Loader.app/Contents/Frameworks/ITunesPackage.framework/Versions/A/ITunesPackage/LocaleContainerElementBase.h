//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class NSNumber, NSString;

@interface LocaleContainerElementBase : AbstractElement
{
    NSString *_name;
    NSString *_title;
    NSString *_synopsis;
    NSNumber *_defaultValue;
    NSNumber *_remove;
    NSString *_contentDescription;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *contentDescription;
@property(retain, nonatomic) NSNumber *remove;
@property(retain, nonatomic) NSNumber *defaultValue;
@property(retain, nonatomic) NSString *synopsis;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

