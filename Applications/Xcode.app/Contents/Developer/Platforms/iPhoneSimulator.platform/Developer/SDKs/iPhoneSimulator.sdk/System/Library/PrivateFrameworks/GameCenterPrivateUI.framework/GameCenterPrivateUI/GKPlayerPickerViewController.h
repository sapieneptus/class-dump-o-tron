//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewController.h>

@class GKGame, GKSearchBarView, NSArray;

@interface GKPlayerPickerViewController : GKCollectionViewController
{
    _Bool _supportsNearby;
    long long _maxSelectable;
    GKGame *_game;
    id <GKNearbyBrowserDelegate> _nearbyDelegate;
    GKSearchBarView *_searchBar;
    CDUnknownBlockType _handler;
    NSArray *_preselectedPlayers;
}

+ (id)challengesPickerWithChallenge:(id)arg1 selectedPlayers:(id)arg2;
+ (id)multiplayerPickerForGame:(id)arg1 hiddenPlayers:(id)arg2;
@property(retain, nonatomic) NSArray *preselectedPlayers; // @synthesize preselectedPlayers=_preselectedPlayers;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) GKSearchBarView *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) id <GKNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(nonatomic) _Bool supportsNearby; // @synthesize supportsNearby=_supportsNearby;
@property(nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cancel;
- (void)done;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)updateMetrics;
- (void)traitCollectionDidChange:(id)arg1;
- (void)configureSearchBar:(id)arg1;
- (void)configureSectionHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureViewFactories;
- (void)viewDidLoad;
- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;
- (id)splitingDataSource;
- (void)dealloc;
- (id)initWithGame:(id)arg1 selectedPlayers:(id)arg2;

@end

