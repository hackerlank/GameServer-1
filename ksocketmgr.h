#ifndef _K_SOCKET_MGR_H
#define _K_SOCKET_MGR_H

/*
��Ӧ���Ϊһ���࣬���ǿ��ǵ���Ҫ������ C#���������ȫ����ʽ
*/

#include "stdafx.h"
#include "error.h"
#include "kuvsocket.h"

#define EXPORTBUILD 1

#if defined (EXPORTBUILD) 
# define _DLLExport __declspec (dllexport) 
# else 
# define _DLLExport __declspec (dllimport) 
#endif 

#define eUV_SERVER_SOCKET 0
#define eUV_CLIENT_SOCKET 1

// ����
extern KUVSocket * g_pUVSocket;

extern "C" PCHAR _DLLExport GetUVScoketErrorMsg();

extern "C" LPVOID _DLLExport InitUVSocket();

extern "C" BOOL _DLLExport UninitUVSocket();

extern "C" H_CONNECTION _DLLExport CreateSocket(int nType, char* szIP, int nPort);

extern "C" void _DLLExport CloseSocket(H_CONNECTION handle);

extern "C" void _DLLExport SocketUpdate();

extern "C" BOOL _DLLExport SocketSendData(H_CONNECTION handle, char* data, int nLen);

extern "C" void _DLLExport SetReadCallback(FUNC_READ func);

extern "C" void _DLLExport SetConnectCallback(FUNC_CONNECT func);

#endif // !_K_SOCKET_MGR_H
#pragma once
