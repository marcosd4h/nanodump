#pragma once

#include <windows.h>
#include <winternl.h>

#include "nanodump.h"
#include "dinvoke.h"

typedef BOOL(WINAPI* SetKernelObjectSecurity_t) (HANDLE Handle, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR SecurityDescriptor);
typedef BOOL(WINAPI* InitializeSecurityDescriptor_t) (PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD dwRevision);

#define SetKernelObjectSecurity_SW2_HASH 0x06AE0E20
#define InitializeSecurityDescriptor_SW2_HASH 0x0388211D

BOOL get_current_dll_filename(
	OUT LPCWSTR* ppwszDllName);

BOOL delete_known_dll_entry(VOID);
