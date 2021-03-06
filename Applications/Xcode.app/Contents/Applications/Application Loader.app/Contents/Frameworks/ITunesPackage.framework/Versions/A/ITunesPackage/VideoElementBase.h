//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractCopyrightableElement.h>

@class NSArray, NSNumber, NSString, VideoChapterContainerElement, VideoPreviewElement, VideoRatingContainerElement;

@interface VideoElementBase : AbstractCopyrightableElement
{
    NSString *_type;
    NSString *_subtype;
    NSString *_containerId;
    NSString *_containerPosition;
    NSString *_isan;
    NSString *_episodeProductionNumber;
    NSString *_upc;
    NSString *_amgVideoId;
    NSString *_country;
    NSString *_originalSpokenLocale;
    NSString *_title;
    NSString *_shortDescription;
    NSString *_longDescription;
    NSString *_networkName;
    NSString *_synopsis;
    NSArray *_locales;
    NSString *_productionCompany;
    NSString *_theatricalReleaseDate;
    NSArray *_regions;
    NSNumber *_volume;
    NSString *_explicitContent;
    NSString *_isrc;
    NSString *_releaseDate;
    NSNumber *_trackNumber;
    VideoRatingContainerElement *_ratingsContainer;
    NSArray *_cast;
    NSArray *_crew;
    VideoChapterContainerElement *_chapterContainer;
    NSArray *_assets;
    VideoPreviewElement *_preview;
    NSArray *_products;
    NSArray *_cueSheet;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *cueSheet;
@property(retain, nonatomic) NSArray *products;
@property(retain, nonatomic) VideoPreviewElement *preview;
@property(retain, nonatomic) NSArray *assets;
@property(retain, nonatomic) VideoChapterContainerElement *chapterContainer;
@property(retain, nonatomic) NSArray *crew;
@property(retain, nonatomic) NSArray *cast;
@property(retain, nonatomic) VideoRatingContainerElement *ratingsContainer;
@property(retain, nonatomic) NSNumber *trackNumber;
@property(retain, nonatomic) NSString *releaseDate;
@property(retain, nonatomic) NSString *isrc;
@property(retain, nonatomic) NSString *explicitContent;
@property(retain, nonatomic) NSNumber *volume;
@property(retain, nonatomic) NSArray *regions;
@property(retain, nonatomic) NSString *theatricalReleaseDate;
@property(retain, nonatomic) NSString *productionCompany;
@property(retain, nonatomic) NSArray *locales;
@property(retain, nonatomic) NSString *synopsis;
@property(retain, nonatomic) NSString *networkName;
@property(retain, nonatomic) NSString *longDescription;
@property(retain, nonatomic) NSString *shortDescription;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *originalSpokenLocale;
@property(retain, nonatomic) NSString *country;
@property(retain, nonatomic) NSString *amgVideoId;
@property(retain, nonatomic) NSString *upc;
@property(retain, nonatomic) NSString *episodeProductionNumber;
@property(retain, nonatomic) NSString *isan;
@property(retain, nonatomic) NSString *containerPosition;
@property(retain, nonatomic) NSString *containerId;
@property(retain, nonatomic) NSString *subtype;
@property(retain, nonatomic) NSString *type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

