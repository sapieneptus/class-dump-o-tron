//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicTableViewCellContentView.h>

#import "SKUIItemOfferButtonDelegate.h"

@class NSString, SKUIItemOfferButton, UILabel;

@interface MusicDownloadAllTableViewCellContentView : MusicTableViewCellContentView <SKUIItemOfferButtonDelegate>
{
    SKUIItemOfferButton *_itemOfferButton;
    UILabel *_titleLabel;
    _Bool _downloadAllCellForArtist;
    long long _downloadableSongCount;
}

@property(nonatomic, getter=isDownloadAllCellForArtist) _Bool downloadAllCellForArtist; // @synthesize downloadAllCellForArtist=_downloadAllCellForArtist;
@property(nonatomic) long long downloadableSongCount; // @synthesize downloadableSongCount=_downloadableSongCount;
- (void).cxx_destruct;
- (void)_updateDownloadStateViews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1 withEvent:(id)arg2;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
