#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CAT "KAT - ADV Medical: Wounds"

[
    QGVAR(BurnsActive),
    "CHECKBOX",
    LLSTRING(ENABLE_BURNS),
    [CBA_SETTINGS_CAT, LSTRING(SubCategory_Burns)],
    [true],
    true
] call CBA_Settings_fnc_init;

ADDON = true;
