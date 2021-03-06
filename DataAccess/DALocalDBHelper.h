/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>
#import "DataAccess-Structs.h"

@class NSString;

@interface DALocalDBHelper : NSObject {
	void* _abDB;
	int _lastSavedABSequenceNumber;
	int _abConnectionCount;
	CalDatabase* _calDB;
	int _calConnectionCount;
	NSString* _fakedOutABDBDir;
	NSString* _fakedOutCalDBDir;
	id _calUnitTestCallbackObject;
	SEL _calUnitTestCallbackSelector;
}
+(id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;
-(void*)abDB;
-(int)abLastSavedSequenceNumber;
-(void)abOpenDB;
-(BOOL)abSaveDB;
-(BOOL)abCloseDBAndSave:(BOOL)save;
-(id)abConstraintPlistPath;
-(CalDatabase*)calDB;
-(void)calOpenDB;
-(BOOL)calSaveDB;
-(BOOL)calSaveDBAndFlushCaches;
-(BOOL)calCloseDBAndSave:(BOOL)save;
-(void)abSetTestABDBDir:(id)dir;
-(id)abTestABDBDir;
-(void)calSetTestCalDBDir:(id)dir;
-(id)calTestCalDBDir;
-(void)calUnitTestsSetCallbackObjectForSave:(id)save callbackSelector:(SEL)selector;
@end

