//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDocumentPickerCell.h>

@class NSLayoutConstraint, NSString, UIImageView, _UIDocumentPickerContainerItem, _UIDocumentPickerURLContainerModel;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerCell : _UIDocumentPickerCell
{
    _UIDocumentPickerContainerItem *_item;
    NSString *_containerDisplayName;
    _UIDocumentPickerURLContainerModel *_model;
    UIImageView *_containerIconView;
    id _observerToken;
    NSLayoutConstraint *_containerIconWidthConstraint;
    NSLayoutConstraint *_containerIconHeightConstraint;
    NSLayoutConstraint *_containerIconBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *containerIconBottomConstraint; // @synthesize containerIconBottomConstraint=_containerIconBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerIconHeightConstraint; // @synthesize containerIconHeightConstraint=_containerIconHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerIconWidthConstraint; // @synthesize containerIconWidthConstraint=_containerIconWidthConstraint;
@property(retain, nonatomic) id observerToken; // @synthesize observerToken=_observerToken;
@property(retain, nonatomic) UIImageView *containerIconView; // @synthesize containerIconView=_containerIconView;
@property(retain, nonatomic) _UIDocumentPickerURLContainerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *containerDisplayName; // @synthesize containerDisplayName=_containerDisplayName;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
- (void)_showPickableDiagnostic;
- (id)viewControllerForDisplay;
- (void)updateSubtitle;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)reloadItem:(_Bool)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
