//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKCollectionViewCell.h"

@class GKChallenge, GKContiguousContainerView, GKPlayerPhotoView, NSLayoutConstraint, UILabel;

@interface GKChallengeCell : GKCollectionViewCell
{
    _Bool _padLeftMargin;
    GKPlayerPhotoView *_iconView;
    UILabel *_titleLabel;
    UILabel *_goalLabel;
    GKContiguousContainerView *_textContainerView;
    NSLayoutConstraint *_iconLeftConstraint;
    NSLayoutConstraint *_textLeftConstraint;
}

+ (id)itemHeightList;
+ (double)defaultRowHeight;
@property(retain, nonatomic) NSLayoutConstraint *textLeftConstraint; // @synthesize textLeftConstraint=_textLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconLeftConstraint; // @synthesize iconLeftConstraint=_iconLeftConstraint;
@property(retain, nonatomic) GKContiguousContainerView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) UILabel *goalLabel; // @synthesize goalLabel=_goalLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GKPlayerPhotoView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool padLeftMargin; // @synthesize padLeftMargin=_padLeftMargin;
- (_Bool)canRemoveItem;
- (void)didUpdateModel;
- (void)setRepresentedItem:(id)arg1;
@property(retain, nonatomic) GKChallenge *challenge;
- (void)prepareForReuse;
- (struct CGRect)alignmentRectForText;
- (void)establishConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

