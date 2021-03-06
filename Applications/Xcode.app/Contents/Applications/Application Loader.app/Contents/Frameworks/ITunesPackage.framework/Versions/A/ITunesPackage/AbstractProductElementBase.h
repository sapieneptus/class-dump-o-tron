//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class NSArray, NSNumber, NSString;

@interface AbstractProductElementBase : AbstractElement
{
    NSString *_territory;
    NSString *_wholesalePriceTier;
    NSString *_preorderWholesalePriceTier;
    NSString *_salesStartDate;
    NSString *_salesEndDate;
    NSString *_preorderSalesStartDate;
    NSNumber *_clearedForSale;
    NSNumber *_bundleOnly;
    NSArray *_intervals;
}

+ (id)allKnownKeyPaths;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *intervals;
@property(retain, nonatomic) NSNumber *bundleOnly;
@property(retain, nonatomic) NSNumber *clearedForSale;
@property(retain, nonatomic) NSString *preorderSalesStartDate;
@property(retain, nonatomic) NSString *salesEndDate;
@property(retain, nonatomic) NSString *salesStartDate;
@property(retain, nonatomic) NSString *preorderWholesalePriceTier;
@property(retain, nonatomic) NSString *wholesalePriceTier;
@property(retain, nonatomic) NSString *territory;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

