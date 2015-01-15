//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicTableViewController.h>

@interface MusicArtistsViewController : MusicTableViewController
{
    _Bool _allowsActions;
}

+ (id)persistentIDProperty;
+ (id)itemPersistentIDProperty;
+ (long long)groupingType;
+ (long long)containerItemType;
+ (id)actionCellConfigurationClasses;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
- (id)_viewControllerForSelectedMediaEntity:(id)arg1;
- (void)defaultsDidChange;
- (void)_appDefaultsDidChangeNotification:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (_Bool)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end
