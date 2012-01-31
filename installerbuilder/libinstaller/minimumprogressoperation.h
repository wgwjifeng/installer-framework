/**************************************************************************
**
** This file is part of Installer Framework**
**
** Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).*
**
** Contact:  Nokia Corporation qt-info@nokia.com**
**
** GNU Lesser General Public License Usage
**
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this file.
** Please review the following information to ensure the GNU Lesser General
** Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception version
** 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you are unsure which license is appropriate for your use, please contact
** (qt-info@nokia.com).
**
**************************************************************************/
#ifndef MINIMUMPROGRESSOPERATION_H
#define MINIMUMPROGRESSOPERATION_H

#include "qinstallerglobal.h"

#include <QtCore/QObject>

namespace QInstaller {

class MinimumProgressOperation : public QObject, public Operation
{
    Q_OBJECT

public:
    MinimumProgressOperation();

    void backup();
    bool performOperation();
    bool undoOperation();
    bool testOperation();
    Operation *clone() const;

signals:
    void progressChanged(double progress);
};

} // namespace QInstaller

#endif // MINIMUMPROGRESSOPERATION_H
