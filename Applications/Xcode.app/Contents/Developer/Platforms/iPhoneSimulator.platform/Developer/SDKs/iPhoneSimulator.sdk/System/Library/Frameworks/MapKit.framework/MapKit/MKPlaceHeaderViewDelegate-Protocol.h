//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKPlaceHeaderView;

@protocol MKPlaceHeaderViewDelegate <NSObject>

@optional
- (void)headerViewWasSingleClicked:(MKPlaceHeaderView *)arg1;
- (void)headerViewWasDoubleClicked:(MKPlaceHeaderView *)arg1;
- (_Bool)headerViewshouldShowTitleSubtitleAndStarRatings:(MKPlaceHeaderView *)arg1;
- (void)headerView:(MKPlaceHeaderView *)arg1 didFinishLoadingBackgroundViewOfType:(long long)arg2;
@end

