//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MNSimpleSignView, RouteStepLabelListView, UIImageView;

__attribute__((visibility("hidden")))
@interface DirectionsTableViewCell : UITableViewCell
{
    MNSimpleSignView *_signView;
    RouteStepLabelListView *_labelListView;
    UIImageView *_iconView;
    _Bool _alignLeftIfNoManeuverSign;
    _Bool _isDimmedStep;
    _Bool _isNightMode;
}

+ (double)heightForWidth:(double)arg1 route:(id)arg2 step:(id)arg3;
+ (Class)_labelListViewClassForRoute:(id)arg1 step:(id)arg2;
+ (double)_textWidthForWidth:(double)arg1 withManeuver:(_Bool)arg2;
+ (id)reuseIdentifier;
+ (id)currentStepColor;
@property(nonatomic) _Bool isNightMode; // @synthesize isNightMode=_isNightMode;
- (void).cxx_destruct;
- (void)_updateStyleValuesFromTheme;
- (void)setIsDimmedStep:(_Bool)arg1;
- (void)setRoute:(id)arg1 step:(id)arg2 stepIndex:(unsigned long long)arg3 currentStep:(_Bool)arg4 alignToLeftEdgeIfNoManeuverSign:(_Bool)arg5 shieldText:(id)arg6 shieldArtwork:(id)arg7;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

