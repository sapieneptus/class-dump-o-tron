//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MCTeslaValidationRule : NSObject
{
    _Bool _required;
    NSString *_srcKey;
    NSString *_srcGroupKey;
    NSString *_dstKey;
}

+ (id)ruleForDstKey:(id)arg1 srcKey:(id)arg2 group:(id)arg3 isRequired:(_Bool)arg4;
@property(nonatomic) _Bool required; // @synthesize required=_required;
@property(retain, nonatomic) NSString *dstKey; // @synthesize dstKey=_dstKey;
@property(retain, nonatomic) NSString *srcGroupKey; // @synthesize srcGroupKey=_srcGroupKey;
@property(retain, nonatomic) NSString *srcKey; // @synthesize srcKey=_srcKey;
- (void).cxx_destruct;
- (id)decodeCertificateFromBase64String:(id)arg1;
- (_Bool)applyRuleToCloudConfiguration:(id)arg1 withResultDictionary:(id)arg2;
- (id)initWithDestinationKey:(id)arg1 sourceKey:(id)arg2 group:(id)arg3 isRequired:(_Bool)arg4;

@end

