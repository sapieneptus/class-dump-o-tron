//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, IDEFileReference, IDENavigableItem, NSArray, NSImage, NSString;

@interface IDEContainerItemSnapshot : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSString *_name;
    NSImage *_image;
    DVTDocumentLocation *_contentDocumentLocation;
    DVTFileDataType *_documentType;
    id _originalObject;
    NSArray *_subitems;
    BOOL _leaf;
    BOOL _isMajorGroup;
    DVTFilePath *_filePath;
    IDENavigableItem *_primaryChildItem;
    BOOL _showSubitems;
}

@property(getter=isLeaf) BOOL leaf; // @synthesize leaf=_leaf;
@property(readonly) BOOL showSubitems; // @synthesize showSubitems=_showSubitems;
@property(retain) NSArray *subitems; // @synthesize subitems=_subitems;
@property(readonly) IDENavigableItem *primaryChildItem; // @synthesize primaryChildItem=_primaryChildItem;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) id originalObject; // @synthesize originalObject=_originalObject;
@property(readonly) BOOL isMajorGroup; // @synthesize isMajorGroup=_isMajorGroup;
@property(readonly) DVTFileDataType *navigableItem_documentType; // @synthesize navigableItem_documentType=_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation; // @synthesize navigableItem_contentDocumentLocation=_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image; // @synthesize navigableItem_image=_image;
@property(retain, nonatomic) NSString *navigableItem_name; // @synthesize navigableItem_name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithNavigableItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

