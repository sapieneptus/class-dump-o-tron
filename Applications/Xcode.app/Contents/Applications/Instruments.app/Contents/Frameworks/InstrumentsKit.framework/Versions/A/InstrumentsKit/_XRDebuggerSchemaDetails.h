//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface _XRDebuggerSchemaDetails : NSObject <NSCopying>
{
    NSString *_schemaDescription;
    NSArray *_columns;
}

@property(retain, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) NSString *schemaDescription; // @synthesize schemaDescription=_schemaDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

