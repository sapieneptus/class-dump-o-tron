//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface KNContentAwareTextureGenerator : NSObject
{
}

+ (void)addLayersWithTag:(id)arg1 plugin:(id)arg2 baseLayer:(id)arg3 backgroundLayer:(id)arg4 textures:(id)arg5 layerToOldHiddenValueMap:(id)arg6;
+ (void)p_setHidden:(_Bool)arg1 onLayer:(id)arg2 oldValueMap:(id)arg3;
+ (id)generateTexturesTagsAndAttributesForASV:(id)arg1 plugin:(id)arg2;
+ (void)p_addLayersForInfos:(id)arg1 tag:(id)arg2 isBackground:(_Bool)arg3 asv:(id)arg4 isIncoming:(_Bool)arg5 plugin:(id)arg6 addToTextures:(id)arg7 ignoreBuildVisibiility:(_Bool)arg8;
+ (void)p_addBlackBackgroundLayerWithTag:(id)arg1 asv:(id)arg2 plugin:(id)arg3 addToTextures:(id)arg4;
+ (void)p_preloadTexturesConcurrentlyWithInfos:(id)arg1 asv:(id)arg2 plugin:(id)arg3 ignoreBuildVisibiility:(_Bool)arg4 isIncoming:(_Bool)arg5;
+ (id)p_textureForRep:(id)arg1 info:(id)arg2 asv:(id)arg3 plugin:(id)arg4 ignoreBuildVisibiility:(_Bool)arg5 isIncoming:(_Bool)arg6;
+ (void)p_generateLayersForTexture:(id)arg1 tag:(id)arg2 isBackground:(_Bool)arg3 isMagicMove:(_Bool)arg4 addToTextures:(id)arg5;

@end

