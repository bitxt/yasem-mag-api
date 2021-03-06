#ifndef STBSTORAGE_H
#define STBSTORAGE_H

#include "enums.h"
#include "macros.h"
#include "magprofile.h"

#include <QObject>
#include <QHash>

namespace yasem
{

namespace SDK {
class MediaPlayer;
class WebPage;

}

class StbStorage : public QObject
{
    Q_OBJECT
public:
    explicit StbStorage(MagProfile *m_profile, SDK::WebPage* page);
    virtual ~StbStorage();

signals:

public slots:

    void removeItem(const QString &name);
    void setItem(const QString &name, const QString &value);
    QString getItem(const QString &name);
protected:
    MagProfile *m_profile;
    SDK::WebPage* m_page;
};

}

#endif // STBSTORAGE_H
