//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAEAGLLayer.h"

@class CADisplayLink, NSObject<TSDGLLayerDelegate>;

__attribute__((visibility("hidden")))
@interface TSDGLLayer : CAEAGLLayer
{
    NSObject<TSDGLLayerDelegate> *mDelegate;
    id <TSDGLLayerContext> mContext;
    CADisplayLink *mDisplayLink;
}

@property(nonatomic) NSObject<TSDGLLayerDelegate> *delegate; // @synthesize delegate=mDelegate;
- (void)displayAtCurrentLayerTime;
- (void)unlock;
- (void)lock;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setCurrentContext;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isOpaque:(_Bool)arg2 delegate:(id)arg3;

@end
