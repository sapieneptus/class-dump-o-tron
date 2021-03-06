//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SFActivityScannerDelegate.h"

@class AdvertisableItem, CornerActionBTLEItem, LSUserActivityClientProcessesController, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString, NSUserDefaults, NSXPCListener, SFActivityAdvertiser, SFActivityScanner;

@interface CornerActionManager : NSObject <NSXPCListenerDelegate, SFActivityScannerDelegate>
{
    _Bool _suspended;
    LSUserActivityClientProcessesController *_userActivityClientsController;
    NSXPCListener *_bestAppsListener;
    NSDate *_creationTime;
    NSMutableDictionary *_advertiseableItemsByUUID;
    SFActivityAdvertiser *_advertiser;
    NSMutableDictionary *_cornerActionItemsByUUID;
    SFActivityScanner *_scanner;
    NSMutableDictionary *_otherMachineTimeDeltasToOurs;
    NSMutableSet *_activeDevicesIdentifiers;
    NSMutableSet *_bestAppChangeNotificationsSet;
    NSUserDefaults *_userDefaults;
    int _managedSettingsChangedNotificationToken;
    NSObject<OS_dispatch_group> *_helpersDispatchGroup;
    int _systemIdleActivityNotificationToken;
    double _systemIdlePreviousTimeSinceLastUserActivity;
    _Bool _idleActivityNotificationHasBeenSuspended;
    _Bool _systemHasSuspendedAdvertisements;
    _Bool _screenSaverActive;
    _Bool _deviceUILocked;
    _Bool _screenDimmed;
    _Bool _systemIsIdle;
    int _uiLockStatusToken;
    NSString *_managerIdentifier;
    AdvertisableItem *nextItemToBeAdvertised;
    AdvertisableItem *currentAdvertisedItem;
    NSDate *_screenSaverDeferredTime;
    NSDate *_lastAdvertismentTime;
    double _lastAdvertismentUserIdleTime;
    NSData *_lastAdvertisementBytes;
    NSDate *_lastTimePayloadWasRequestedForAdvertisedItem;
    CornerActionBTLEItem *_lastReceivedAdvertisementItem;
    NSMutableDictionary *_devicesAndActivityTimes;
    unsigned long long _pickAdvertisementThreadSpinCount;
    unsigned long long _changeAdvertisementThreadSpinCount;
    unsigned long long _updateSystemIdleThreadSpinCount;
    unsigned long long _checkForBestAppChangedThreadSpinCount;
    NSObject<OS_dispatch_queue> *_mainDispatchQ;
    NSMutableArray *_advertisementTimes;
    NSObject<OS_dispatch_source> *_nextPickAdvertisementSource;
    NSDate *_nextPickAdvertisementTime;
    NSObject<OS_dispatch_source> *_nextUpdateAdvertisementSource;
    NSDate *_nextUpdateAdvertisementTime;
    NSObject<OS_dispatch_source> *_nextUserIdleDeterminationSource;
    NSDate *_nextDetermineUserIdleTime;
    NSObject<OS_dispatch_source> *_nextBestApplicationNotificationSource;
    NSDate *_nextBestApplicationNotificationTime;
    NSDate *_deviceLockedDeferredTime;
    NSDate *_screenDimDeferredTime;
    NSDate *_dontAdvertiseAsCurrentUntil;
}

+ (id)sharedActivityManagerServer;
+ (id)cornerActionManager;
@property int uiLockStatusToken; // @synthesize uiLockStatusToken=_uiLockStatusToken;
@property(retain) NSDate *dontAdvertiseAsCurrentUntil; // @synthesize dontAdvertiseAsCurrentUntil=_dontAdvertiseAsCurrentUntil;
@property _Bool systemIsIdle; // @synthesize systemIsIdle=_systemIsIdle;
@property _Bool screenDimmed; // @synthesize screenDimmed=_screenDimmed;
@property(retain) NSDate *screenDimDeferredTime; // @synthesize screenDimDeferredTime=_screenDimDeferredTime;
@property _Bool deviceUILocked; // @synthesize deviceUILocked=_deviceUILocked;
@property(retain) NSDate *deviceLockedDeferredTime; // @synthesize deviceLockedDeferredTime=_deviceLockedDeferredTime;
@property _Bool screenSaverActive; // @synthesize screenSaverActive=_screenSaverActive;
@property _Bool systemHasSuspendedAdvertisements; // @synthesize systemHasSuspendedAdvertisements=_systemHasSuspendedAdvertisements;
@property(retain) NSDate *nextBestApplicationNotificationTime; // @synthesize nextBestApplicationNotificationTime=_nextBestApplicationNotificationTime;
@property(retain) NSObject<OS_dispatch_source> *nextBestApplicationNotificationSource; // @synthesize nextBestApplicationNotificationSource=_nextBestApplicationNotificationSource;
@property _Bool idleActivityNotificationHasBeenSuspended; // @synthesize idleActivityNotificationHasBeenSuspended=_idleActivityNotificationHasBeenSuspended;
@property(retain) NSDate *nextDetermineUserIdleTime; // @synthesize nextDetermineUserIdleTime=_nextDetermineUserIdleTime;
@property(retain) NSObject<OS_dispatch_source> *nextUserIdleDeterminationSource; // @synthesize nextUserIdleDeterminationSource=_nextUserIdleDeterminationSource;
@property(retain) NSDate *nextUpdateAdvertisementTime; // @synthesize nextUpdateAdvertisementTime=_nextUpdateAdvertisementTime;
@property(retain) NSObject<OS_dispatch_source> *nextUpdateAdvertisementSource; // @synthesize nextUpdateAdvertisementSource=_nextUpdateAdvertisementSource;
@property(retain) NSDate *nextPickAdvertisementTime; // @synthesize nextPickAdvertisementTime=_nextPickAdvertisementTime;
@property(retain) NSObject<OS_dispatch_source> *nextPickAdvertisementSource; // @synthesize nextPickAdvertisementSource=_nextPickAdvertisementSource;
@property(retain) NSMutableArray *advertisementTimes; // @synthesize advertisementTimes=_advertisementTimes;
@property(retain) NSObject<OS_dispatch_queue> *mainDispatchQ; // @synthesize mainDispatchQ=_mainDispatchQ;
@property unsigned long long checkForBestAppChangedThreadSpinCount; // @synthesize checkForBestAppChangedThreadSpinCount=_checkForBestAppChangedThreadSpinCount;
@property unsigned long long updateSystemIdleThreadSpinCount; // @synthesize updateSystemIdleThreadSpinCount=_updateSystemIdleThreadSpinCount;
@property unsigned long long changeAdvertisementThreadSpinCount; // @synthesize changeAdvertisementThreadSpinCount=_changeAdvertisementThreadSpinCount;
@property unsigned long long pickAdvertisementThreadSpinCount; // @synthesize pickAdvertisementThreadSpinCount=_pickAdvertisementThreadSpinCount;
@property(retain) NSMutableDictionary *devicesAndActivityTimes; // @synthesize devicesAndActivityTimes=_devicesAndActivityTimes;
@property(retain) CornerActionBTLEItem *lastReceivedAdvertisementItem; // @synthesize lastReceivedAdvertisementItem=_lastReceivedAdvertisementItem;
@property(readonly, retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy) NSDate *lastTimePayloadWasRequestedForAdvertisedItem; // @synthesize lastTimePayloadWasRequestedForAdvertisedItem=_lastTimePayloadWasRequestedForAdvertisedItem;
@property(retain) NSData *lastAdvertisementBytes; // @synthesize lastAdvertisementBytes=_lastAdvertisementBytes;
@property double lastAdvertismentUserIdleTime; // @synthesize lastAdvertismentUserIdleTime=_lastAdvertismentUserIdleTime;
@property(retain) NSDate *lastAdvertismentTime; // @synthesize lastAdvertismentTime=_lastAdvertismentTime;
@property(retain) NSDate *screenSaverDeferredTime; // @synthesize screenSaverDeferredTime=_screenSaverDeferredTime;
@property(retain) AdvertisableItem *currentAdvertisedItem; // @synthesize currentAdvertisedItem;
@property(retain) AdvertisableItem *nextItemToBeAdvertised; // @synthesize nextItemToBeAdvertised;
@property(retain) SFActivityScanner *scanner; // @synthesize scanner=_scanner;
@property(retain) SFActivityAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(readonly, retain) LSUserActivityClientProcessesController *userActivityClientsController; // @synthesize userActivityClientsController=_userActivityClientsController;
@property(readonly, copy) NSString *managerIdentifier; // @synthesize managerIdentifier=_managerIdentifier;
- (void).cxx_destruct;
- (id)statusString;
- (void)terminate;
- (void)resume;
- (void)suspend;
- (_Bool)haveBestAppChangeNotificationClients;
@property(readonly, copy) NSMutableSet *bestAppChangeNotificationsSet;
- (void)unregisterForBestAppChangeNotification:(id)arg1;
- (void)registerForBestAppChangeNotification:(id)arg1;
- (void)_checkIfBestApplicationChangedThread;
- (void)triggerBestApplicationNotification:(double)arg1;
- (void)triggerBestApplicationNotification;
- (void)checkIfBestCornerItemChanged:(double)arg1;
- (id)bestCornerItem;
- (void)removeConnector:(id)arg1;
- (void)addConnector:(id)arg1;
- (id)cornerActionItems;
- (void)receivedAdvertisement:(id)arg1;
- (void)updateCornerActionItem:(id)arg1;
- (void)removeCornerActionItem:(id)arg1;
- (id)cornerActionItemForUUID:(id)arg1;
- (id)cornerActionItemsForDeviceIdentifier:(id)arg1;
- (id)cornerBTLEActionItemForPayload:(id)arg1 forDevice:(id)arg2;
- (void)addCornerActionItem:(id)arg1;
- (void)activityAdvertiser:(id)arg1 didSendPayloadForActivityIdentifier:(id)arg2 toDeviceIdentifier:(id)arg3 error:(id)arg4;
- (void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 requestedByDeviceIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_determineWhenSystemGoesIdleThread;
- (void)triggerUserIdleDetermination:(double)arg1;
- (void)triggerUserIdleDetermination;
- (double)determineNumberOfSecondsSystemHasBeenIdle;
- (void)distributedNotificationHook:(id)arg1;
- (void)removeAdvertisement;
- (void)_updateAdvertisment;
- (void)triggerUpdateAdvertisement:(double)arg1;
- (void)triggerUpdateAdvertisement;
- (id)calculateTimeFromAdvertisementData:(id)arg1 forDevice:(id)arg2 currentUntil:(id *)arg3 validUntil:(id *)arg4;
- (void)storeTimeDeltaForDeviceFromAdvertisementPayload:(id)arg1 forDevice:(id)arg2;
- (id)calculateBytesToAdvertise:(id)arg1 isCurrent:(_Bool)arg2 idleTime:(double)arg3;
- (unsigned char)calculateTimeOffsetForTime:(id)arg1 userIsPresent:(_Bool)arg2;
- (void)_determineItemToAdvertiseThread;
- (id)_determineItemToAdvertise;
- (_Bool)weHaveAtLeastOneItemToAdvertise;
- (void)userActivityItemsChanged;
- (id)sortedAdvertisableUserActivityInfoItemsOrderedBestFirst;
- (id)activeAdvertiseableItemsUUIDs;
- (void)triggerPickingNewAdvertisedItem:(double)arg1;
- (void)triggerPickingNewAdvertisedItem;
- (void)updateAdvertiseableItem:(id)arg1;
- (void)removeAdvertiseableItem:(id)arg1;
- (void)addAdvertiseableItem:(id)arg1;
- (id)advertiseableItemForUUID:(id)arg1;
- (id)advertiseableItems;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;
- (void)lostDeviceWithDeviceIdentifier:(id)arg1;
- (void)foundDeviceWithDeviceIdentifier:(id)arg1;
@property(readonly) NSSet *activeDevicesIdentifiers;
- (long long)debugUserActivityTimeOffset;
- (long long)debugValidateSampleResponseMaximumActivityPayloadSizeInBytes;
- (long long)debugValidateSampleResponseMinimumActivityPayloadSizeInBytes;
- (double)debugValidateRetryPayloadFetchFailureInterval;
- (double)debugValidatePayloadFetchTimeInterval;
- (double)maximumAdvertisementsTimeInterval;
- (long long)maximumAdvertisementsPerTimeInterval;
- (double)minimumIntervalBetweenAdvertisements;
- (long long)activityPayloadWarningSizeInBytes;
- (long long)maximumActivityPayloadSizeInBytes;
- (double)maximumTimeoutToWaitForClientProcessToUpdateActivityInformation;
- (double)activePayloadUpdateInterval;
- (double)cornerActionItemMaximumTimeForBTLEItemToLive;
- (double)cornerActionItemAdditionalTimeToLiveAfterValidIntervalExpires;
- (double)cornerActionItemTimeout;
- (double)cornerActionItemSupressionInterval;
- (double)maximumTimeoutAfterAdvertisingEndsThatActivityCanBeResumed;
- (double)systemIdleDelayBeforeRemovingAdvertisements;
- (double)screenDimDelayBeforeRemovingAdvertisements;
- (double)screenSaverDelayToRemovingAdvertisements;
- (double)deviceLockDelayBeforeRemovingAdvertisements;
- (double)userIdleInterval;
- (_Bool)activityContinuationAllowed;
- (_Bool)activityReceivingAllowed;
- (_Bool)activityAdvertisingAllowed;
- (double)timeIntervalForKey:(id)arg1 default:(double)arg2;
- (long long)integerValueForKey:(id)arg1 default:(long long)arg2;
- (_Bool)boolValueForKey:(id)arg1 default:(_Bool)arg2;
- (id)cornerActionItemDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

