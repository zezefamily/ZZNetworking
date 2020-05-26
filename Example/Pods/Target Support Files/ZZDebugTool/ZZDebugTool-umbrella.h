#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ZZDebug.h"
#import "ZZLogDataManager.h"
#import "ZZLogView.h"
#import "_fishhook.h"

FOUNDATION_EXPORT double ZZDebugToolVersionNumber;
FOUNDATION_EXPORT const unsigned char ZZDebugToolVersionString[];

