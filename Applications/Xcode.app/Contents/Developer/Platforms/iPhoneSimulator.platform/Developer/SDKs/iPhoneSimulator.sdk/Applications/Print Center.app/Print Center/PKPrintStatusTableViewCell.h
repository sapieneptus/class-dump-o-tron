//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UILabel;

@interface PKPrintStatusTableViewCell : UITableViewCell
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_titleLabel;
    UILabel *_hostLabel;
}

@property(retain, nonatomic) UILabel *hostLabel; // @synthesize hostLabel=_hostLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) _Bool showActive;
- (id)initWithReuseIdentifier:(id)arg1;

@end

