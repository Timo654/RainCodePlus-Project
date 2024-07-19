#include "RCSaveLoadList.h"

URCSaveLoadList::URCSaveLoadList() {
    this->ScrollBox_List = NULL;
    this->SvLd_ListBar_Grp = NULL;
    this->SvLd_ListBar_00 = NULL;
    this->SvLd_ListBar_01 = NULL;
    this->SvLd_ListBar_02 = NULL;
    this->SvLd_ListBar_03 = NULL;
    this->baseListNum = 0;
    this->scrollSize = 0.00f;
    this->isSaveMode = false;
    this->isDlcMode = false;
    this->mapIDStrNum = 7;
}


