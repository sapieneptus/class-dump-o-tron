//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class HFController;

@interface HFRepresenter : NSObject <NSCoding>
{
    id view;
    HFController *controller;
    struct CGPoint layoutPosition;
}

+ (struct CGPoint)defaultLayoutPosition;
- (struct CGPoint)layoutPosition;
- (void)setLayoutPosition:(struct CGPoint)arg1;
- (void)representerChangedProperties:(unsigned long long)arg1;
- (void)selectAll:(id)arg1;
- (double)maximumAvailableLinesForViewHeight:(double)arg1;
- (double)minimumViewWidthForBytesPerLine:(unsigned long long)arg1;
- (unsigned long long)maximumBytesPerLineForViewWidth:(double)arg1;
- (unsigned long long)bytesPerColumn;
- (unsigned long long)bytesPerLine;
- (void)controllerDidChange:(unsigned long long)arg1;
- (void)_setController:(id)arg1;
- (id)controller;
- (id)createView;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initializeView;
- (id)view;

@end
