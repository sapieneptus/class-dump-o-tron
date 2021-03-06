//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArticleFinderJSController;

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct OpaqueJSContext;

struct OpaqueJSValue;

struct OwnPtr<ArticleFinderJSController> {
    struct ArticleFinderJSController *_field1;
};

struct OwnPtr<ReaderPageTest> {
    struct ReaderPageTest *m_ptr;
};

struct ReaderController {
    id _field1;
    struct SString _field2;
    _Bool _field3;
    _Bool _field4;
    struct OwnPtr<ArticleFinderJSController> _field5;
    id _field6;
    struct SString _field7;
    _Bool _field8;
    id _field9;
};

struct ReaderJSController {
    CDUnknownFunctionPointerType *_field1;
    struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow> _field2;
    struct OpaqueJSValue *_field3;
    struct OpaqueJSContext *_field4;
    id _field5;
    struct ReaderController *_field6;
    struct OwnPtr<ArticleFinderJSController> _field7;
    int _field8;
    struct RetainPtr<NSDictionary> _field9;
};

struct ReaderPageTest;

struct RetainPtr<NSDictionary> {
    void *_field1;
};

struct RetainPtr<const __CFString *> {
    void *_field1;
};

struct SString {
    struct RetainPtr<const __CFString *> _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow> {
    struct OpaqueJSValue **_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    double _field6;
    int _field7;
} CDStruct_e950349b;

typedef struct {
    int source;
    unsigned long long indexInGrid;
} CDStruct_2c01de1c;

typedef struct {
    int nodes;
    int bytes;
} CDStruct_81cc75c8;

typedef struct {
    struct CGPoint offset;
    double zOffset;
    double logScale;
} CDStruct_5ca50560;

