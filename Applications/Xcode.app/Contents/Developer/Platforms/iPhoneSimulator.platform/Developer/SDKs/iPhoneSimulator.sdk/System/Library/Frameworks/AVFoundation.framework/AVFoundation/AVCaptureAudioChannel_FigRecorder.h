//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureAudioChannelInternal_FigRecorder;

@interface AVCaptureAudioChannel_FigRecorder : NSObject
{
    AVCaptureAudioChannelInternal_FigRecorder *_internal;
}

@property(readonly, nonatomic) float peakHoldLevel;
@property(readonly, nonatomic) float averagePowerLevel;
- (void)invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;

@end
