//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController
{
    QLPreviewControllerReserved *_reserved;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)copyPreviewItemToPasteboard:(id)arg1;
+ (id)titleForPreviewItem:(id)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(_Bool)arg4;
+ (_Bool)canPreviewMIMEType:(id)arg1;
+ (_Bool)canPreviewItem:(id)arg1;
+ (_Bool)canPreviewDocumentType:(id)arg1;
+ (_Bool)_shouldPassThroughDocumentType:(id)arg1;
+ (id)_passThroughDocumentTypes;
+ (id)contentTypeForPreviewItem:(id)arg1;
- (void)_showGenericDisplayBundle;
- (id)printInfoForDocumentInteractionController:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)_pdfPreviewDataAtURL:(id)arg1;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (_Bool)_canPrint;
- (void)prepareForPrinting;
- (_Bool)canPrint;
- (void)navigationGoBackAction:(id)arg1;
- (void)playButtonAction:(id)arg1;
- (void)showArchiveContent:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)showArchiveContentAnimated:(_Bool)arg1;
- (void)arrowsAction:(id)arg1;
- (void)rightArrowAction:(id)arg1;
- (void)leftArrowAction:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)customActionButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_unloadInternalViews;
- (void)_loadInternalViews;
- (void)_configurePreviewContentController;
- (struct CGRect)_contentFrameForRemoteView;
- (_Bool)_addPreviewContentController;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_setupWithMode:(int)arg1 parentViewController:(id)arg2;
- (void)_requestRemoteViewControllerIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupPreferredModeWithParentViewController:(id)arg1;
- (int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 traitCollection:(id)arg3;
- (int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_removeChildPreviewContentControllerIfNeeded;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (void)showContentsWasTappedInPreviewContentController:(id)arg1;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(long long)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(long long)arg3;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(long long)arg2;
- (void)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (long long)currentSourceUUIDForPreviewContentController:(id)arg1;
- (id)_documentProxyForPreviewItem:(id)arg1;
- (id)previewItemAtIndex:(long long)arg1;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)_prepareDelayedAppearance;
@property long long currentPreviewItemIndex;
- (void)_showContentsIfPossibleAnimated:(_Bool)arg1;
- (void)_setCurrentPreviewItemIndex:(long long)arg1 fromClient:(_Bool)arg2 showContentsIfPossible:(_Bool)arg3;
- (void)setSourceIsManaged:(_Bool)arg1;
- (_Bool)sourceIsManaged;
@property(readonly) id <QLPreviewItem> currentPreviewItem;
- (long long)numberOfPreviewItems;
@property id <QLPreviewControllerDataSource> dataSource;
- (id)previewContentController;
- (id)itemsSource;
- (id)passThroughViewsForIndexSheet;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (int)mode;
- (void)_runDeferredAnimationBlock;
- (void)animateWhenReadyWithBlock:(CDUnknownBlockType)arg1;
- (void)setTransitioning:(_Bool)arg1 synchronizedWithBlock:(CDUnknownBlockType)arg2;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (_Bool)showActionAsDefaultButton;
- (void)setShowActionAsDefaultButton:(_Bool)arg1;
- (_Bool)useCustomActionButton;
- (void)setUseCustomActionButton:(_Bool)arg1;
- (_Bool)blockRemoteImages;
- (void)setBlockRemoteImages:(_Bool)arg1;
@property id <QLPreviewControllerDelegate> delegate;
- (id)_currentInteractionController;
- (id)_displayedInteractionController;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(_Bool)arg4;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (_Bool)_updateAVState;
- (void)_contentWasTapped;
- (void)_setControlsOverlayVisible:(_Bool)arg1 withStatusBar:(_Bool)arg2 duration:(double)arg3;
- (void)_hideOverlayWithStatusBar:(_Bool)arg1 duration:(double)arg2;
- (void)_showOverlayWithStatusBar:(_Bool)arg1 duration:(double)arg2;
- (id)_currentNavigationController;
- (_Bool)_overlayVisible;
- (void)wirelessRoutesDidChange:(id)arg1;
- (void)_updateNavigationBarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(_Bool)arg3;
- (void)_updateNavigationBarAnimated:(_Bool)arg1;
- (_Bool)_updateActionItem;
- (void)_updateToolbarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(_Bool)arg3;
- (void)_updateToolbarAnimated:(_Bool)arg1;
- (id)_listDescriptionStringWithTitle:(id)arg1;
- (id)_updatedArchiveButton;
- (void)_refreshArchiveItem;
- (void)_refreshListItem;
- (void)_refreshListOrArchiveItem;
- (id)_indexFormatter;
- (void)_updateToolbarVisibilityAnimated:(_Bool)arg1;
- (void)_updateToolbarVisibilityWithTraitCollection:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_needsToolbar;
- (_Bool)_needsToolbarForTraitCollection:(id)arg1;
- (_Bool)_needsAVControls;
- (void)_createControls;
- (void)_updateRouteImages;
- (id)imageWithImage:(id)arg1 drawnOnTopOf:(id)arg2 stretchedToSize:(struct CGSize)arg3 scale:(double)arg4;
- (id)_fixedSpaceItemWithWidth:(double)arg1;
- (id)_flexibleSpaceItem;

@end

