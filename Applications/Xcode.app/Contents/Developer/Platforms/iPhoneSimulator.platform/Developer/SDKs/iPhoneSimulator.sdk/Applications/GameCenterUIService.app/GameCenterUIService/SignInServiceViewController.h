//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKServiceViewController.h"

#import "GKRemoteSignInViewControllerDelegate.h"

@class GKBubbleFlowAnimator, GKGame, NSMutableArray, NSString;

@interface SignInServiceViewController : GKServiceViewController <GKRemoteSignInViewControllerDelegate>
{
    GKBubbleFlowAnimator *_animator;
    long long _mode;
    NSMutableArray *_inflightViewControllers;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(retain, nonatomic) NSMutableArray *inflightViewControllers; // @synthesize inflightViewControllers=_inflightViewControllers;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) GKBubbleFlowAnimator *animator; // @synthesize animator=_animator;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (void)presentInitialViewController:(id)arg1;
- (void)constructPrivateViewController;
- (void)setIntialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

