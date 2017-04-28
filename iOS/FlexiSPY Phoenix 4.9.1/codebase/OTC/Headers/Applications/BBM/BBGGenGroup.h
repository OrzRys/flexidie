/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BBMElement.h"

@class NSNumber, NSString;

@interface BBGGenGroup : BBMElement
{
    BOOL _allowNonAdminToInvite;
    BOOL _canRequestAdminByPassword;
    BOOL _isAdmin;
    NSString *_customIcon;
    NSNumber *_deletePictureFromMessageAppInvoked;
    NSString *_description;
    NSString *_groupUniqueName;
    NSNumber *_icon;
    NSNumber *_ignoreUpdatesForThisGroup;
    NSNumber *_isCalendarUpdated;
    NSNumber *_isChatsUpdated;
    NSNumber *_isGroupUpdated;
    NSNumber *_isListsUpdated;
    NSNumber *_isMembersUpated;
    NSNumber *_isPicturesUpdated;
    NSString *_name;
    NSNumber *_showThisGroupsChatMessagesInTheMessageApp;
    NSNumber *_showThisGroupsPicturesInTheMessageApp;
    NSString *_uri;
}

+ (id)primaryKeyDictionaryWithIdentifier:(id)arg1;
+ (id)elementWithIdentifier:(id)arg1 andParent:(id)arg2;
+ (id)identifierOfElement:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic, getter=getUri) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic, getter=isShowThisGroupsPicturesInTheMessageApp) NSNumber *showThisGroupsPicturesInTheMessageApp; // @synthesize showThisGroupsPicturesInTheMessageApp=_showThisGroupsPicturesInTheMessageApp;
@property(retain, nonatomic, getter=isShowThisGroupsChatMessagesInTheMessageApp) NSNumber *showThisGroupsChatMessagesInTheMessageApp; // @synthesize showThisGroupsChatMessagesInTheMessageApp=_showThisGroupsChatMessagesInTheMessageApp;
@property(retain, nonatomic, getter=getName) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *isPicturesUpdated; // @synthesize isPicturesUpdated=_isPicturesUpdated;
@property(retain, nonatomic) NSNumber *isMembersUpated; // @synthesize isMembersUpated=_isMembersUpated;
@property(retain, nonatomic) NSNumber *isListsUpdated; // @synthesize isListsUpdated=_isListsUpdated;
@property(retain, nonatomic) NSNumber *isGroupUpdated; // @synthesize isGroupUpdated=_isGroupUpdated;
@property(retain, nonatomic) NSNumber *isChatsUpdated; // @synthesize isChatsUpdated=_isChatsUpdated;
@property(retain, nonatomic) NSNumber *isCalendarUpdated; // @synthesize isCalendarUpdated=_isCalendarUpdated;
@property(nonatomic) BOOL isAdmin; // @synthesize isAdmin=_isAdmin;
@property(retain, nonatomic, getter=isIgnoreUpdatesForThisGroup) NSNumber *ignoreUpdatesForThisGroup; // @synthesize ignoreUpdatesForThisGroup=_ignoreUpdatesForThisGroup;
@property(retain, nonatomic, getter=getIcon) NSNumber *icon; // @synthesize icon=_icon;
@property(retain, nonatomic, getter=getGroupUniqueName) NSString *groupUniqueName; // @synthesize groupUniqueName=_groupUniqueName;
@property(retain, nonatomic, getter=getDescription) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic, getter=isDeletePictureFromMessageAppInvoked) NSNumber *deletePictureFromMessageAppInvoked; // @synthesize deletePictureFromMessageAppInvoked=_deletePictureFromMessageAppInvoked;
@property(retain, nonatomic, getter=getCustomIcon) NSString *customIcon; // @synthesize customIcon=_customIcon;
@property(nonatomic, getter=isCanRequestAdminByPassword) BOOL canRequestAdminByPassword; // @synthesize canRequestAdminByPassword=_canRequestAdminByPassword;
@property(nonatomic, getter=isAllowNonAdminToInvite) BOOL allowNonAdminToInvite; // @synthesize allowNonAdminToInvite=_allowNonAdminToInvite;
//- (void).cxx_destruct;
- (id)primaryKey;
- (id)debugDescription;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)reset;

@end
