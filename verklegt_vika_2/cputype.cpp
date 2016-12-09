#include "cputype.h"

using namespace std;

cpuType::cpuType() { }

/****************************************************************************
                        cpuType - smiður
    stillir smiðinn þegar hann er búinn til með breytum sem byrjanargildi
            @parameter(int id) - ID tölvutegundar
            @parameter(string type) - tegund tölvu
 ****************************************************************************/

cpuType::cpuType(int id, string type)
{
    _ID = id;
    _type = type;
}

cpuType::~cpuType() {}

/****************************************************************************
                                getID
        Dregur fram ID tölvutegundar úr meðlimabreytum og skilar því til baka
                @return(int _id) - skilar id tölvutegundar
 ****************************************************************************/

int cpuType::getId ()
{
    return _ID;
}

/****************************************************************************
                                getType
        Dregur fram tegund tölvu úr meðlimabreytum og skilar henni til baka
                @return(string _type) - skilar tegund tölvu
 ****************************************************************************/

string cpuType::getType ()
{
    return _type;
}
