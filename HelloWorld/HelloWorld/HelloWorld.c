//
//  HelloWorld.c
//  HelloWorld
//
//  Created by 王钱钧 on 15/1/21.
//  Copyright (c) 2015年 王钱钧. All rights reserved.
//

#include <mach/mach_types.h>
#include <libkern/libkern.h>

kern_return_t HelloWorld_start(kmod_info_t * ki, void *d);
kern_return_t HelloWorld_stop(kmod_info_t *ki, void *d);

kern_return_t HelloWorld_start(kmod_info_t * ki, void *d)
{
    printf("Hello world\n");
    return KERN_SUCCESS;
}

kern_return_t HelloWorld_stop(kmod_info_t *ki, void *d)
{
    printf("Goodbey world\n");
    return KERN_SUCCESS;
}
