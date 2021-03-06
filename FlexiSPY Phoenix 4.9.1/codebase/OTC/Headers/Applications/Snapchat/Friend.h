/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSArray, NSString, NSDate;

__attribute__((visibility("hidden")))
@interface Friend : NSObject { //XXUnknownSuperclass {
	BOOL _scrambleBestFriends;
	BOOL _preview;
	BOOL _canSeeCustomStories;
	NSArray* _bests;
	NSDate* _bestsUpdated;
	NSString* _display;
	NSString* _name;
	NSNumber* _score;
	NSNumber* _type;
}
@property(assign, nonatomic) BOOL canSeeCustomStories;
@property(retain, nonatomic) NSNumber* type;
@property(assign, nonatomic) BOOL preview;
@property(assign, nonatomic) BOOL scrambleBestFriends;
@property(retain, nonatomic) NSNumber* score;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* display;
@property(retain, nonatomic) NSDate* bestsUpdated;
@property(retain, nonatomic) NSArray* bests;
+(id)friendWithAddedFriend:(id)addedFriend;
//-(void).cxx_destruct;
-(id)getKey;
-(id)duplicate;
-(id)updateWithFriend:(id)aFriend;
-(id)nameToDisplay;
-(BOOL)hasDisplay;
-(BOOL)shouldFetchBestFriends;
-(BOOL)fetchedBestFriends;
-(id)toDictionary;
-(unsigned)hash;
-(BOOL)isEqualToFriend:(id)aFriend;
-(int)compare:(id)compare;
-(BOOL)matches:(id)matches;
-(BOOL)isEqual:(id)equal;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)initNewFriendFields;
-(id)initWithName:(id)name;
-(id)initWithRecent:(id)recent;
-(id)initWithFriend:(id)aFriend;
-(id)initWithJSONDictionary:(id)jsondictionary;
@end

