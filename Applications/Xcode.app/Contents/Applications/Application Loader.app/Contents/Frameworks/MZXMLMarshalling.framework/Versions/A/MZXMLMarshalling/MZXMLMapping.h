//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSXMLElement;

@interface MZXMLMapping : NSObject <NSCopying>
{
    NSXMLElement *_element;
    NSString *_mappingDescription;
}

+ (BOOL)extractStringAttribute:(id)arg1 element:(id)arg2 required:(BOOL)arg3 result:(id *)arg4 error:(id *)arg5;
+ (BOOL)extractBooleanAttribute:(id)arg1 element:(id)arg2 required:(BOOL)arg3 result:(char *)arg4 defaultValue:(BOOL)arg5 error:(id *)arg6;
+ (BOOL)extractBooleanAttribute:(id)arg1 element:(id)arg2 required:(BOOL)arg3 result:(char *)arg4 error:(id *)arg5;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)mappingDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithXML:(id)arg1 error:(id *)arg2;

@end
