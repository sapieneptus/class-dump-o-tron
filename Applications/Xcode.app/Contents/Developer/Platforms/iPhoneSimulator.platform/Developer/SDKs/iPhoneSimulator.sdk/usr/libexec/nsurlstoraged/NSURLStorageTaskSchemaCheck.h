//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLStorageTask.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSURLStorageTaskSchemaCheck : NSURLStorageTask
{
    NSString *_dbPath;
    long long _dbSize;
    int _pid;
    long long _sandboxExtensionHandle;
}

- (void).cxx_destruct;
- (void)run;
- (void)dealloc;
- (id)initWithPath:(id)arg1 size:(long long)arg2 clientPID:(int)arg3 sandboxExtension:(id)arg4;
- (id)initWithTaskManager:(id)arg1 path:(id)arg2 size:(long long)arg3;

@end
