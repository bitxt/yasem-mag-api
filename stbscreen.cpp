#include "stbscreen.h"
#include "magprofile.h"
#include "mag_enums.h"

using namespace yasem;

StbScreen::StbScreen(MagProfile *profile)
{
    DatasourcePluginObject* ds = profile->datasource();

    QString gmode = ds->get(DB_TAG_RDIR, "gmode", "1280");

    if(gmode == "720")
    {
        width = 720;
        height = 576;
    }
    else if(gmode == "1920")
    {
        width = 1920;
        height = 1080;
    }
    else
    {
        width = 1280;
        height = 720;
    }

    colorDepth = 32;

    this->profile = profile;
}

