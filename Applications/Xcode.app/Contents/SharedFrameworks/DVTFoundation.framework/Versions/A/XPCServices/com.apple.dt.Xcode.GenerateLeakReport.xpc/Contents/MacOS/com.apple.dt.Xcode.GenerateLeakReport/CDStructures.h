//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DVTWeakCallBack;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct DVTSlice {
    void **items;
    char wantsStrong;
    char wantsWeak;
    char wantsARC;
    char shouldCopyIn;
    char usesStrong;
    char usesWeak;
    char usesARC;
    char usesSentinel;
    char pointerPersonality;
    char integerPersonality;
    char simpleReadClear;
    DVTWeakCallBack *callback;
    CDUnknownFunctionPointerType sizeFunction;
    CDUnknownFunctionPointerType hashFunction;
    CDUnknownFunctionPointerType isEqualFunction;
    CDUnknownFunctionPointerType describeFunction;
    CDUnknownFunctionPointerType acquireFunction;
    CDUnknownFunctionPointerType relinquishFunction;
    CDUnknownFunctionPointerType allocateFunction;
    CDUnknownFunctionPointerType freeFunction;
    CDUnknownFunctionPointerType readAt;
    CDUnknownFunctionPointerType clearAt;
    CDUnknownFunctionPointerType storeAt;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1;
    unsigned int :60;
    unsigned int :4;
    id _field2;
} CDStruct_599faf0f;

typedef struct {
    unsigned long long _field1;
    int _field2;
    unsigned long long _field3;
} CDStruct_df82e459;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned short updateComponent;
        unsigned short minorComponent;
        unsigned int majorComponent;
    } independent;
    unsigned long long combined;
} CDUnion_7de6e739;
