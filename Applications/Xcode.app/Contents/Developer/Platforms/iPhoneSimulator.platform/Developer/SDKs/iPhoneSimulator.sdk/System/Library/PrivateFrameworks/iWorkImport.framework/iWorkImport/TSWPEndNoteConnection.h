//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPEndNoteConnection : NSObject
{
    NSArray *_defaultFormats;
    unsigned int _failedPluginLoadingAttempts;
    _Bool _checkedEndNoteAvailability;
    CDStruct_22e7ec3e _availability;
    NSString *_format;
}

+ (void)applyEndNoteXml:(id)arg1 toCitationRecord:(id)arg2;
+ (id)currentPluginDownloadURL;
+ (id)sharedEndNoteConnection;
@property(retain) NSString *format; // @synthesize format=_format;
- (id).cxx_construct;
- (id)p_getProxyObject;
- (_Bool)getBibliographyString:(id *)arg1 andCitationStrings:(id *)arg2 forCitationInfos:(id)arg3 usingPosition:(unsigned int)arg4;
- (_Bool)getBibliographyString:(id *)arg1 andCitationStrings:(id *)arg2 forCitationRecords:(id)arg3 usingPosition:(unsigned int)arg4;
- (_Bool)getFormattedTextForCitation:(id)arg1 usingPosition:(unsigned int)arg2 outCitation:(id *)arg3 outBiblioEntry:(id *)arg4;
- (id)infosForAdjacentCitations:(id)arg1 isFootnote:(_Bool)arg2;
- (id)infoForCitation:(id)arg1 isFootnote:(_Bool)arg2;
- (id)infoForCitation:(id)arg1;
- (id)p_infoForCitation:(id)arg1 isAdjacent:(_Bool)arg2 isFootnote:(_Bool)arg3;
- (_Bool)anyOpenNonEmptyLibraries;
- (_Bool)anyOpenLibraries;
- (id)defaultStyle;
- (id)favoriteStyles;
- (id)outputStyles;
- (id)recordsForSearchString:(id)arg1 forContext:(id)arg2;
- (_Bool)launchEndNote:(_Bool)arg1;
- (_Bool)isEndNoteAvailable;
- (CDStruct_22e7ec3e)availability;
- (id)availableFormats;
- (id)formatForTag:(long long)arg1;
- (long long)tagForFormat:(id)arg1;
- (void)dealloc;
- (id)init;

@end

