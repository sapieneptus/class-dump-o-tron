//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AddressBookAddress, NSString, PlacePresentationController, SearchResult;

@protocol PlacePresentationControllerDelegate <NSObject>
- (void)presentationController:(PlacePresentationController *)arg1 oldSearchResult:(SearchResult *)arg2 becameNewSearchResult:(SearchResult *)arg3;
- (void)presentationController:(PlacePresentationController *)arg1 didSelectDisplayedAddressForSearchResult:(SearchResult *)arg2;
- (_Bool)presentationController:(PlacePresentationController *)arg1 shouldShowReroutingForSearchResult:(SearchResult *)arg2;
- (_Bool)presentationController:(PlacePresentationController *)arg1 shouldShowReportAProblemForSearchResult:(SearchResult *)arg2;
- (_Bool)presentationController:(PlacePresentationController *)arg1 shouldShowDirectionsForSearchResult:(SearchResult *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 searchForAddress:(AddressBookAddress *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 completedActivityOfType:(NSString *)arg2 forSearchResult:(SearchResult *)arg3;
- (void)presentationController:(PlacePresentationController *)arg1 wasDismissedForSearchResult:(SearchResult *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 addBookmarkForSearchResult:(SearchResult *)arg2 title:(NSString *)arg3;
- (void)presentationController:(PlacePresentationController *)arg1 removeCustomSearchResult:(SearchResult *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 rerouteFromSearchResult:(SearchResult *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 showFlyoverTourForSearchResult:(SearchResult *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 showDirectionsFromSearchResult:(SearchResult *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 showDirctionsToSearchResult:(SearchResult *)arg2;
- (void)presentationController:(PlacePresentationController *)arg1 handleReportAProblemWithSearchResult:(SearchResult *)arg2;
@end

