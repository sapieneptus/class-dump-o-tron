//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXCodeAssistantStrategy.h>

@interface PBXCodeAssistantVariablesStrategy : PBXCodeAssistantStrategy
{
    BOOL _isObjC;
    BOOL _isCPP;
    BOOL _isJava;
}

- (BOOL)getItems:(id *)arg1 withInfoString:(id)arg2;
- (void)adjustPriorities:(id)arg1;
- (id)filterJavaGlobals:(id)arg1;
- (id)initWithTextView:(id)arg1 languageSpec:(id)arg2;

@end

