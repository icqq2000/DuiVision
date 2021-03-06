// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once

#define WINVER		0x0500

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展

#include <afxcmn.h>         // MFC 对 Windows 公共控件的支持

//#include <afxtempl.h>

#include <gdiplus.h> 
using namespace Gdiplus; 

#pragma comment(lib, "gdiplus.lib")

#include "DuiDef.h"
#include "DuiVision.h"
#include "DuiXml.h"

#include "common/XUnZip.h"
#include "common/encoding.h"
//#include "common/registry.h"

// 跨进称通知消息定义
static const UINT WM_CHECK_ITS_ME = RegisterWindowMessage(L"##DUIVISION_APPLICATION##");

// 日志相关定义
#define MAXLOGFILESIZE (1024 << 10)		// 日志文件最大长度
#define _LOG_DATABUFF			1024	// 日志数据缓冲区大小

// 日志级别
#define	__DEBUG		L"DEBUG"
#define	__ERROR		L"ERROR"
#define	__INFO		L"INFO"
#define	__CRITICAL	L"CRITICAL"

// 日志转储文件名
#define	LOG_CONVEY_FILE_NAME	"LogBak"
#define	CONVEY_RULE				"LogBak.*"
#define	MAX_SAVE_NUM			5
