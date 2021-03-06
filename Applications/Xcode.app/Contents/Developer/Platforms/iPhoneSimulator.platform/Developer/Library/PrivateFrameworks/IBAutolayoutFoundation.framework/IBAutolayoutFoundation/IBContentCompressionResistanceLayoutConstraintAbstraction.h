//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBContentSizeLayoutConstraintAbstraction.h>

@interface IBContentCompressionResistanceLayoutConstraintAbstraction : IBContentSizeLayoutConstraintAbstraction
{
    double _compressionResistancePriority;
}

@property(nonatomic) double compressionResistancePriority; // @synthesize compressionResistancePriority=_compressionResistancePriority;
- (double)priority;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToAbstraction:(id)arg1;
- (Class)representationClass;
- (id)representationWithObjectRepresentationForObjectBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithView:(id)arg1 contentSize:(double)arg2 attribute:(unsigned long long)arg3 compressionResistancePriority:(double)arg4;

@end

