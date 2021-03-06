//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioPCMBuffer : AVAudioBuffer
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) short **int16ChannelData;
@property(readonly, nonatomic) int **int32ChannelData;
@property(readonly, nonatomic) float **floatChannelData;
- (void)_initChannelPtrs;
@property(readonly, nonatomic) unsigned long long stride;
@property(nonatomic) unsigned int frameLength;
@property(readonly, nonatomic) unsigned int frameCapacity;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;

@end

