//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

#import "CBPeripheralDelegate.h"

@class CBCharacteristic, CBPeripheral, CBService, HAPAccessoryServerBrowserBTLE, NSData, NSMapTable, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer <CBPeripheralDelegate>
{
    struct PairingSessionPrivate *_pairingSession;
    _Bool _startPairingRequested;
    _Bool _pairingFeaturesRead;
    _Bool _disconnecting;
    _Bool _unpairedIdentifyRequested;
    _Bool _removeOnDisconnect;
    CBPeripheral *_peripheral;
    HAPAccessoryServerBrowserBTLE *_browser;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _state;
    id <HAPAccessoryServerBTLEDelegatePrivate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMapTable *_btleServiceToHAPServiceMap;
    unsigned long long _characteristicDiscoveryRequestCount;
    unsigned long long _availableInstanceID;
    NSMapTable *_btleCharacteristicToHAPCharacteristicMap;
    NSMapTable *_hapCharacteristicReadCompletionQueues;
    NSMapTable *_hapCharacteristicWriteCompletionQueues;
    CBService *_pairingService;
    CBCharacteristic *_pairSetupCharacteristic;
    CBCharacteristic *_pairVerifyCharacteristic;
    CBCharacteristic *_pairingFeaturesCharacteristic;
    CBCharacteristic *_pairingsCharacteristic;
    CBService *_accessoryInfoService;
    CBCharacteristic *_identifyCharacteristic;
    CBCharacteristic *_modelCharacteristic;
    CBCharacteristic *_serialNumberCharacteristic;
    CBCharacteristic *_manufacturerCharacteristic;
    NSString *_controllerUsername;
    NSString *_accessoryPairingUsername;
    CDUnknownBlockType _pairVerifyCompletionBlock;
    unsigned long long _pairingFeatureFlags;
    NSData *_sessionReadKey;
    NSMutableData *_readNonce;
    NSData *_sessionWriteKey;
    NSMutableData *_writeNonce;
    NSObject<OS_dispatch_source> *_connectionLifetimeTimer;
    CDUnknownBlockType _unpairedIdentifyCompletionBlock;
}

+ (id)_convertFromBTLEToHAPUUID:(id)arg1;
@property(nonatomic) _Bool removeOnDisconnect; // @synthesize removeOnDisconnect=_removeOnDisconnect;
@property(copy, nonatomic) CDUnknownBlockType unpairedIdentifyCompletionBlock; // @synthesize unpairedIdentifyCompletionBlock=_unpairedIdentifyCompletionBlock;
@property(nonatomic) _Bool unpairedIdentifyRequested; // @synthesize unpairedIdentifyRequested=_unpairedIdentifyRequested;
@property(nonatomic, getter=isDisconnecting) _Bool disconnecting; // @synthesize disconnecting=_disconnecting;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectionLifetimeTimer; // @synthesize connectionLifetimeTimer=_connectionLifetimeTimer;
@property(retain, nonatomic) NSMutableData *writeNonce; // @synthesize writeNonce=_writeNonce;
@property(retain, nonatomic) NSData *sessionWriteKey; // @synthesize sessionWriteKey=_sessionWriteKey;
@property(retain, nonatomic) NSMutableData *readNonce; // @synthesize readNonce=_readNonce;
@property(retain, nonatomic) NSData *sessionReadKey; // @synthesize sessionReadKey=_sessionReadKey;
@property(nonatomic) unsigned long long pairingFeatureFlags; // @synthesize pairingFeatureFlags=_pairingFeatureFlags;
@property(nonatomic) _Bool pairingFeaturesRead; // @synthesize pairingFeaturesRead=_pairingFeaturesRead;
@property(nonatomic) _Bool startPairingRequested; // @synthesize startPairingRequested=_startPairingRequested;
@property(copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
@property(retain, nonatomic) NSString *accessoryPairingUsername; // @synthesize accessoryPairingUsername=_accessoryPairingUsername;
@property(retain, nonatomic) NSString *controllerUsername; // @synthesize controllerUsername=_controllerUsername;
@property(retain, nonatomic) CBCharacteristic *manufacturerCharacteristic; // @synthesize manufacturerCharacteristic=_manufacturerCharacteristic;
@property(retain, nonatomic) CBCharacteristic *serialNumberCharacteristic; // @synthesize serialNumberCharacteristic=_serialNumberCharacteristic;
@property(retain, nonatomic) CBCharacteristic *modelCharacteristic; // @synthesize modelCharacteristic=_modelCharacteristic;
@property(retain, nonatomic) CBCharacteristic *identifyCharacteristic; // @synthesize identifyCharacteristic=_identifyCharacteristic;
@property(retain, nonatomic) CBService *accessoryInfoService; // @synthesize accessoryInfoService=_accessoryInfoService;
@property(retain, nonatomic) CBCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairingFeaturesCharacteristic; // @synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairSetupCharacteristic; // @synthesize pairSetupCharacteristic=_pairSetupCharacteristic;
@property(retain, nonatomic) CBService *pairingService; // @synthesize pairingService=_pairingService;
@property(retain, nonatomic) NSMapTable *hapCharacteristicWriteCompletionQueues; // @synthesize hapCharacteristicWriteCompletionQueues=_hapCharacteristicWriteCompletionQueues;
@property(retain, nonatomic) NSMapTable *hapCharacteristicReadCompletionQueues; // @synthesize hapCharacteristicReadCompletionQueues=_hapCharacteristicReadCompletionQueues;
@property(retain, nonatomic) NSMapTable *btleCharacteristicToHAPCharacteristicMap; // @synthesize btleCharacteristicToHAPCharacteristicMap=_btleCharacteristicToHAPCharacteristicMap;
@property(nonatomic) unsigned long long availableInstanceID; // @synthesize availableInstanceID=_availableInstanceID;
@property(nonatomic) unsigned long long characteristicDiscoveryRequestCount; // @synthesize characteristicDiscoveryRequestCount=_characteristicDiscoveryRequestCount;
@property(retain, nonatomic) NSMapTable *btleServiceToHAPServiceMap; // @synthesize btleServiceToHAPServiceMap=_btleServiceToHAPServiceMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBTLEDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HAPAccessoryServerBrowserBTLE *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void).cxx_destruct;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleConnectionLifetimeTimeout;
- (void)_cancelConnectionLifetimeTimer;
- (void)_updateConnectionLifetimeTimer;
- (int)_handlePairVerifyExchangeWithData:(id)arg1;
- (int)_pairVerifyStart;
- (int)_pairSetupTryPassword:(id)arg1;
- (int)_handlePairSetupExchangeWithData:(id)arg1;
- (int)_pairSetupStart;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_establishSecureSession;
- (_Bool)_isSessionEstablished;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (id)_pairVerifyHAPCharacteristic;
- (id)_pairSetupHAPCharacteristic;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (_Bool)_shouldEnableSessionSecurity;
- (id)_hapCharacteristicForBTLECharacteristic:(id)arg1;
- (id)_btleCharacteristicForHAPCharacteristic:(id)arg1;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)_nextInstanceID;
- (id)_parseBTLEService:(id)arg1;
- (void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2;
- (void)_handleHAPServiceDiscovery;
- (void)_getAttributeDatabase;
- (void)discoverAccessories;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1;
- (void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_readValueForCharacteristic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_convertFromBTLEValue:(id)arg1 metadata:(id)arg2;
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2;
- (id)_convertValueToTLV:(id)arg1 characteristic:(id)arg2 authorizationData:(id)arg3 error:(id *)arg4;
- (id)_convertToBTLEValue:(id)arg1 metadata:(id)arg2;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1;
- (void)_enqueueReadCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (CDUnknownBlockType)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1;
- (void)_enqueueWriteCompletionHandler:(CDUnknownBlockType)arg1 forCharacteristic:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)identifier;
- (_Bool)isPaired;
- (void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleDisconnectionWithError:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_handleSuccessfulBTLEConnection;
- (void)handleConnectionWithError:(id)arg1;
- (void)_setupBTLEConnectionToPeripheral;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (_Bool)_checkPairedState;
- (_Bool)stopPairingWithError:(id *)arg1;
- (void)_handlePairingStateMachine;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)_checkForAuthPrompt;
- (void)continuePairingAfterAuthPrompt;
- (void)startPairing;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (long long)linkType;
- (id)briefDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_resetState;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 browser:(id)arg4 keyStore:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

