#ifndef STBWINDOWMGR_H
#define STBWINDOWMGR_H

#include <QObject>

namespace yasem
{
class GuiPluginObject;
class MagProfile;
class AbstractWebPage;

class StbWindowMgr : public QObject
{
    Q_OBJECT
public:
    explicit StbWindowMgr(MagProfile *profile, AbstractWebPage* page);

signals:

public slots:
    void openWebFavorites(const QString &url, const QString &params);
    void openWebFavorites(const QString &url, int params);
    void openDownloadManager(const QString &url);
    void setBookmarkImplUrl(const QString &url);

    void showBrowserBookmarks();
    void SetVirtualKeyboardCoord(const QString &coord);
    void setVirtualKeyboardInitAttr(const QString &options);
    void setWebFaceInitAttr(const QString &options);
    QString getCurrWebUrl();
    void initWebWindow(const QString &url);
    void resizeWebWindow(int x, int y, int width, int height);
    void raiseWebWindow();
    void raiseWebFaceWindow();
    void openWebFace(const QString &url);
    void windowInit(const QString &params);
protected:
    GuiPluginObject* gui;
    MagProfile *profile;
    QString localPortalUrl;
    AbstractWebPage* m_page;

    QString transformInnerPortalPathToLocal(QString innerPortalPath);
    QString openNewWindow(const QString &url, const QString &params, const QString &name);

};
}
#endif // STBWINDOWMGR_H
