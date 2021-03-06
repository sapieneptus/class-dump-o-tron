//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MZXMLMarshaller, NSMutableArray;

@interface ITunesPackageLoader : NSObject
{
    MZXMLMarshaller *_marshaller;
    MZXMLMarshaller *_unmarshaller;
    NSMutableArray *_processingDelegates;
}

+ (void)flushDefaultLoader;
+ (id)defaultLoader;
+ (void)initialize;
+ (int)defaultPackageType;
+ (id)defaultPathWithPackageType:(int)arg1;
+ (id)defaultSoftwarePackagePath;
+ (id)defaultPublicationPackagePath;
+ (id)defaultTvPackagePath;
+ (id)defaultFilmPackagePath;
+ (id)defaultMusicPackagePath;
- (id)description;
- (id)pathForPackageOfType:(int)arg1 vendorId:(id)arg2;
- (id)packageNamesAtPath:(id)arg1;
- (id)uniquePackagePathWithPrototypePath:(id)arg1;
- (id)uniquePackagePathWithPrototypeName:(id)arg1;
- (id)uniquePackagePathWithPrototypeName:(id)arg1 packageType:(int)arg2;
- (id)defaultRecyclePathWithPackageType:(int)arg1;
- (id)defaultPackagePathWithPackageType:(int)arg1;
- (id)defaultRecyclePath;
- (id)defaultPackagePath;
- (BOOL)doesPackageExistAtPath:(id)arg1;
- (id)marshallDocument:(id)arg1 error:(id *)arg2;
- (id)loadAndUnmarshallPackage:(id *)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)unmarshallPackage:(id)arg1 error:(id *)arg2;
- (id)unmarshallDocument:(id)arg1 error:(id *)arg2;
- (id)preprocessObjectPriorToMarshalling:(id)arg1;
- (id)postprocessDocumentAfterMarshalling:(id)arg1 object:(id)arg2;
- (id)postprocessObjectAfterUnmarshalling:(id)arg1 document:(id)arg2;
- (id)preprocessDocumentPriorToUnmarshalling:(id)arg1;
- (void)removeProcessingDelegate:(id)arg1;
- (void)addProcessingDelegate:(id)arg1;
- (id)packageAtPath:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)unmarshallerWithError:(id *)arg1;
- (id)marshallerWithError:(id *)arg1;

@end

