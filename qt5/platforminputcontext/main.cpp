//
// Copyright (C) 2012~2017 by CSSlayer
// wengxt@gmail.com
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// 1. Redistributions of source code must retain the above Copyright
//    notice, this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above Copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// 3. Neither the name of the authors nor the names of its contributors
//    may be used to endorse or promote products derived from this
//    software without specific prior written permission.
//

#include "main.h"

namespace fcitx {

QStringList QFcitxPlatformInputContextPlugin::keys() const {
    return QStringList{QStringLiteral("fcitx5"), QStringLiteral("fcitx")};
}

QFcitxPlatformInputContext *
QFcitxPlatformInputContextPlugin::create(const QString &system,
                                         const QStringList &paramList) {
    Q_UNUSED(paramList);
    if (system.compare(system, QStringLiteral("fcitx5"), Qt::CaseInsensitive) ==
            0 ||
        system.compare(system, QStringLiteral("fcitx"), Qt::CaseInsensitive) ==
            0) {
        return new QFcitxPlatformInputContext;
    }
    return 0;
}
} // namespace fcitx
