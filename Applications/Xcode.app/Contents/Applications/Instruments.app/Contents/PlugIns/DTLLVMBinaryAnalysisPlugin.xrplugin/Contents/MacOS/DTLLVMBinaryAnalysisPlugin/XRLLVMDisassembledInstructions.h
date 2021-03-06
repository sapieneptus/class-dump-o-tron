//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRDisassembledInstructionsProtocol.h"

@class NSData, NSMutableArray, XRLLVMInstruction;

@interface XRLLVMDisassembledInstructions : NSObject <XRDisassembledInstructionsProtocol>
{
    NSData *_bytes;
    BOOL _disasmComplete;
    BOOL _loopsDetected;
    void *_disasmContext;
    unsigned long long _loadAddr;
    XRLLVMInstruction *_current_inst;
    NSMutableArray *_llvmInstArray;
    int _cpuType;
    int _cpuSubType;
    unsigned long long _cpuMode;
    int _instructionSkipLength;
}

- (void).cxx_destruct;
- (BOOL)getSourceLine:(id *)arg1 atIndex:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)detectAsmCodeLoops;
- (void)performDisassembly;
- (unsigned long long)baseOffset;
- (unsigned long long)decodedCount;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)binaryData;
- (unsigned long long)cpuMode;
- (int)cpuSubType;
- (int)cpuType;
- (unsigned long long)offsetOfInstructionAtIndex:(unsigned long long)arg1;
- (const char *)symbolicateReferenceToAddress:(unsigned long long)arg1 withTypePtr:(unsigned long long *)arg2 withPC:(unsigned long long)arg3 withNamePtr:(const char **)arg4;
- (void)dealloc;
- (id)initWithBinary:(id)arg1 andAddress:(unsigned long long)arg2 forCPUType:(int)arg3 andSubtype:(int)arg4 andMode:(unsigned long long)arg5;

@end

