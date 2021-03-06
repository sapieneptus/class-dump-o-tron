//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MapsDebugViewController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AuxiliaryDebugViewController : UITableViewController <MapsDebugViewController>
{
    id <MapsDebugViewControllerDelegate> _delegate;
    id <MapsDebugViewControllerNavigationDelegate> _navigationDelegate;
}

+ (id)navigationDestinationTitle;
@property(nonatomic) __weak id <MapsDebugViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <MapsDebugViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_done;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willNavigateToSubsequentController:(id)arg1;
- (void)segueToViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

