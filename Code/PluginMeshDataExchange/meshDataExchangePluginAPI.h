#ifndef _MESHDATAEXCHANGEPLUGINAPI_H__
#define _MESHDATAEXCHANGEPLUGINAPI_H__

#include <QtCore/QtGlobal>


#if defined(MESHDATAEXCHANGEPLUGIN_API)
#define MESHDATAEXCHANGEPLUGINAPI Q_DECL_EXPORT
#else
#define MESHDATAEXCHANGEPLUGINAPI Q_DECL_IMPORT
#endif

#endif