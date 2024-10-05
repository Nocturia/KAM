class CfgVehicles {
    class Man;

    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                class KAT_CheckBurnDegree {
                    displayName = CSTRING(Check_Burn_Degree);
                    condition = "true";
                    statement = QUOTE([ARR_2(_player,_target)] call FUNC(checkBurnDegree));
                    icon = QACEPATHTOF(medical_gui,ui\cross.paa);
                };
            };
        };

        class ACE_SelfActions {
            class KAT_Equipment {
                class KAT_CheckBurnDegreeSelf {
                    displayName = CSTRING(Check_Burn_Degree);
                    condition = "true";
                    statement = QUOTE([ARR_2(_player,_player)] call FUNC(checkBurnDegree));
                    icon = QACEPATHTOF(medical_gui,ui\cross.paa);
                };
            };
        };
    };
};