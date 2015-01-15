//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRTimeFlag.h>

@class NSArray, NSString;

@interface XRSignalFlag : XRTimeFlag
{
    NSString *_sourceString;
    NSArray *_backtraceFrames;
    int _pid;
    unsigned long long _thrid;
    unsigned long long _timeShift;
    NSString *_procName;
}

+ (id)signalWithName:(id)arg1 summary:(id)arg2 icon:(id)arg3 timestamp:(unsigned long long)arg4 andBacktrace:(id)arg5 forPID:(int)arg6 onThread:(unsigned long long)arg7 withType:(int)arg8 sourceLocation:(const char *)arg9;
+ (id)formattedTimeFromTimestamp:(unsigned long long)arg1;
+ (void)initialize;
- (id)dataElementsForContext:(id)arg1;
- (void)setProcessName:(id)arg1;
- (id)processName;
- (unsigned long long)ThreadID;
- (int)ProcessID;
- (void)setBacktrace:(id)arg1;
- (id)backtrace;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)absoluteTimestamp;
- (unsigned long long)timestamp;
- (unsigned long long)currentTimeShift;
- (int)type;
- (void)setSourceString:(id)arg1;
- (id)sourceString;
- (void)setName:(id)arg1;
- (unsigned long long)shiftTimeBy:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 summary:(id)arg2 icon:(id)arg3 modifiable:(BOOL)arg4 global:(BOOL)arg5 timestamp:(unsigned long long)arg6 andBacktrace:(id)arg7 forPID:(int)arg8 onThread:(unsigned long long)arg9 withType:(int)arg10 sourceLocation:(const char *)arg11;

@end
