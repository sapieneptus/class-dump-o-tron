//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, RNGVerificationElement;

@interface RNGValidation : NSObject
{
    NSError *_error;
    RNGVerificationElement *_element;
    id _value;
    BOOL _warning;
    BOOL _enabled;
    NSString *_localizationTable;
}

- (id)description;
- (id)displayValue;
- (void)setValue:(id)arg1;
- (id)value;
- (id)identifier;
- (void)setLocalizationTable:(id)arg1;
- (id)fieldName;
- (id)localizedFailureReason;
- (id)localizedDescription;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setWarning:(BOOL)arg1;
- (BOOL)isWarning;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (id)initWithWarning:(id)arg1 element:(id)arg2 value:(id)arg3;
- (id)initWithError:(id)arg1 element:(id)arg2 value:(id)arg3;
- (id)init;
- (id)image;
- (id)imageName;

@end

