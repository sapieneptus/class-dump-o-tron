//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEDebugNavigableModel.h"

@class DBGCodeModule, DBGDataValue, DBGDisassemblyInstructionList, DBGThread, DVTObservingToken, DVTStackBacktrace, IDELaunchSession, NSArray, NSNumber, NSString, NSURL;

@interface DBGStackFrame : NSObject <IDEDebugNavigableModel, DVTInvalidation>
{
    DVTObservingToken *_debugSessionStateObserver;
    BOOL _hasSymbols;
    BOOL _returnValueIsValid;
    BOOL _recorded;
    BOOL _settingDisassembly;
    NSString *_displayName;
    NSString *_filePath;
    DBGDataValue *_returnValue;
    DBGThread *_parentThread;
    NSString *_name;
    NSURL *_fileURL;
    NSNumber *_lineNumber;
    NSString *_instructionPointerAddressString;
    NSNumber *_frameNumber;
    NSNumber *_framePointer;
    DBGCodeModule *_module;
    NSArray *_locals;
    NSArray *_arguments;
    NSArray *_fileStatics;
    NSArray *_registers;
    DBGDisassemblyInstructionList *_disassembly;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)stackFrameForDisassemblyURL:(id)arg1;
+ (id)disassemblyURLForStackFrame:(id)arg1 inDebugSession:(id)arg2;
+ (id)compressedStackFrames:(id)arg1 usingCompressionValue:(long long)arg2;
+ (void)initialize;
@property(nonatomic) BOOL settingDisassembly; // @synthesize settingDisassembly=_settingDisassembly;
@property(retain, nonatomic) DBGDisassemblyInstructionList *disassembly; // @synthesize disassembly=_disassembly;
@property(nonatomic, getter=isRecorded) BOOL recorded; // @synthesize recorded=_recorded;
@property(nonatomic) BOOL returnValueIsValid; // @synthesize returnValueIsValid=_returnValueIsValid;
@property(readonly, nonatomic) NSArray *registers; // @synthesize registers=_registers;
@property(readonly, nonatomic) NSArray *fileStatics; // @synthesize fileStatics=_fileStatics;
@property(readonly, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) NSArray *locals; // @synthesize locals=_locals;
@property(retain, nonatomic) DBGCodeModule *module; // @synthesize module=_module;
@property(copy, nonatomic) NSNumber *framePointer; // @synthesize framePointer=_framePointer;
@property(copy, nonatomic) NSNumber *frameNumber; // @synthesize frameNumber=_frameNumber;
@property(copy, nonatomic) NSString *instructionPointerAddressString; // @synthesize instructionPointerAddressString=_instructionPointerAddressString;
@property(copy, nonatomic) NSNumber *lineNumber; // @synthesize lineNumber=_lineNumber;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) BOOL hasSymbols; // @synthesize hasSymbols=_hasSymbols;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) DBGThread *parentThread; // @synthesize parentThread=_parentThread;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)evaluateExpression:(id)arg1 options:(id)arg2 withResultBlock:(CDUnknownBlockType)arg3;
- (void)evaluateExpression:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (void)requestDataValueForSymbol:(id)arg1 symbolKind:(id)arg2 atLocation:(id)arg3 onQueue:(id)arg4 withResultBlock:(CDUnknownBlockType)arg5;
- (id)dataValuesToInvalidate;
- (void)primitiveSetReturnValueIsValid:(BOOL)arg1;
- (void)primitiveSetReturnValue:(id)arg1;
@property(retain, nonatomic) DBGDataValue *returnValue; // @synthesize returnValue=_returnValue;
- (void)primitiveSetInstructionPointerAddressString:(id)arg1;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (id)initWithParentThread:(id)arg1 frameNumber:(id)arg2 framePointer:(id)arg3 name:(id)arg4;
- (BOOL)hasSameDisassemblyURL:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

