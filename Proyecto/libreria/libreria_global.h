#ifndef LIBRERIA_GLOBAL_H
#define LIBRERIA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBRERIA_LIBRARY)
#  define LIBRERIA_EXPORT Q_DECL_EXPORT
#else
#  define LIBRERIA_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBRERIA_GLOBAL_H
