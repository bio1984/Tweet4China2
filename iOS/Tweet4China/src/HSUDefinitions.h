//
//  HSUDefinitions.h
//  Tweet4China
//
//  Created by Jason Hsu on 2/28/13.
//  Copyright (c) 2013 Jason Hsu <support@tuoxie.me>. All rights reserved.
//

#ifndef Tweet4China_HSUDefinitions_h
#define Tweet4China_HSUDefinitions_h

#include "HSUAppDefinitions.h"

#import "UIImageView+Additions.h"
#import "HSUNetworkActivityIndicatorManager.h"
#import "UIAlertView+Blocks.h"
#import "UIActionSheet+Blocks.h"
#import "UIImage+Additions.h"
#import "UIButton+Additions.h"
#import "UIView+Additions.h"
#import "UIViewController+Additions.h"
#import "NSDate+Additions.h"
#import "TTTAttributedLabel.h"
#import "HSURefreshControl.h"
#import "HSUTabController.h"
#import "Reachability.h"
#import "HSUBaseViewController.h"
#import "HSUTwitterEngine.h"
#import "NSString+Additions.h"
#import "HSUAppDelegate.h"

#import "HSUTableCellData.h"
#import "HSUUIEvent.h"
#import "HSUCommonTools.h"
#import "HSULoadMoreCell.h"
#import "HSUNavitationBar.h"
#import "HSUNavigationBarLight.h"
#import "HSUDraftManager.h"
#import "NSData+MD5.h"

#import <SystemConfiguration/SystemConfiguration.h>
#import <MobileCoreServices/MobileCoreServices.h>

#define kTabBarHeight 44
#define kIPadTabBarWidth 84

#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)

#define dp(filename) [([NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]) stringByAppendingPathComponent:filename]
#define tp(filename) [([NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0])stringByAppendingPathComponent:filename]
#define ccr(x, y, w, h) CGRectMake(floorf(x), floorf(y), floorf(w), floorf(h))
#define ccp(x, y) CGPointMake(floorf(x), floorf(y))
#define ccs(w, h) CGSizeMake(floorf(w), floorf(h))
#define edi(top, left, bottom, right) UIEdgeInsetsMake(floorf(top), floorf(left), floorf(bottom), floorf(right))
#define cgrgba(r, g, b, a) [[UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a] CGColor]
#define cgrgb(r, g, b) [[UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1] CGColor]
#define rgba(r, g, b, a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define rgb(r, g, b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1]
#define bw(w) [UIColor colorWithWhite:w/255.0f alpha:1]
#define bwa(w, a) [UIColor colorWithWhite:w/255.0f alpha:a]
#define L(s) NSLog(@"%@", s);
#define LR(rect) NSLog(@"%@", NSStringFromCGRect(rect));
#define LF(f,...) NSLog(f,##__VA_ARGS__);
#define S(f,...) [NSString stringWithFormat:f,##__VA_ARGS__]
#define kBlackColor [UIColor blackColor]
#define kWhiteColor [UIColor whiteColor]
#define kClearColor [UIColor clearColor]
#define kGrayColor [UIColor grayColor]
#define kWinWidth [HSUCommonTools winWidth]
#define kWinHeight [HSUCommonTools winHeight]
#define TWENGINE [HSUTwitterEngine engine]

#define kNamedImageView(s) [[UIImageView alloc] initWithImage:[UIImage imageNamed:s]]
#define GRAY_INDICATOR [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray]
#define MyScreenName [[NSUserDefaults standardUserDefaults] objectForKey:kUserSettings_DBKey][@"screen_name"]
#define DEF_NavitationController_Light [[UINavigationController alloc] initWithNavigationBarClass:[HSUNavigationBarLight class] toolbarClass:nil]


#define kNNStartRefreshing @"HSU_Start_Refreshing"
#define kNNDeleteConversation @"DeleteConversation"
#define kNNConversationBackWithIncompletedSending @"ConversationBackWithIncompletedSending"

#define kDataType_MainStatus @"MainStatus"
#define kDataType_DefaultStatus @"DefaultStatus"
#define kDataType_ChatStatus @"ChatStatus"
#define kDataType_Person @"Person"
#define kDataType_LoadMore @"LoadMore"
#define kDataType_NormalTitle @"NormalTitle"
#define kDataType_Drafts @"Drafts"
#define kDataType_Draft @"Draft"
#define kDataType_Message @"Message"
#define kDataType_Conversation @"Conversation"


#define kTwitter_Parameter_Key_Reply_ID @"in_reply_to_status_id"

#define kUserSettings_DBKey @"user_settings"
#define kUserProfile_DBKey @"user_profile"

#define NOTI_DraftsCountChanged @"HSUDraftsCountChanged"

#endif