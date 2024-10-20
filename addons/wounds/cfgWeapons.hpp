class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class kat_burncover: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(burncover_displayName);
        picture = QPATHTOF(ui\burncover.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\HeatPack_F.p3d";
        descriptionShort = CSTRING(burncover_DescShort);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.2;
        }; 
    };
    class kat_burncover_face: kat_burncover {
        displayName = CSTRING(burncover_face_displayName);
        picture = QPATHTOF(ui\burncover.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\HeatPack_F.p3d";
        descriptionShort = CSTRING(burncover_face_DescShort);
    }
};
