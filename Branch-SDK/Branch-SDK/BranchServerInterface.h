//
//  BranchServerInterface.h
//  Branch-SDK
//
//  Created by Alex Austin on 6/6/14.
//  Copyright (c) 2014 Branch Metrics. All rights reserved.
//

#import "BNCServerInterface.h"

static NSString *REQ_TAG_REGISTER_INSTALL = @"t_register_install";
static NSString *REQ_TAG_REGISTER_OPEN = @"t_register_open";
static NSString *REQ_TAG_REGISTER_CLOSE = @"t_register_close";
static NSString *REQ_TAG_COMPLETE_ACTION = @"t_complete_action";
static NSString *REQ_TAG_GET_REFERRAL_COUNTS = @"t_get_referral_counts";
static NSString *REQ_TAG_GET_REWARD_HISTORY = @"t_get_reward_history";
static NSString *REQ_TAG_GET_REWARDS = @"t_get_rewards";
static NSString *REQ_TAG_REDEEM_REWARDS = @"t_redeem_rewards";
static NSString *REQ_TAG_GET_CUSTOM_URL = @"t_get_custom_url";
static NSString *REQ_TAG_IDENTIFY = @"t_identify_user";
static NSString *REQ_TAG_LOGOUT = @"t_logout";
static NSString *REQ_TAG_PROFILE_DATA = @"t_profile_data";
static NSString *REQ_TAG_GET_REFERRAL_CODE = @"t_get_referral_code";
static NSString *REQ_TAG_VALIDATE_REFERRAL_CODE = @"t_validate_referral_code";
static NSString *REQ_TAG_APPLY_REFERRAL_CODE = @"t_apply_referral_code";
static NSString *REQ_TAG_UPLOAD_LIST_OF_APPS = @"t_upload_list_of_apps";
static NSString *REQ_TAG_GET_LIST_OF_APPS = @"t_get_list_of_apps";

@interface BranchServerInterface : BNCServerInterface

- (void)connectToDebugWithKey:(NSString *)key callback:(BNCServerCallback)callback;
- (void)sendLog:(NSString *)log key:(NSString *)key callback:(BNCServerCallback)callback;
- (void)sendScreenshot:(NSData *)data key:(NSString *)key callback:(BNCServerCallback)callback;
- (void)disconnectFromDebugWithKey:(NSString *)key callback:(BNCServerCallback)callback;

@end
