//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeSchema.h>

__attribute__((visibility("hidden")))
@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
{
}

- (id)schemaEffectRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_e3362728 *)effectDefinitionWithName:(id)arg1;
- (unsigned long long)effectDefinitionCount;
- (const CDStruct_e3362728 *)sortedEffectDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_e3362728 *)_sortedEffectDefinitions;
- (const CDStruct_e3362728 *)effectDefinitionAtIndex:(unsigned long long)arg1;
- (id)schemaRenditionsForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (id)widgetNameForPartDefinition:(const CDStruct_26b2aa83 *)arg1;
- (const CDStruct_c77fb927 *)categoryForElementDefinition:(const CDStruct_e3362728 *)arg1;
- (const CDStruct_e3362728 *)elementDefinitionWithName:(id)arg1;
- (unsigned long long)elementDefinitionCount;
- (const CDStruct_e3362728 *)sortedElementDefinitionAtIndex:(unsigned long long)arg1;
- (const CDStruct_e3362728 *)_sortedElementDefinitions;
- (const CDStruct_e3362728 *)elementDefinitionAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCategoryCount;
- (const CDStruct_c77fb927 *)elementCategoryAtIndex:(unsigned long long)arg1;
- (long long)schemaVersion;

@end

