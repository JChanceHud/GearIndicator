//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface GDataXMLNode : NSObject <NSCopying>
{
    struct _xmlNode *xmlNode_;
    BOOL shouldFreeXMLNode_;
    NSString *cachedName_;
    NSArray *cachedChildren_;
    NSArray *cachedAttributes_;
}

+ (id)prefixForName:(id)arg1;
+ (id)localNameForName:(id)arg1;
+ (id)nodeBorrowingXMLNode:(struct _xmlNode *)arg1;
+ (id)nodeConsumingXMLNode:(struct _xmlNode *)arg1;
+ (id)namespaceWithName:(id)arg1 stringValue:(id)arg2;
+ (id)textWithStringValue:(id)arg1;
+ (id)attributeWithName:(id)arg1 URI:(id)arg2 stringValue:(id)arg3;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1 URI:(id)arg2;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)setShouldFreeXMLNode:(BOOL)arg1;
- (BOOL)shouldFreeXMLNode;
- (struct _xmlNode *)XMLNode;
- (struct _xmlNode *)XMLNodeCopy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)nodesForXPath:(id)arg1 namespaces:(id)arg2 error:(id *)arg3;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (unsigned int)kind;
- (id)childAtIndex:(unsigned int)arg1;
- (id)children;
- (unsigned int)childCount;
- (id)name;
- (id)qualifiedName;
- (id)URI;
- (id)prefix;
- (id)localName;
- (id)XMLString;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)dealloc;
- (id)stringFromXMLString:(const char *)arg1;
- (void)releaseCachedValues;
- (id)initBorrowingXMLNode:(struct _xmlNode *)arg1;
- (id)initConsumingXMLNode:(struct _xmlNode *)arg1;

@end

