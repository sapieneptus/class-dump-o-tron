//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCBTAJobManager, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface MCProfileServiceServer : NSObject
{
    _Bool _memberQueueNeedToRecomputeNagMetadata;
    _Bool _memberQueueHasMigrated;
    _Bool _memberQueueHasActivationRecordChangesPending;
    int _mobileKeybagLockStateChangeNotificationToken;
    NSObject<OS_dispatch_queue> *_checkInQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_group> *_workerGroup;
    MCBTAJobManager *_workerQueueBTAJobManager;
    NSObject<OS_dispatch_queue> *_memberQueue;
    double _memberQueueIdleTimeInterval;
    id _powerAssertionAssertedNotificationToken;
    id _powerAssertionDeassertedNotificationToken;
}

+ (id)sharedServer;
@property(nonatomic) int mobileKeybagLockStateChangeNotificationToken; // @synthesize mobileKeybagLockStateChangeNotificationToken=_mobileKeybagLockStateChangeNotificationToken;
@property(retain, nonatomic) id powerAssertionDeassertedNotificationToken; // @synthesize powerAssertionDeassertedNotificationToken=_powerAssertionDeassertedNotificationToken;
@property(retain, nonatomic) id powerAssertionAssertedNotificationToken; // @synthesize powerAssertionAssertedNotificationToken=_powerAssertionAssertedNotificationToken;
@property(nonatomic) _Bool memberQueueHasActivationRecordChangesPending; // @synthesize memberQueueHasActivationRecordChangesPending=_memberQueueHasActivationRecordChangesPending;
@property(nonatomic) _Bool memberQueueHasMigrated; // @synthesize memberQueueHasMigrated=_memberQueueHasMigrated;
@property(nonatomic) _Bool memberQueueNeedToRecomputeNagMetadata; // @synthesize memberQueueNeedToRecomputeNagMetadata=_memberQueueNeedToRecomputeNagMetadata;
@property(nonatomic) double memberQueueIdleTimeInterval; // @synthesize memberQueueIdleTimeInterval=_memberQueueIdleTimeInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) MCBTAJobManager *workerQueueBTAJobManager; // @synthesize workerQueueBTAJobManager=_workerQueueBTAJobManager;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *workerGroup; // @synthesize workerGroup=_workerGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkInQueue; // @synthesize checkInQueue=_checkInQueue;
- (void).cxx_destruct;
- (void)unstashWhitelistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stashWhitelistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unstashBlacklistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stashBlacklistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unstashUserBookmarksFromLabel:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stashUserBookmarks:(id)arg1 withLabel:(id)arg2 senderPID:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setUserBookmarks:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)bookmarkDictsFromBookmarks:(id)arg1;
- (id)bookmarksFromBookmarkDicts:(id)arg1;
- (void)setURLsFromUserBookmarkDictsAsSettings:(id)arg1;
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)storeCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetAllSettingsToDefaultsWithCompletion:(CDUnknownBlockType)arg1;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeExpiredProfiles;
- (void)workerQueueRemoveExpiredProfiles;
- (void)managedAppIDsWithFlags:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProvisioningProfileWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_badProvisioningProfileError;
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyProvisioningProfilesChanged;
- (void)notifyGracePeriodChanged;
- (void)notifyFirstUnlock;
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;
- (void)workerQueueNotifyDeviceUnlocked;
- (void)workerQueueReadBiometricState;
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_workerQueueCheckCarrierProfileForceReinstallation:(_Bool)arg1;
- (void)_workerQueueRemoveAllCarrierProfiles;
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeValueSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeBoolSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 senderPID:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addBookmark:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAllowedURLString:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAllowedURLStrings:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 messageSendingAppBundleID:(id)arg2 hostAppBundleID:(id)arg3 accountIsManaged:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)mayShareToMessagesForAuditToken:(CDStruct_6ad76789)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)mayOpenFromManagedToUnmanaged;
- (_Bool)mayOpenFromUnmanagedToManaged;
- (_Bool)isOpenInRestrictionInEffect;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateProfileIdentifier:(id)arg1 interactionClient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installProfileData:(id)arg1 interactionClient:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendEffectiveSettingsChangedNotification;
- (void)_sendRestrictionChangedNotification;
- (void)workerQueueCheckForAutoInstallProfiles;
- (void)workerQueueRecomputeNagMessage;
- (void)workerQueueDidRecomputeNagMessageWithResult:(_Bool)arg1;
- (void)_workerQueuePrepareForService;
- (void)start;
- (id)init;

@end

