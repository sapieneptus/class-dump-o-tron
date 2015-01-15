//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABLabeledCell.h>

@class UILabel;

@interface ABLinkedCardsCell : ABLabeledCell
{
    id <ABPropertyCellDelegate> _delegate;
    UILabel *_sourceLabel;
    UILabel *_nameLabel;
}

+ (_Bool)wantsChevron;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
- (id)valueView;
- (id)labelView;
- (void)dealloc;

@end
