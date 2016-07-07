#ifndef _K_SOCKET_MGR_H
#define _K_SOCKET_MGR_H 1

#pragma once
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
extern "C" PCHAR _DLLExport GetUVScoketErrorMsg();

// del
extern "C" H_CONNECTION _DLLExport CreateSocket(int nType, char* szIP, int nPort);

extern "C" HANDLE _DLLExport CreateServer(char* szIP, int nPort);

extern "C" HANDLE _DLLExport CreateClient(char* szIP, int nPort);

extern "C" void _DLLExport CloseSocket(HANDLE socket, H_CONNECTION handle);

extern "C" void _DLLExport SocketUpdate();

extern "C" BOOL _DLLExport SocketSendData(HANDLE socket, H_CONNECTION handle, char* data, int nLen);

#endif // !_K_SOCKET_MGR_H
