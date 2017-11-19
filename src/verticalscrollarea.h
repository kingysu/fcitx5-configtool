//
// Copyright (C) 2017~2017 by CSSlayer
// wengxt@gmail.com
//
// This library is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 2.1 of the
// License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; see the file COPYING. If not,
// see <http://www.gnu.org/licenses/>.
//
#ifndef _KCM_FCITX_VERTICALSCROLLAREA_H_
#define _KCM_FCITX_VERTICALSCROLLAREA_H_

#include <QScrollArea>
namespace fcitx {
namespace kcm {
class VerticalScrollArea : public QScrollArea {
    Q_OBJECT
public:
    explicit VerticalScrollArea(QWidget *parent = 0);
    void setWidget(QWidget *widget);

protected:
    virtual bool eventFilter(QObject *o, QEvent *e);
};

} // namespace kcm
} // namespace fcitx

#endif // _KCM_FCITX_VERTICALSCROLLAREA_H_
