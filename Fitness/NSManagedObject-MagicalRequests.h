//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface NSManagedObject (MagicalRequests)
+ (id)MR_requestAllSortedBy:(id)arg1 ascending:(BOOL)arg2 withPredicate:(id)arg3;
+ (id)MR_requestAllSortedBy:(id)arg1 ascending:(BOOL)arg2 withPredicate:(id)arg3 inContext:(id)arg4;
+ (id)MR_requestAllSortedBy:(id)arg1 ascending:(BOOL)arg2;
+ (id)MR_requestAllSortedBy:(id)arg1 ascending:(BOOL)arg2 inContext:(id)arg3;
+ (id)MR_requestFirstByAttribute:(id)arg1 withValue:(id)arg2 inContext:(id)arg3;
+ (id)MR_requestFirstByAttribute:(id)arg1 withValue:(id)arg2;
+ (id)MR_requestFirstWithPredicate:(id)arg1 inContext:(id)arg2;
+ (id)MR_requestFirstWithPredicate:(id)arg1;
+ (id)MR_requestAllWhere:(id)arg1 isEqualTo:(id)arg2 inContext:(id)arg3;
+ (id)MR_requestAllWhere:(id)arg1 isEqualTo:(id)arg2;
+ (id)MR_requestAllWithPredicate:(id)arg1 inContext:(id)arg2;
+ (id)MR_requestAllWithPredicate:(id)arg1;
+ (id)MR_requestAllInContext:(id)arg1;
+ (id)MR_requestAll;
+ (id)MR_createFetchRequest;
+ (id)MR_createFetchRequestInContext:(id)arg1;
@end

