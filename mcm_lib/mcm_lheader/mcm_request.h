// Copyright © 2017, Che-Wei Hsu <cwxhsu@gmail.com>
// This file is part of the MintCM.
// Some rights reserved. See README.

#ifndef _MCM_REQUEST_H_
#define _MCM_REQUEST_H_




enum MCM_SERVICE_REQUEST
{
    MCM_SREQUEST_GET_ALONE = 0,
    MCM_SREQUEST_SET_ALONE,
    MCM_SREQUEST_GET_ENTRY,
    MCM_SREQUEST_SET_ENTRY,
    MCM_SREQUEST_ADD_ENTRY,
    MCM_SREQUEST_DEL_ENTRY,
    MCM_SREQUEST_GET_ALL_ENTRY,
    MCM_SREQUEST_DEL_ALL_ENTRY,
    MCM_SREQUEST_GET_MAX_COUNT,
    MCM_SREQUEST_GET_COUNT,
    MCM_SREQUEST_GET_USABLE_KEY,
    MCM_SREQUEST_UPDATE,
    MCM_SREQUEST_SAVE,
    MCM_SREQUEST_RUN,
    MCM_SREQUEST_SHUTDOWN,
    MCM_SREQUEST_CHECK_STORE_FILE,
    MCM_SREQUEST_CHECK_MASK_PATH,
    MCM_SREQUEST_GET_PATH_MAX_LENGTH,
    MCM_SREQUEST_GET_LIST_NAME,
    MCM_SREQUEST_GET_LIST_TYPE,
    MCM_SREQUEST_GET_LIST_VALUE,
    MCM_SREQUEST_SET_ANY_TYPE_ALONE,
    MCM_SREQUEST_GET_WITH_TYPE_ALONE,
    MCM_SREQUEST_MAX
};




#endif
