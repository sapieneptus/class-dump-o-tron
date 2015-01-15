//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SCNAnimatable.h"

@class NSArray, NSMutableArray, NSString, SCNOrderedDictionary;

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding>
{
    id _reserved;
    struct __C3DMorph *_morpher;
    unsigned int _isPresentationInstance:1;
    long long _calculationMode;
    SCNOrderedDictionary *_animations;
    NSArray *_targets;
    NSMutableArray *_weights;
    NSString *_name;
    _Bool _shouldMorphNormals;
}

+ (_Bool)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __C3DMorph *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNMorpher:(id)arg1;
- (void)_customEncodingOfSCNMorpher:(id)arg1;
- (void)_customDecodingOfSCNMorpher:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
@property(nonatomic) long long calculationMode;
- (void)setWeights:(id)arg1;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
- (void)setShouldMorphNormals:(_Bool)arg1;
- (_Bool)shouldMorphNormals;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (id)presentationInstance;
- (id)presentationMorpher;
- (_Bool)isPausedOrPausedByInheritance;
- (void)_syncObjCModel;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void *)__CFObject;
@property(readonly, copy) NSString *description;
- (struct __C3DMorph *)morphRef;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
@property(copy, nonatomic) NSArray *targets;
- (void)dealloc;
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph *)arg1;
- (id)initWithMorphRef:(struct __C3DMorph *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
