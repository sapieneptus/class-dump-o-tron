//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface GLKTexture : NSObject
{
    NSData *imageData;
    struct CGImageBlockSet *_blockSet;
    struct __CFData *_cfData;
    unsigned int _width;
    unsigned int _height;
    unsigned int orientation;
    unsigned int numMipMapLevels;
    unsigned int bitsPerPixel;
    unsigned int _rowBytes;
    unsigned int nComponents;
    unsigned int nPrimarySurfaces;
    unsigned int nSurfaces;
    int loadMode;
    int texelFormat;
    int _dataCategory;
    unsigned int _index;
    unsigned int GLTextureName;
    unsigned int bindTarget;
    unsigned int textureTarget;
    unsigned int internalFormat;
    unsigned int format;
    unsigned int type;
    int _unpackAlignment;
    _Bool _requestIssuedForAlphaPremultiplication;
    _Bool _requestIssuedForMipmapGeneration;
    _Bool _requestIssuedToReorientToGL;
    _Bool _requestIssuedToInterpretGrayAsAlpha;
    _Bool _requestIssuedForSRGB;
    _Bool _hasPremultipliedAlpha;
    _Bool isPowerOfTwo;
    _Bool _isCubeMap;
    _Bool isMipmapped;
    _Bool isVerticalFlipped;
    _Bool hasAlpha;
    _Bool reOrient;
    unsigned int _primarySurfaceLength;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool reOrient; // @synthesize reOrient;
@property(nonatomic) _Bool hasAlpha; // @synthesize hasAlpha;
@property(nonatomic) _Bool isVerticalFlipped; // @synthesize isVerticalFlipped;
@property(nonatomic) _Bool isMipmapped; // @synthesize isMipmapped;
@property(nonatomic) _Bool isCubeMap; // @synthesize isCubeMap=_isCubeMap;
@property(nonatomic) _Bool isPowerOfTwo; // @synthesize isPowerOfTwo;
@property(readonly) _Bool hasPremultipliedAlpha; // @synthesize hasPremultipliedAlpha=_hasPremultipliedAlpha;
@property(nonatomic) unsigned int nSurfaces; // @synthesize nSurfaces;
@property(nonatomic) unsigned int nPrimarySurfaces; // @synthesize nPrimarySurfaces;
@property(nonatomic) unsigned int nComponents; // @synthesize nComponents;
@property(nonatomic) unsigned int rowBytes; // @synthesize rowBytes=_rowBytes;
@property(nonatomic) unsigned int bitsPerPixel; // @synthesize bitsPerPixel;
@property(nonatomic) unsigned int numMipMapLevels; // @synthesize numMipMapLevels;
@property(nonatomic) unsigned int orientation; // @synthesize orientation;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) int texelFormat; // @synthesize texelFormat;
@property(nonatomic) unsigned int format; // @synthesize format;
@property(nonatomic) unsigned int internalFormat; // @synthesize internalFormat;
@property(nonatomic) unsigned int textureTarget; // @synthesize textureTarget;
@property(nonatomic) unsigned int bindTarget; // @synthesize bindTarget;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) int dataCategory; // @synthesize dataCategory=_dataCategory;
@property(nonatomic) int loadMode; // @synthesize loadMode;
@property(nonatomic) unsigned int GLTextureName; // @synthesize GLTextureName;
@property(readonly) NSData *imageData; // @synthesize imageData;
- (_Bool)premultiplyWithAlpha:(void *)arg1 source:(void *)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id *)arg6;
- (_Bool)reorientToGL:(void *)arg1 source:(void *)arg2 withWidth:(unsigned int)arg3 withHeight:(unsigned int)arg4 withRowBytes:(unsigned int)arg5 error:(id *)arg6;
- (_Bool)determinePVRFormat:(unsigned int)arg1;
- (_Bool)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long long)arg2 andColorModel:(int)arg3;
- (_Bool)uploadToGLTexture:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)_uploadToGLTexture:(unsigned int)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id *)arg8;
- (_Bool)loadCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)loadWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)decodeCGImage:(struct CGImage *)arg1;
- (_Bool)decodeCGImageImageProvider:(struct CGImage *)arg1 CGImageProvider:(struct CGImageProvider *)arg2;
- (_Bool)decodeCGImageDataProvider:(struct CGImage *)arg1;
- (void *)alignmentFix:(unsigned int)arg1 data:(const void *)arg2;
- (_Bool)loadPVRTCData:(id)arg1 error:(id *)arg2;
- (id)initWithDecodedData:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 rowBytes:(unsigned int)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id *)arg8;
- (id)initWithCGImage:(struct CGImage *)arg1 forceCubeMap:(_Bool)arg2 wasCubeMap:(_Bool *)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id *)arg6;
- (id)initWithData:(id)arg1 forceCubeMap:(_Bool)arg2 wasCubeMap:(_Bool *)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)canHonorSRGBrequest;
- (_Bool)shouldApplyReorientToGL;
- (_Bool)shouldApplyPremultiplication;
- (void)updateRequestedOperationsFromOptions:(id)arg1;
- (void)dealloc;
- (id)init;

@end

