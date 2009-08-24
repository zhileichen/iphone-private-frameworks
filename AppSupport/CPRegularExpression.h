/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {
@private
	NSString* _expressionString;
	void* _reserved;
}
// inherited: +(void)initialize;
+(id)regularExpressionWithString:(id)string;
+(const char*)getBytesForString:(id)string lossByte:(unsigned char)byte;
// inherited: -(void)dealloc;
-(id)initWithExpressionString:(id)expressionString;
-(id)initWithExpressionString:(id)expressionString options:(unsigned)options;
-(unsigned)numberOfSubexpressions;
// inherited: -(id)init;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
// inherited: -(BOOL)isEqual:(id)equal;
// inherited: -(unsigned)hash;
-(id)expressionString;
-(NSRange)matchedRangeForCString:(const char*)cstring range:(NSRange)range subexpressionRanges:(NSRange*)ranges count:(unsigned)count;
-(NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange*)ranges count:(unsigned)count;
// in a protocol: -(id)initWithCoder:(id)coder;
// in a protocol: -(void)encodeWithCoder:(id)coder;
@end
