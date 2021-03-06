//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKPaymentAuthorizationControllerDelegate.h"
#import "PKPaymentAuthorizationControllerPrivateDelegate.h"

@class NSString, PKPaymentAuthorizationController;

@interface PKPaymentAuthorizationViewController : UIViewController <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>
{
    id <PKPaymentAuthorizationViewControllerDelegate> _delegate;
    id <PKPaymentAuthorizationViewControllerPrivateDelegate> _privateDelegate;
    PKPaymentAuthorizationController *_paymentController;
}

+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1;
+ (_Bool)canMakePayments;
@property(retain, nonatomic) PKPaymentAuthorizationController *paymentController; // @synthesize paymentController=_paymentController;
@property(nonatomic) id <PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) id <PKPaymentAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingAddress:(void *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationController:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeDeactivationReason:(id)arg1;
- (void)_addDeactivationReason:(id)arg1;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)modalPresentationStyle;
- (void)dealloc;
- (id)initWithPaymentRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

