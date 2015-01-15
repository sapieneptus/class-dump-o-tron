//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface RAPPhotoTableViewCell : UITableViewCell
{
    long long _appearance;
    UIButton *_addAPhotoButton;
    UIImageView *_cameraGlyphImageView;
    UIImageView *_imageView;
    UIImage *_photo;
}

+ (double)preferredHeightForAppearance:(long long)arg1 photo:(id)arg2;
@property(retain, nonatomic) UIImage *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (id)initWithAppearance:(long long)arg1 reuseIdentifier:(id)arg2;

@end
