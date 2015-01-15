//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNAnimationPlugin.h"

@class KNAnimationContext, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimationEffect : NSObject <KNAnimationPlugin>
{
    KNAnimationContext *mAnimationContext;
}

+ (id)updateDirectionAttributeValue:(long long)arg1 andCustomTextDirectionValue:(unsigned long long)arg2 turnOffBounce:(_Bool)arg3 turnOffMotionBlur:(_Bool)arg4 forAttributes:(id)arg5;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
