//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCSpecification.h>

@class NSArray, NSArray<DVTMacroExpansion>, NSString;

@interface XCArchitectureSpecification : XCSpecification
{
    long long _byteOrder;
    NSString *_canonicalName;
    NSString *_userVisibleName;
    NSArray<DVTMacroExpansion> *_realArchitectures;
    NSString *_architectureSetting;
    BOOL _isShownInPopup;
    long long _sortNumber;
    NSArray *_compatibilityArchs;
}

+ (id)validArchitectureCanonicalNamesInDomain:(id)arg1;
+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (void).cxx_destruct;
- (id)compatibilityArchitectures;
- (long long)sortNumber;
- (BOOL)isShownInPopup;
- (id)architectureSetting;
- (id)realArchitectures;
- (id)userVisibleName;
- (id)canonicalName;
- (long long)byteOrder;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

