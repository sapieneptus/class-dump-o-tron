//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UIButton;

__attribute__((visibility("hidden")))
@interface EnvironmentTableViewCell : UITableViewCell
{
    UIButton *_errorButton;
    UIActivityIndicatorView *_loadingView;
}

@property(readonly, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureFromEnvironment:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_configureEnvironmentCell;

@end

