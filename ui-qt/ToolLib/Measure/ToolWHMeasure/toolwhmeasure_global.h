#ifndef TOOLWHMEASURE_GLOBAL_H
#define TOOLWHMEASURE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TOOLWHMEASURE_LIBRARY)
#  define TOOLWHMEASURESHARED_EXPORT Q_DECL_EXPORT
#else
#  define TOOLWHMEASURESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TOOLWHMEASURE_GLOBAL_H