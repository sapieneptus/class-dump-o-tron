//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRDatasetExpertOp.h"

@class XRSignpostDerivePairingInfoOp, XRSignpostPointContainer;

@interface XRSignpostPairingOperation : XRDatasetExpertOp
{
    XRSignpostDerivePairingInfoOp *_pairingConfig;
    XRSignpostPointContainer *_datapoints;
    unsigned long long _runEpoch;
}

@property(nonatomic) unsigned long long runEpoch; // @synthesize runEpoch=_runEpoch;
@property(readonly) XRSignpostPointContainer *datapoints; // @synthesize datapoints=_datapoints;
- (void).cxx_destruct;
- (void)main;
@property(retain, nonatomic) XRSignpostDerivePairingInfoOp *pairingInfo;

@end
