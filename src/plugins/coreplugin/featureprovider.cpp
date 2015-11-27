/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company.  For licensing terms and
** conditions see http://www.qt.io/terms-conditions.  For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file.  Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, The Qt Company gives you certain additional
** rights.  These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
****************************************************************************/

#include "featureprovider.h"

/*!
    \class Core::IFeatureProvider
    \mainclass

    \brief The IFeatureProvider class defines an interface to manage features
    for wizards.

    The features provided by an object in the object pool implementing IFeatureProvider
    will be respected by wizards implementing IWizard.

    This feature set, provided by all instances of IFeatureProvider in the
    object pool, is checked against \c IWizard::requiredFeatures()
    and only if all required features are available, the wizard is displayed
    when creating a new file or project.

    The QtSupport plugin creates an instance of IFeatureProvider and provides Qt specific
    features for the available versions of Qt.

    \sa Core::IWizard
    \sa QtSupport::QtVersionManager
*/

/*!
    \fn IFeatureProvider::~IFeatureProvider()
    \internal
*/
